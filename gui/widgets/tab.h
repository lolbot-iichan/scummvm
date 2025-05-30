/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef GUI_WIDGETS_TAB_H
#define GUI_WIDGETS_TAB_H

#include "gui/widget.h"
#include "common/str.h"
#include "common/array.h"

namespace GUI {

enum {
	kTabForwards = 1,
	kTabBackwards = -1
};

class TabWidget : public Widget {
	struct Tab {
		Common::U32String title;
		Common::String dialogName;
		Widget *firstWidget;
		int _tabWidth;
	};
	typedef Common::Array<Tab> TabList;

protected:
	int _activeTab;
	int _firstVisibleTab;
	int _lastVisibleTab;
	TabList _tabs;
	int _tabHeight;
	int _minTabWidth;
	int _titleSpacing;

	ThemeEngine::TextAlignVertical _alignV;

	int _bodyRP, _bodyTP, _bodyLP, _bodyBP;
	ThemeEngine::DialogBackground _bodyBackgroundType;

	int _titleVPad;

	int _butRP, _butTP, _butW, _butH;

	ButtonWidget *_navLeft, *_navRight;
	bool _navButtonsVisible;
	int _lastRead;

	void recalc();

public:
	TabWidget(GuiObject *boss, int x, int y, int w, int h, ThemeEngine::TextAlignVertical alignV = ThemeEngine::kTextAlignVTop);
	TabWidget(GuiObject *boss, const Common::String &name, ThemeEngine::TextAlignVertical alignV = ThemeEngine::kTextAlignVTop);
	~TabWidget() override;

	void init();

	/**
	 * Add a new tab with the given title. Returns a unique ID which can be used
	 * to identify the tab (to remove it / activate it etc.).
	 */
	int addTab(const Common::U32String &title, const Common::String &dialogName);

	/**
	 * Remove the tab with the given tab ID. Disposes all child widgets of that tab.
	 * TODO: This code is *unfinished*. In particular, it changes the
	 * tabIDs, so that they are not unique anymore! This is bad.
	 * If we need to, we could fix this by changing the tab IDs from being an index
	 * into the _tabs array to a real "unique" ID, which gets stored in the Tab struct.
	 * It won't be difficult to implement this, but since currently no code seems to make
	 * use of the feature...
	 */
	void removeTab(int tabID);

	int getActiveTab() {
		return _activeTab;
	}

	/**
	 * Set the active tab by specifying a valid tab ID.
	 * setActiveTab changes the value of _firstWidget. This means new
	 * Widgets are always added to the active tab.
	 */
	void setActiveTab(int tabID);

	int getTabCount();

	void setTabTitle(int tabID, const Common::U32String &title) {
		assert(0 <= tabID && tabID < (int)_tabs.size());
		_tabs[tabID].title = title;
	}

	void handleMouseDown(int x, int y, int button, int clickCount) override;
	void handleMouseMoved(int x, int y, int button) override;
	void handleMouseLeft(int button) override { _lastRead = -1; };
	bool handleKeyDown(Common::KeyState state) override;
	void handleMouseWheel(int x, int y, int direction) override;
	void handleCommand(CommandSender *sender, uint32 cmd, uint32 data) override;
	virtual int getFirstVisible() const;
	virtual void setFirstVisible(int tabID, bool adjustIfRoom = false);

	bool containsWidget(Widget *) const override;

	void reflowLayout() override;

	void draw() override;
	void markAsDirty() override;

protected:
	// We overload getChildY to make sure child widgets are positioned correctly.
	// Essentially this compensates for the space taken up by the tab title header.
	int16 getChildY() const override;
	uint16 getHeight() const override;

	void drawWidget() override;

	Widget *findWidget(int x, int y) override;

	virtual void adjustTabs(int value);

	virtual void computeLastVisibleTab(bool adjustFirstIfRoom);
};

} // End of namespace GUI

#endif

// Copyright (C) 2024 Javier Castorena
// 
// This file is part of gtk4Window.
// 
// gtk4Window is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// gtk4Window is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with gtk4Window.  If not, see <http://www.gnu.org/licenses/>.

#ifdef _MAIN_WINDOW_H_
#define _MAIN_WINDOW_H_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define MAIN_TYPE_WINDOW ( main_window_get_type() )

G_DECLARE_FINAL_TYPE ( MainWindow, main_window, MAIN, WINDOW, GObject)

struct _MainWindowClass
{
	GObjectClass main_window_class;
};

struct _MainWindow
{
	GObject main_window_instance;
};

GType main_window_get_type ( void );

G_END_DECLS

#endif // _MAIN_WINDOW_H_
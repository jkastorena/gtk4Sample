/**
 * Copyright (C) 2024 Javier Castorena
 * 
 * This file is part of gtk4Window.
 * 
 * gtk4Window is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * gtk4Window is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with gtk4Window.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "main_window.h"
#include <gtk/gtk.h>

struct _MainWindow
{
  GObject parent;
};

G_DEFINE_TYPE (MainWindow, main_window, GTK_TYPE_APPLICATION_WINDOW)

static void
main_window_init (MainWindow *self)
{
  GtkWidget *box;
  GtkWidget *button;
}

static void
main_window_class_init (MainWindowClass *klass)
{
}

GtkWidget *
main_window_new (void)
{
  return GTK_WIDGET (g_object_new (main_window_get_type (), NULL));
}

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
#include "person.h"
#include "product.h"

#include <gtk/gtk.h>

static void 
activate ( GtkApplication *app,
            gpointer       user_data )
{
    GtkWidget *window;
    
    window = gtk_application_window_new ( app );
    
    gtk_window_set_title ( GTK_WINDOW ( window ), "Kaguama's Store" );
    gtk_window_set_default_size ( GTK_WINDOW ( window ), 600, 600 );

    gtk_widget_show ( window );
}

int main ( int argc, char *argv[])
{
    guint status;
    GtkApplication *app;

    app = gtk_application_new ( "org.gtk.kaguamas", G_APPLICATION_FLAGS_NONE );
    g_signal_connect ( app, "activate", G_CALLBACK ( activate ), NULL );

    status = g_application_run ( G_APPLICATION ( app ), argc, argv );
    g_object_unref ( app );

    return status;
}

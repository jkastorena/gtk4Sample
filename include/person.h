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

#ifdef __PERSON_H__
#define __PERSON_H__

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define TYPE_PERSON ( person_get_type() )

G_DECLARE_FINAL_TYPE (Person, person, PERSON, G_OBJECT, GObject)

struct _Person 
{
    GObject person_instance;
};

struct _PersonClass 
{
    GObjectClass person_class;
};

GType person_get_type (void);

G_END_DECLS

#endif // __PERSON_H__
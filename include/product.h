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

#ifdef _PRODUCT_H_
#define _PRODUCT_H_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define TYPE_PRODUCT ( product_get_type() )

G_DECLARE_FINAL_TYPE ( Product, product, TYPE_PRODUCT, G_OBJECT, GObject )

struct _Product
{
	GObject product_instance;
};

struct _ProductClass
{
	GObjectClass product_class;
};

GType product_get_type ( void )

G_END_DECLS

#endif /* _PRODUCT_H_ */
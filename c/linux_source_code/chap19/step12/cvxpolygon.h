#ifndef __CVX_POLYGON_H__
#define __CVX_POLYGON_H__
#include <gtk/gtk.h>

G_BEGIN_DECLS

typedef struct _CvxPolygon CvxPolygon;

#include "cvxfield.h"

struct _CvxPolygon
{
  CvxField* field;
  GList*    nodes;
};

#define     CVX_POLYGON_LINE_WIDTH    2.0

CvxPolygon* cvx_polygon_new (CvxField* field, GList* nodes);
void        cvx_polygon_render (CvxPolygon* polygon, cairo_t* cr);
void        cvx_polygon_set_shape (CvxPolygon* polygon, GList* nodes);

G_END_DECLS

#endif // __CG_POLYGON_H__


Help on class ClientDC in module wx._gdi:

class ClientDC(WindowDC)
 |  A wx.ClientDC must be constructed if an application wishes to paint on
 |  the client area of a window from outside an EVT_PAINT event. This should
 |  normally be constructed as a temporary stack object; don't store a
 |  wx.ClientDC object long term.
 |  
 |  To draw on a window from within an EVT_PAINT handler, construct a
 |  `wx.PaintDC` object.
 |  
 |  To draw on the whole window including decorations, construct a
 |  `wx.WindowDC` object (Windows only).
 |  
 |  Method resolution order:
 |      ClientDC
 |      WindowDC
 |      DC
 |      wx._core.Object
 |      __builtin__.object
 |  
 |  Methods defined here:
 |  
 |  __init__(self, *args, **kwargs)
 |      __init__(self, Window win) -> ClientDC
 |      
 |      Constructor. Pass the window on which you wish to paint.
 |  
 |  __repr__ = _swig_repr(self)
 |  
 |  ----------------------------------------------------------------------
 |  Data descriptors defined here:
 |  
 |  thisown
 |      The membership flag
 |  
 |  ----------------------------------------------------------------------
 |  Methods inherited from DC:
 |  
 |  BeginDrawing(self)
 |      # These have been deprecated in wxWidgets.  Since they never
 |      # really did anything to begin with, just make them be NOPs.
 |  
 |  Blit(*args, **kwargs)
 |      Blit(self, int xdest, int ydest, int width, int height, DC source, 
 |          int xsrc, int ysrc, int rop=COPY, bool useMask=False, 
 |          int xsrcMask=-1, int ysrcMask=-1) -> bool
 |      
 |      Copy from a source DC to this DC.  Parameters specify the destination
 |      coordinates, size of area to copy, source DC, source coordinates,
 |      logical function, whether to use a bitmap mask, and mask source
 |      position.
 |  
 |  BlitPointSize(*args, **kwargs)
 |      BlitPointSize(self, Point destPt, Size sz, DC source, Point srcPt, int rop=COPY, 
 |          bool useMask=False, Point srcPtMask=DefaultPosition) -> bool
 |      
 |      Copy from a source DC to this DC.  Parameters specify the destination
 |      coordinates, size of area to copy, source DC, source coordinates,
 |      logical function, whether to use a bitmap mask, and mask source
 |      position.
 |  
 |  CalcBoundingBox(*args, **kwargs)
 |      CalcBoundingBox(self, int x, int y)
 |      
 |      Adds the specified point to the bounding box which can be retrieved
 |      with `MinX`, `MaxX` and `MinY`, `MaxY` or `GetBoundingBox` functions.
 |  
 |  CalcBoundingBoxPoint(*args, **kwargs)
 |      CalcBoundingBoxPoint(self, Point point)
 |      
 |      Adds the specified point to the bounding box which can be retrieved
 |      with `MinX`, `MaxX` and `MinY`, `MaxY` or `GetBoundingBox` functions.
 |  
 |  CanDrawBitmap(*args, **kwargs)
 |      CanDrawBitmap(self) -> bool
 |  
 |  CanGetTextExtent(*args, **kwargs)
 |      CanGetTextExtent(self) -> bool
 |  
 |  Clear(*args, **kwargs)
 |      Clear(self)
 |      
 |      Clears the device context using the current background brush.
 |  
 |  CopyAttributes(*args, **kwargs)
 |      CopyAttributes(self, DC dc)
 |  
 |  CrossHair(*args, **kwargs)
 |      CrossHair(self, int x, int y)
 |      
 |      Displays a cross hair using the current pen. This is a vertical and
 |      horizontal line the height and width of the window, centred on the
 |      given point.
 |  
 |  CrossHairPoint(*args, **kwargs)
 |      CrossHairPoint(self, Point pt)
 |      
 |      Displays a cross hair using the current pen. This is a vertical and
 |      horizontal line the height and width of the window, centred on the
 |      given point.
 |  
 |  DestroyClippingRegion(*args, **kwargs)
 |      DestroyClippingRegion(self)
 |      
 |      Destroys the current clipping region so that none of the DC is
 |      clipped.
 |  
 |  DeviceToLogicalX(*args, **kwargs)
 |      DeviceToLogicalX(self, int x) -> int
 |      
 |      Convert device X coordinate to logical coordinate, using the current
 |      mapping mode.
 |  
 |  DeviceToLogicalXRel(*args, **kwargs)
 |      DeviceToLogicalXRel(self, int x) -> int
 |      
 |      Convert device X coordinate to relative logical coordinate, using the
 |      current mapping mode but ignoring the x axis orientation. Use this
 |      function for converting a width, for example.
 |  
 |  DeviceToLogicalY(*args, **kwargs)
 |      DeviceToLogicalY(self, int y) -> int
 |      
 |      Converts device Y coordinate to logical coordinate, using the current
 |      mapping mode.
 |  
 |  DeviceToLogicalYRel(*args, **kwargs)
 |      DeviceToLogicalYRel(self, int y) -> int
 |      
 |      Convert device Y coordinate to relative logical coordinate, using the
 |      current mapping mode but ignoring the y axis orientation. Use this
 |      function for converting a height, for example.
 |  
 |  DrawArc(*args, **kwargs)
 |      DrawArc(self, int x1, int y1, int x2, int y2, int xc, int yc)
 |      
 |      Draws an arc of a circle, centred on the *center* point (xc, yc), from
 |      the first point to the second. The current pen is used for the outline
 |      and the current brush for filling the shape.
 |      
 |      The arc is drawn in an anticlockwise direction from the start point to
 |      the end point.
 |  
 |  DrawArcPoint(*args, **kwargs)
 |      DrawArcPoint(self, Point pt1, Point pt2, Point center)
 |      
 |      Draws an arc of a circle, centred on the *center* point (xc, yc), from
 |      the first point to the second. The current pen is used for the outline
 |      and the current brush for filling the shape.
 |      
 |      The arc is drawn in an anticlockwise direction from the start point to
 |      the end point.
 |  
 |  DrawBitmap(*args, **kwargs)
 |      DrawBitmap(self, Bitmap bmp, int x, int y, bool useMask=False)
 |      
 |      Draw a bitmap on the device context at the specified point. If
 |      *transparent* is true and the bitmap has a transparency mask, (or
 |      alpha channel on the platforms that support it) then the bitmap will
 |      be drawn transparently.
 |  
 |  DrawBitmapPoint(*args, **kwargs)
 |      DrawBitmapPoint(self, Bitmap bmp, Point pt, bool useMask=False)
 |      
 |      Draw a bitmap on the device context at the specified point. If
 |      *transparent* is true and the bitmap has a transparency mask, (or
 |      alpha channel on the platforms that support it) then the bitmap will
 |      be drawn transparently.
 |  
 |  DrawCheckMark(*args, **kwargs)
 |      DrawCheckMark(self, int x, int y, int width, int height)
 |      
 |      Draws a check mark inside the given rectangle.
 |  
 |  DrawCheckMarkRect(*args, **kwargs)
 |      DrawCheckMarkRect(self, Rect rect)
 |      
 |      Draws a check mark inside the given rectangle.
 |  
 |  DrawCircle(*args, **kwargs)
 |      DrawCircle(self, int x, int y, int radius)
 |      
 |      Draws a circle with the given center point and radius.  The current
 |      pen is used for the outline and the current brush for filling the
 |      shape.
 |  
 |  DrawCirclePoint(*args, **kwargs)
 |      DrawCirclePoint(self, Point pt, int radius)
 |      
 |      Draws a circle with the given center point and radius.  The current
 |      pen is used for the outline and the current brush for filling the
 |      shape.
 |  
 |  DrawEllipse(*args, **kwargs)
 |      DrawEllipse(self, int x, int y, int width, int height)
 |      
 |      Draws an ellipse contained in the specified rectangle. The current pen
 |      is used for the outline and the current brush for filling the shape.
 |  
 |  DrawEllipseList(self, ellipses, pens=None, brushes=None)
 |      Draw a list of ellipses as quickly as possible.
 |      
 |          :param ellipses: A sequence of 4-element sequences representing
 |                          each ellipse to draw, (x,y, w,h).
 |          :param pens:    If None, then the current pen is used.  If a
 |                          single pen then it will be used for all ellipses.
 |                          If a list of pens then there should be one for each 
 |                          ellipse in ellipses.
 |          :param brushes: A brush or brushes to be used to fill the ellipses,
 |                          with similar semantics as the pens parameter.
 |  
 |  DrawEllipsePointSize(*args, **kwargs)
 |      DrawEllipsePointSize(self, Point pt, Size sz)
 |      
 |      Draws an ellipse contained in the specified rectangle. The current pen
 |      is used for the outline and the current brush for filling the shape.
 |  
 |  DrawEllipseRect(*args, **kwargs)
 |      DrawEllipseRect(self, Rect rect)
 |      
 |      Draws an ellipse contained in the specified rectangle. The current pen
 |      is used for the outline and the current brush for filling the shape.
 |  
 |  DrawEllipticArc(*args, **kwargs)
 |      DrawEllipticArc(self, int x, int y, int w, int h, double start, double end)
 |      
 |      Draws an arc of an ellipse, with the given rectangle defining the
 |      bounds of the ellipse. The current pen is used for drawing the arc and
 |      the current brush is used for drawing the pie.
 |      
 |      The *start* and *end* parameters specify the start and end of the arc
 |      relative to the three-o'clock position from the center of the
 |      rectangle. Angles are specified in degrees (360 is a complete
 |      circle). Positive values mean counter-clockwise motion. If start is
 |      equal to end, a complete ellipse will be drawn.
 |  
 |  DrawEllipticArcPointSize(*args, **kwargs)
 |      DrawEllipticArcPointSize(self, Point pt, Size sz, double start, double end)
 |      
 |      Draws an arc of an ellipse, with the given rectangle defining the
 |      bounds of the ellipse. The current pen is used for drawing the arc and
 |      the current brush is used for drawing the pie.
 |      
 |      The *start* and *end* parameters specify the start and end of the arc
 |      relative to the three-o'clock position from the center of the
 |      rectangle. Angles are specified in degrees (360 is a complete
 |      circle). Positive values mean counter-clockwise motion. If start is
 |      equal to end, a complete ellipse will be drawn.
 |  
 |  DrawIcon(*args, **kwargs)
 |      DrawIcon(self, Icon icon, int x, int y)
 |      
 |      Draw an icon on the display (does nothing if the device context is
 |      PostScript). This can be the simplest way of drawing bitmaps on a
 |      window.
 |  
 |  DrawIconPoint(*args, **kwargs)
 |      DrawIconPoint(self, Icon icon, Point pt)
 |      
 |      Draw an icon on the display (does nothing if the device context is
 |      PostScript). This can be the simplest way of drawing bitmaps on a
 |      window.
 |  
 |  DrawImageLabel(*args, **kwargs)
 |      DrawImageLabel(self, String text, Bitmap image, Rect rect, int alignment=wxALIGN_LEFT|wxALIGN_TOP, 
 |          int indexAccel=-1) -> Rect
 |      
 |      Draw *text* and an image (which may be ``wx.NullBitmap`` to skip
 |      drawing it) within the specified rectangle, abiding by the alignment
 |      flags.  Will additionally emphasize the character at *indexAccel* if
 |      it is not -1.  Returns the bounding rectangle.
 |  
 |  DrawLabel(*args, **kwargs)
 |      DrawLabel(self, String text, Rect rect, int alignment=wxALIGN_LEFT|wxALIGN_TOP, 
 |          int indexAccel=-1)
 |      
 |      Draw *text* within the specified rectangle, abiding by the alignment
 |      flags.  Will additionally emphasize the character at *indexAccel* if
 |      it is not -1.
 |  
 |  DrawLine(*args, **kwargs)
 |      DrawLine(self, int x1, int y1, int x2, int y2)
 |      
 |      Draws a line from the first point to the second. The current pen is
 |      used for drawing the line. Note that the second point is *not* part of
 |      the line and is not drawn by this function (this is consistent with
 |      the behaviour of many other toolkits).
 |  
 |  DrawLineList(self, lines, pens=None)
 |      Draw a list of lines as quickly as possible.
 |      
 |          :param lines:  A sequence of 4-element sequences representing
 |                          each line to draw, (x1,y1, x2,y2).
 |          :param pens:    If None, then the current pen is used.  If a
 |                          single pen then it will be used for all lines.  If
 |                          a list of pens then there should be one for each line
 |                          in lines.
 |  
 |  DrawLinePoint(*args, **kwargs)
 |      DrawLinePoint(self, Point pt1, Point pt2)
 |      
 |      Draws a line from the first point to the second. The current pen is
 |      used for drawing the line. Note that the second point is *not* part of
 |      the line and is not drawn by this function (this is consistent with
 |      the behaviour of many other toolkits).
 |  
 |  DrawLines(*args, **kwargs)
 |      DrawLines(self, List points, int xoffset=0, int yoffset=0)
 |      
 |      Draws lines using a sequence of `wx.Point` objects, adding the
 |      optional offset coordinate. The current pen is used for drawing the
 |      lines.
 |  
 |  DrawPoint(*args, **kwargs)
 |      DrawPoint(self, int x, int y)
 |      
 |      Draws a point using the current pen.
 |  
 |  DrawPointList(self, points, pens=None)
 |      Draw a list of points as quickly as possible.
 |      
 |          :param points:  A sequence of 2-element sequences representing
 |                          each point to draw, (x,y).
 |          :param pens:    If None, then the current pen is used.  If a
 |                          single pen then it will be used for all points.  If
 |                          a list of pens then there should be one for each point
 |                          in points.
 |  
 |  DrawPointPoint(*args, **kwargs)
 |      DrawPointPoint(self, Point pt)
 |      
 |      Draws a point using the current pen.
 |  
 |  DrawPolygon(*args, **kwargs)
 |      DrawPolygon(self, List points, int xoffset=0, int yoffset=0,
 |          wxPolygonFillMode fillStyle=ODDEVEN_RULE)
 |      
 |      Draws a filled polygon using a sequence of `wx.Point` objects, adding
 |      the optional offset coordinate.  The last argument specifies the fill
 |      rule: ``wx.ODDEVEN_RULE`` (the default) or ``wx.WINDING_RULE``.
 |      
 |      The current pen is used for drawing the outline, and the current brush
 |      for filling the shape. Using a transparent brush suppresses
 |      filling. Note that wxWidgets automatically closes the first and last
 |      points.
 |  
 |  DrawPolygonList(self, polygons, pens=None, brushes=None)
 |      Draw a list of polygons, each of which is a list of points.
 |      
 |          :param polygons: A sequence of sequences of sequences.
 |                           [[(x1,y1),(x2,y2),(x3,y3)...],
 |                           [(x1,y1),(x2,y2),(x3,y3)...]]
 |                            
 |          :param pens:    If None, then the current pen is used.  If a
 |                          single pen then it will be used for all polygons.
 |                          If a list of pens then there should be one for each 
 |                          polygon.
 |          :param brushes: A brush or brushes to be used to fill the polygons,
 |                          with similar semantics as the pens parameter.
 |  
 |  DrawRectangle(*args, **kwargs)
 |      DrawRectangle(self, int x, int y, int width, int height)
 |      
 |      Draws a rectangle with the given top left corner, and with the given
 |      size. The current pen is used for the outline and the current brush
 |      for filling the shape.
 |  
 |  DrawRectangleList(self, rectangles, pens=None, brushes=None)
 |      Draw a list of rectangles as quickly as possible.
 |      
 |          :param rectangles:  A sequence of 4-element sequences representing
 |                          each rectangle to draw, (x,y, w,h).
 |          :param pens:    If None, then the current pen is used.  If a
 |                          single pen then it will be used for all rectangles.
 |                          If a list of pens then there should be one for each 
 |                          rectangle in rectangles.
 |          :param brushes: A brush or brushes to be used to fill the rectagles,
 |                          with similar semantics as the pens parameter.
 |  
 |  DrawRectanglePointSize(*args, **kwargs)
 |      DrawRectanglePointSize(self, Point pt, Size sz)
 |      
 |      Draws a rectangle with the given top left corner, and with the given
 |      size. The current pen is used for the outline and the current brush
 |      for filling the shape.
 |  
 |  DrawRectangleRect(*args, **kwargs)
 |      DrawRectangleRect(self, Rect rect)
 |      
 |      Draws a rectangle with the given top left corner, and with the given
 |      size. The current pen is used for the outline and the current brush
 |      for filling the shape.
 |  
 |  DrawRotatedText(*args, **kwargs)
 |      DrawRotatedText(self, String text, int x, int y, double angle)
 |      
 |      Draws the text rotated by *angle* degrees, if supported by the platform.
 |      
 |      **NOTE**: Under Win9x only TrueType fonts can be drawn by this
 |      function. In particular, a font different from ``wx.NORMAL_FONT``
 |      should be used as the it is not normally a TrueType
 |      font. ``wx.SWISS_FONT`` is an example of a font which is.
 |  
 |  DrawRotatedTextPoint(*args, **kwargs)
 |      DrawRotatedTextPoint(self, String text, Point pt, double angle)
 |      
 |      Draws the text rotated by *angle* degrees, if supported by the platform.
 |      
 |      **NOTE**: Under Win9x only TrueType fonts can be drawn by this
 |      function. In particular, a font different from ``wx.NORMAL_FONT``
 |      should be used as the it is not normally a TrueType
 |      font. ``wx.SWISS_FONT`` is an example of a font which is.
 |  
 |  DrawRoundedRectangle(*args, **kwargs)
 |      DrawRoundedRectangle(self, int x, int y, int width, int height, double radius)
 |      
 |      Draws a rectangle with the given top left corner, and with the given
 |      size. The corners are quarter-circles using the given radius. The
 |      current pen is used for the outline and the current brush for filling
 |      the shape.
 |      
 |      If radius is positive, the value is assumed to be the radius of the
 |      rounded corner. If radius is negative, the absolute value is assumed
 |      to be the proportion of the smallest dimension of the rectangle. This
 |      means that the corner can be a sensible size relative to the size of
 |      the rectangle, and also avoids the strange effects X produces when the
 |      corners are too big for the rectangle.
 |  
 |  DrawRoundedRectanglePointSize(*args, **kwargs)
 |      DrawRoundedRectanglePointSize(self, Point pt, Size sz, double radius)
 |      
 |      Draws a rectangle with the given top left corner, and with the given
 |      size. The corners are quarter-circles using the given radius. The
 |      current pen is used for the outline and the current brush for filling
 |      the shape.
 |      
 |      If radius is positive, the value is assumed to be the radius of the
 |      rounded corner. If radius is negative, the absolute value is assumed
 |      to be the proportion of the smallest dimension of the rectangle. This
 |      means that the corner can be a sensible size relative to the size of
 |      the rectangle, and also avoids the strange effects X produces when the
 |      corners are too big for the rectangle.
 |  
 |  DrawRoundedRectangleRect(*args, **kwargs)
 |      DrawRoundedRectangleRect(self, Rect r, double radius)
 |      
 |      Draws a rectangle with the given top left corner, and with the given
 |      size. The corners are quarter-circles using the given radius. The
 |      current pen is used for the outline and the current brush for filling
 |      the shape.
 |      
 |      If radius is positive, the value is assumed to be the radius of the
 |      rounded corner. If radius is negative, the absolute value is assumed
 |      to be the proportion of the smallest dimension of the rectangle. This
 |      means that the corner can be a sensible size relative to the size of
 |      the rectangle, and also avoids the strange effects X produces when the
 |      corners are too big for the rectangle.
 |  
 |  DrawSpline(*args, **kwargs)
 |      DrawSpline(self, List points)
 |      
 |      Draws a spline between all given control points, (a list of `wx.Point`
 |      objects) using the current pen. The spline is drawn using a series of
 |      lines, using an algorithm taken from the X drawing program 'XFIG'.
 |  
 |  DrawText(*args, **kwargs)
 |      DrawText(self, String text, int x, int y)
 |      
 |      Draws a text string at the specified point, using the current text
 |      font, and the current text foreground and background colours.
 |      
 |      The coordinates refer to the top-left corner of the rectangle bounding
 |      the string. See `GetTextExtent` for how to get the dimensions of a
 |      text string, which can be used to position the text more precisely.
 |      
 |      **NOTE**: under wxGTK the current logical function is used by this
 |      function but it is ignored by wxMSW. Thus, you should avoid using
 |      logical functions with this function in portable programs.
 |  
 |  DrawTextList(self, textList, coords, foregrounds=None, backgrounds=None)
 |      Draw a list of strings using a list of coordinants for positioning each string.
 |      
 |          :param textList:    A list of strings
 |          :param coords:      A list of (x,y) positions
 |          :param foregrounds: A list of `wx.Colour` objects to use for the
 |                              foregrounds of the strings.
 |          :param backgrounds: A list of `wx.Colour` objects to use for the
 |                              backgrounds of the strings.
 |      
 |      NOTE: Make sure you set Background mode to wx.Solid (DC.SetBackgroundMode)
 |            If you want backgrounds to do anything.
 |  
 |  DrawTextPoint(*args, **kwargs)
 |      DrawTextPoint(self, String text, Point pt)
 |      
 |      Draws a text string at the specified point, using the current text
 |      font, and the current text foreground and background colours.
 |      
 |      The coordinates refer to the top-left corner of the rectangle bounding
 |      the string. See `GetTextExtent` for how to get the dimensions of a
 |      text string, which can be used to position the text more precisely.
 |      
 |      **NOTE**: under wxGTK the current logical function is used by this
 |      function but it is ignored by wxMSW. Thus, you should avoid using
 |      logical functions with this function in portable programs.
 |  
 |  EndDoc(*args, **kwargs)
 |      EndDoc(self)
 |      
 |      Ends a document (only relevant when outputting to a printer).
 |  
 |  EndDrawing(self)
 |  
 |  EndPage(*args, **kwargs)
 |      EndPage(self)
 |      
 |      Ends a document page (only relevant when outputting to a printer).
 |  
 |  FloodFill(*args, **kwargs)
 |      FloodFill(self, int x, int y, Colour col, int style=FLOOD_SURFACE) -> bool
 |      
 |      Flood fills the device context starting from the given point, using
 |      the current brush colour, and using a style:
 |      
 |          - **wxFLOOD_SURFACE**: the flooding occurs until a colour other than
 |            the given colour is encountered.
 |      
 |          - **wxFLOOD_BORDER**: the area to be flooded is bounded by the given
 |            colour.
 |      
 |      Returns False if the operation failed.
 |      
 |      Note: The present implementation for non-Windows platforms may fail to
 |      find colour borders if the pixels do not match the colour
 |      exactly. However the function will still return true.
 |  
 |  FloodFillPoint(*args, **kwargs)
 |      FloodFillPoint(self, Point pt, Colour col, int style=FLOOD_SURFACE) -> bool
 |      
 |      Flood fills the device context starting from the given point, using
 |      the current brush colour, and using a style:
 |      
 |          - **wxFLOOD_SURFACE**: the flooding occurs until a colour other than
 |            the given colour is encountered.
 |      
 |          - **wxFLOOD_BORDER**: the area to be flooded is bounded by the given
 |            colour.
 |      
 |      Returns False if the operation failed.
 |      
 |      Note: The present implementation for non-Windows platforms may fail to
 |      find colour borders if the pixels do not match the colour
 |      exactly. However the function will still return true.
 |  
 |  GetAsBitmap(*args, **kwargs)
 |      GetAsBitmap(self, Rect subrect=None) -> Bitmap
 |  
 |  GetBackground(*args, **kwargs)
 |      GetBackground(self) -> Brush
 |      
 |      Gets the brush used for painting the background.
 |  
 |  GetBackgroundMode(*args, **kwargs)
 |      GetBackgroundMode(self) -> int
 |      
 |      Returns the current background mode, either ``wx.SOLID`` or
 |      ``wx.TRANSPARENT``.
 |  
 |  GetBoundingBox(*args, **kwargs)
 |      GetBoundingBox() -> (x1,y1, x2,y2)
 |      
 |      Returns the min and max points used in drawing commands so far.
 |  
 |  GetBrush(*args, **kwargs)
 |      GetBrush(self) -> Brush
 |      
 |      Gets the current brush
 |  
 |  GetCharHeight(*args, **kwargs)
 |      GetCharHeight(self) -> int
 |      
 |      Gets the character height of the currently set font.
 |  
 |  GetCharWidth(*args, **kwargs)
 |      GetCharWidth(self) -> int
 |      
 |      Gets the average character width of the currently set font.
 |  
 |  GetClippingBox(*args, **kwargs)
 |      GetClippingBox() -> (x, y, width, height)
 |      
 |      Gets the rectangle surrounding the current clipping region.
 |  
 |  GetClippingRect(*args, **kwargs)
 |      GetClippingRect(self) -> Rect
 |      
 |      Gets the rectangle surrounding the current clipping region.
 |  
 |  GetDepth(*args, **kwargs)
 |      GetDepth(self) -> int
 |      
 |      Returns the colour depth of the DC.
 |  
 |  GetDeviceOrigin(*args, **kwargs)
 |      GetDeviceOrigin(self) -> Point
 |  
 |  GetDeviceOriginTuple(*args, **kwargs)
 |      GetDeviceOriginTuple() -> (x,y)
 |  
 |  GetFont(*args, **kwargs)
 |      GetFont(self) -> Font
 |      
 |      Gets the current font
 |  
 |  GetFontMetrics(*args, **kwargs)
 |      GetFontMetrics(self) -> FontMetrics
 |  
 |  GetFullTextExtent(*args, **kwargs)
 |      GetFullTextExtent(wxString string, Font font=None) ->
 |         (width, height, descent, externalLeading)
 |      
 |      Get the width, height, decent and leading of the text using the
 |      current or specified font. Only works for single line strings.
 |  
 |  GetHDC(*args, **kwargs)
 |      GetHDC(self) -> long
 |  
 |  GetHandle(*args, **kwargs)
 |      GetHandle(self) -> void
 |  
 |  GetImpl(*args, **kwargs)
 |      GetImpl(self) -> DCImpl
 |  
 |  GetLayoutDirection(*args, **kwargs)
 |      GetLayoutDirection(self) -> int
 |      
 |      Get the layout direction (LTR or RTL)_ for this dc.  On platforms
 |      where RTL layout is supported, the return value will either be
 |      ``wx.Layout_LeftToRight`` or ``wx.Layout_RightToLeft``.
 |      ``wx.Layout_Default`` is returned if layout direction is not
 |      supported.
 |  
 |  GetLogicalFunction(*args, **kwargs)
 |      GetLogicalFunction(self) -> int
 |      
 |      Gets the current logical function (set by `SetLogicalFunction`).
 |  
 |  GetLogicalOrigin(*args, **kwargs)
 |      GetLogicalOrigin(self) -> Point
 |  
 |  GetLogicalOriginTuple(*args, **kwargs)
 |      GetLogicalOriginTuple() -> (x,y)
 |  
 |  GetLogicalScale(*args, **kwargs)
 |      GetLogicalScale() -> (xScale, yScale)
 |  
 |  GetMapMode(*args, **kwargs)
 |      GetMapMode(self) -> int
 |      
 |      Gets the current *mapping mode* for the device context
 |  
 |  GetMultiLineTextExtent(*args, **kwargs)
 |      GetMultiLineTextExtent(wxString string, Font font=None) ->
 |         (width, height, lineHeight)
 |      
 |      Get the width, height, and line height of the text using the
 |      current or specified font. Works for single as well as multi-line
 |      strings.
 |  
 |  GetOptimization(*args, **kw)
 |      # wrap a new function around the callable
 |  
 |  GetPPI(*args, **kwargs)
 |      GetPPI(self) -> Size
 |      
 |      Resolution in pixels per inch
 |  
 |  GetPartialTextExtents(*args, **kwargs)
 |      GetPartialTextExtents(self, text) -> [widths]
 |      
 |      Returns a list of integers such that each value is the distance in
 |      pixels from the begining of text to the coresponding character of
 |      *text*. The generic version simply builds a running total of the widths
 |      of each character using GetTextExtent, however if the various
 |      platforms have a native API function that is faster or more accurate
 |      than the generic implementation then it will be used instead.
 |  
 |  GetPen(*args, **kwargs)
 |      GetPen(self) -> Pen
 |      
 |      Gets the current pen
 |  
 |  GetPixel(*args, **kwargs)
 |      GetPixel(self, int x, int y) -> Colour
 |      
 |      Gets the colour at the specified location on the DC.
 |  
 |  GetPixelPoint(*args, **kwargs)
 |      GetPixelPoint(self, Point pt) -> Colour
 |  
 |  GetResolution(*args, **kwargs)
 |      GetResolution(self) -> int
 |  
 |  GetSize(*args, **kwargs)
 |      GetSize(self) -> Size
 |      
 |      This gets the horizontal and vertical resolution in device units. It
 |      can be used to scale graphics to fit the page. For example, if *maxX*
 |      and *maxY* represent the maximum horizontal and vertical 'pixel' values
 |      used in your application, the following code will scale the graphic to
 |      fit on the printer page::
 |      
 |            w, h = dc.GetSize()
 |            scaleX = maxX*1.0 / w
 |            scaleY = maxY*1.0 / h
 |            dc.SetUserScale(min(scaleX,scaleY),min(scaleX,scaleY))
 |  
 |  GetSizeMM(*args, **kwargs)
 |      GetSizeMM(self) -> Size
 |      
 |      Get the DC size in milimeters.
 |  
 |  GetSizeMMTuple(*args, **kwargs)
 |      GetSizeMMTuple() -> (width, height)
 |      
 |      Get the DC size in milimeters.
 |  
 |  GetSizeTuple(*args, **kwargs)
 |      GetSizeTuple() -> (width, height)
 |      
 |      This gets the horizontal and vertical resolution in device units. It
 |      can be used to scale graphics to fit the page. For example, if *maxX*
 |      and *maxY* represent the maximum horizontal and vertical 'pixel' values
 |      used in your application, the following code will scale the graphic to
 |      fit on the printer page::
 |      
 |            w, h = dc.GetSize()
 |            scaleX = maxX*1.0 / w
 |            scaleY = maxY*1.0 / h
 |            dc.SetUserScale(min(scaleX,scaleY),min(scaleX,scaleY))
 |  
 |  GetTextBackground(*args, **kwargs)
 |      GetTextBackground(self) -> Colour
 |      
 |      Gets the current text background colour
 |  
 |  GetTextExtent(*args, **kwargs)
 |      GetTextExtent(wxString string) -> (width, height)
 |      
 |      Get the width and height of the text using the current font. Only
 |      works for single line strings.
 |  
 |  GetTextForeground(*args, **kwargs)
 |      GetTextForeground(self) -> Colour
 |      
 |      Gets the current text foreground colour
 |  
 |  GetUserScale(*args, **kwargs)
 |      GetUserScale(self) -> (xScale, yScale)
 |      
 |      Gets the current user scale factor (set by `SetUserScale`).
 |  
 |  GetWindow(*args, **kwargs)
 |      GetWindow(self) -> Window
 |  
 |  GradientFillConcentric(*args, **kwargs)
 |      GradientFillConcentric(self, Rect rect, Colour initialColour, Colour destColour, 
 |          Point circleCenter)
 |      
 |      Fill the area specified by rect with a radial gradient, starting from
 |      initialColour in the center of the circle and fading to destColour on
 |      the outside of the circle.  The circleCenter argument is the relative
 |      coordinants of the center of the circle in the specified rect.
 |      
 |      Note: Currently this function is very slow, don't use it for real-time
 |      drawing.
 |  
 |  GradientFillLinear(*args, **kwargs)
 |      GradientFillLinear(self, Rect rect, Colour initialColour, Colour destColour, 
 |          int nDirection=EAST)
 |      
 |      Fill the area specified by rect with a linear gradient, starting from
 |      initialColour and eventually fading to destColour. The nDirection
 |      parameter specifies the direction of the colour change, default is to
 |      use initialColour on the left part of the rectangle and destColour on
 |      the right side.
 |  
 |  IsOk(*args, **kwargs)
 |      IsOk(self) -> bool
 |      
 |      Returns true if the DC is ok to use.
 |  
 |  LogicalToDeviceX(*args, **kwargs)
 |      LogicalToDeviceX(self, int x) -> int
 |      
 |      Converts logical X coordinate to device coordinate, using the current
 |      mapping mode.
 |  
 |  LogicalToDeviceXRel(*args, **kwargs)
 |      LogicalToDeviceXRel(self, int x) -> int
 |      
 |      Converts logical X coordinate to relative device coordinate, using the
 |      current mapping mode but ignoring the x axis orientation. Use this for
 |      converting a width, for example.
 |  
 |  LogicalToDeviceY(*args, **kwargs)
 |      LogicalToDeviceY(self, int y) -> int
 |      
 |      Converts logical Y coordinate to device coordinate, using the current
 |      mapping mode.
 |  
 |  LogicalToDeviceYRel(*args, **kwargs)
 |      LogicalToDeviceYRel(self, int y) -> int
 |      
 |      Converts logical Y coordinate to relative device coordinate, using the
 |      current mapping mode but ignoring the y axis orientation. Use this for
 |      converting a height, for example.
 |  
 |  MaxX(*args, **kwargs)
 |      MaxX(self) -> int
 |      
 |      Gets the maximum horizontal extent used in drawing commands so far.
 |  
 |  MaxY(*args, **kwargs)
 |      MaxY(self) -> int
 |      
 |      Gets the maximum vertical extent used in drawing commands so far.
 |  
 |  MinX(*args, **kwargs)
 |      MinX(self) -> int
 |      
 |      Gets the minimum horizontal extent used in drawing commands so far.
 |  
 |  MinY(*args, **kwargs)
 |      MinY(self) -> int
 |      
 |      Gets the minimum vertical extent used in drawing commands so far.
 |  
 |  Ok = IsOk(*args, **kwargs)
 |      IsOk(self) -> bool
 |      
 |      Returns true if the DC is ok to use.
 |  
 |  ResetBoundingBox(*args, **kwargs)
 |      ResetBoundingBox(self)
 |      
 |      Resets the bounding box: after a call to this function, the bounding
 |      box doesn't contain anything.
 |  
 |  SetAxisOrientation(*args, **kwargs)
 |      SetAxisOrientation(self, bool xLeftRight, bool yBottomUp)
 |      
 |      Sets the x and y axis orientation (i.e., the direction from lowest to
 |      highest values on the axis). The default orientation is the natural
 |      orientation, e.g. x axis from left to right and y axis from bottom up.
 |  
 |  SetBackground(*args, **kwargs)
 |      SetBackground(self, Brush brush)
 |      
 |      Sets the current background brush for the DC.
 |  
 |  SetBackgroundMode(*args, **kwargs)
 |      SetBackgroundMode(self, int mode)
 |      
 |      *mode* may be one of ``wx.SOLID`` and ``wx.TRANSPARENT``. This setting
 |      determines whether text will be drawn with a background colour or
 |      not.
 |  
 |  SetBrush(*args, **kwargs)
 |      SetBrush(self, Brush brush)
 |      
 |      Sets the current brush for the DC.
 |      
 |      If the argument is ``wx.NullBrush``, the current brush is selected out
 |      of the device context, and the original brush restored, allowing the
 |      current brush to be destroyed safely.
 |  
 |  SetClippingRect(*args, **kwargs)
 |      SetClippingRect(self, Rect rect)
 |      
 |      Sets the clipping region for this device context to the intersection
 |      of the given region described by the parameters of this method and the
 |      previously set clipping region. You should call `DestroyClippingRegion`
 |      if you want to set the clipping region exactly to the region
 |      specified.
 |      
 |      The clipping region is an area to which drawing is
 |      restricted. Possible uses for the clipping region are for clipping
 |      text or for speeding up window redraws when only a known area of the
 |      screen is damaged.
 |  
 |  SetClippingRegion(*args, **kwargs)
 |      SetClippingRegion(self, int x, int y, int width, int height)
 |      
 |      Sets the clipping region for this device context to the intersection
 |      of the given region described by the parameters of this method and the
 |      previously set clipping region. You should call `DestroyClippingRegion`
 |      if you want to set the clipping region exactly to the region
 |      specified.
 |      
 |      The clipping region is an area to which drawing is
 |      restricted. Possible uses for the clipping region are for clipping
 |      text or for speeding up window redraws when only a known area of the
 |      screen is damaged.
 |  
 |  SetClippingRegionAsRegion(*args, **kwargs)
 |      SetClippingRegionAsRegion(self, Region region)
 |      
 |      Sets the clipping region for this device context to the intersection
 |      of the given region described by the parameters of this method and the
 |      previously set clipping region. You should call `DestroyClippingRegion`
 |      if you want to set the clipping region exactly to the region
 |      specified.
 |      
 |      The clipping region is an area to which drawing is
 |      restricted. Possible uses for the clipping region are for clipping
 |      text or for speeding up window redraws when only a known area of the
 |      screen is damaged.
 |  
 |  SetClippingRegionPointSize(*args, **kwargs)
 |      SetClippingRegionPointSize(self, Point pt, Size sz)
 |      
 |      Sets the clipping region for this device context to the intersection
 |      of the given region described by the parameters of this method and the
 |      previously set clipping region. You should call `DestroyClippingRegion`
 |      if you want to set the clipping region exactly to the region
 |      specified.
 |      
 |      The clipping region is an area to which drawing is
 |      restricted. Possible uses for the clipping region are for clipping
 |      text or for speeding up window redraws when only a known area of the
 |      screen is damaged.
 |  
 |  SetDeviceClippingRegion(*args, **kwargs)
 |      SetDeviceClippingRegion(self, Region region)
 |      
 |      The coordinates of the region used in this method one are in device
 |      coordinates, not the logical ones
 |  
 |  SetDeviceOrigin(*args, **kwargs)
 |      SetDeviceOrigin(self, int x, int y)
 |  
 |  SetDeviceOriginPoint(*args, **kwargs)
 |      SetDeviceOriginPoint(self, Point point)
 |  
 |  SetFont(*args, **kwargs)
 |      SetFont(self, Font font)
 |      
 |      Sets the current font for the DC. It must be a valid font, in
 |      particular you should not pass ``wx.NullFont`` to this method.
 |  
 |  SetLayoutDirection(*args, **kwargs)
 |      SetLayoutDirection(self, int dir)
 |      
 |      Change the layout direction for this dc.
 |  
 |  SetLogicalFunction(*args, **kwargs)
 |      SetLogicalFunction(self, int function)
 |      
 |      Sets the current logical function for the device context. This
 |      determines how a source pixel (from a pen or brush colour, or source
 |      device context if using `Blit`) combines with a destination pixel in
 |      the current device context.
 |      
 |      The possible values and their meaning in terms of source and
 |      destination pixel values are as follows:
 |      
 |          ================       ==========================
 |          wx.AND                 src AND dst
 |          wx.AND_INVERT          (NOT src) AND dst
 |          wx.AND_REVERSE         src AND (NOT dst)
 |          wx.CLEAR               0
 |          wx.COPY                src
 |          wx.EQUIV               (NOT src) XOR dst
 |          wx.INVERT              NOT dst
 |          wx.NAND                (NOT src) OR (NOT dst)
 |          wx.NOR                 (NOT src) AND (NOT dst)
 |          wx.NO_OP               dst
 |          wx.OR                  src OR dst
 |          wx.OR_INVERT           (NOT src) OR dst
 |          wx.OR_REVERSE          src OR (NOT dst)
 |          wx.SET                 1
 |          wx.SRC_INVERT          NOT src
 |          wx.XOR                 src XOR dst
 |          ================       ==========================
 |      
 |      The default is wx.COPY, which simply draws with the current
 |      colour. The others combine the current colour and the background using
 |      a logical operation. wx.INVERT is commonly used for drawing rubber
 |      bands or moving outlines, since drawing twice reverts to the original
 |      colour.
 |  
 |  SetLogicalOrigin(*args, **kwargs)
 |      SetLogicalOrigin(self, int x, int y)
 |  
 |  SetLogicalOriginPoint(*args, **kwargs)
 |      SetLogicalOriginPoint(self, Point point)
 |  
 |  SetLogicalScale(*args, **kwargs)
 |      SetLogicalScale(self, double x, double y)
 |  
 |  SetMapMode(*args, **kwargs)
 |      SetMapMode(self, int mode)
 |      
 |      The *mapping mode* of the device context defines the unit of
 |      measurement used to convert logical units to device units.  The
 |      mapping mode can be one of the following:
 |      
 |          ================    =============================================
 |          wx.MM_TWIPS         Each logical unit is 1/20 of a point, or 1/1440
 |                              of an inch.
 |          wx.MM_POINTS        Each logical unit is a point, or 1/72 of an inch.
 |          wx.MM_METRIC        Each logical unit is 1 mm.
 |          wx.MM_LOMETRIC      Each logical unit is 1/10 of a mm.
 |          wx.MM_TEXT          Each logical unit is 1 pixel.
 |          ================    =============================================
 |  
 |  SetOptimization(*args, **kw)
 |      # wrap a new function around the callable
 |  
 |  SetPalette(*args, **kwargs)
 |      SetPalette(self, Palette palette)
 |      
 |      If this is a window DC or memory DC, assigns the given palette to the
 |      window or bitmap associated with the DC. If the argument is
 |      ``wx.NullPalette``, the current palette is selected out of the device
 |      context, and the original palette restored.
 |  
 |  SetPen(*args, **kwargs)
 |      SetPen(self, Pen pen)
 |      
 |      Sets the current pen for the DC.
 |      
 |      If the argument is ``wx.NullPen``, the current pen is selected out of the
 |      device context, and the original pen restored.
 |  
 |  SetTextBackground(*args, **kwargs)
 |      SetTextBackground(self, Colour colour)
 |      
 |      Sets the current text background colour for the DC.
 |  
 |  SetTextForeground(*args, **kwargs)
 |      SetTextForeground(self, Colour colour)
 |      
 |      Sets the current text foreground colour for the DC.
 |  
 |  SetUserScale(*args, **kwargs)
 |      SetUserScale(self, double x, double y)
 |      
 |      Sets the user scaling factor, useful for applications which require
 |      'zooming'.
 |  
 |  StartDoc(*args, **kwargs)
 |      StartDoc(self, String message) -> bool
 |      
 |      Starts a document (only relevant when outputting to a
 |      printer). *Message* is a message to show whilst printing.
 |  
 |  StartPage(*args, **kwargs)
 |      StartPage(self)
 |      
 |      Starts a document page (only relevant when outputting to a printer).
 |  
 |  StretchBlit(*args, **kwargs)
 |      StretchBlit(self, int dstX, int dstY, int dstWidth, int dstHeight, DC source, 
 |          int srcX, int srcY, int srcWidth, int srcHeight, 
 |          int rop=COPY, bool useMask=False, 
 |          int srcMaskX=DefaultCoord, int srcMaskY=DefaultCoord) -> bool
 |      
 |      Copy from a source DC to this DC, specifying the destination
 |      coordinates, destination size, source DC, source coordinates, size of
 |      source area to copy, logical function, whether to use a bitmap mask,
 |      and mask source position.
 |  
 |  StretchBlitPointSize(*args, **kwargs)
 |      StretchBlitPointSize(self, Point dstPt, Size dstSize, DC source, Point srcPt, 
 |          Size srcSize, int rop=COPY, bool useMask=False, 
 |          Point srcMaskPt=DefaultPosition) -> bool
 |      
 |      Copy from a source DC to this DC, specifying the destination
 |      coordinates, destination size, source DC, source coordinates, size of
 |      source area to copy, logical function, whether to use a bitmap mask,
 |      and mask source position.  This version is the same as `StretchBlit`
 |      except `wx.Point` and `wx.Size` objects are used instead of individual
 |      position and size components.
 |  
 |  __del__ lambda self
 |  
 |  __nonzero__(self)
 |  
 |  ----------------------------------------------------------------------
 |  Data descriptors inherited from DC:
 |  
 |  Background
 |      See `GetBackground` and `SetBackground`
 |  
 |  BackgroundMode
 |      See `GetBackgroundMode` and `SetBackgroundMode`
 |  
 |  BoundingBox
 |      See `GetBoundingBox`
 |  
 |  Brush
 |      See `GetBrush` and `SetBrush`
 |  
 |  CharHeight
 |      See `GetCharHeight`
 |  
 |  CharWidth
 |      See `GetCharWidth`
 |  
 |  ClippingBox
 |      See `GetClippingBox`
 |  
 |  ClippingRect
 |      See `GetClippingRect` and `SetClippingRect`
 |  
 |  Depth
 |      See `GetDepth`
 |  
 |  DeviceOrigin
 |      See `GetDeviceOrigin` and `SetDeviceOrigin`
 |  
 |  Font
 |      See `GetFont` and `SetFont`
 |  
 |  FullTextExtent
 |      See `GetFullTextExtent`
 |  
 |  LayoutDirection
 |      GetLayoutDirection(self) -> int
 |      
 |      Get the layout direction (LTR or RTL)_ for this dc.  On platforms
 |      where RTL layout is supported, the return value will either be
 |      ``wx.Layout_LeftToRight`` or ``wx.Layout_RightToLeft``.
 |      ``wx.Layout_Default`` is returned if layout direction is not
 |      supported.
 |  
 |  LogicalFunction
 |      See `GetLogicalFunction` and `SetLogicalFunction`
 |  
 |  LogicalOrigin
 |      See `GetLogicalOrigin` and `SetLogicalOrigin`
 |  
 |  LogicalScale
 |      See `GetLogicalScale` and `SetLogicalScale`
 |  
 |  MapMode
 |      See `GetMapMode` and `SetMapMode`
 |  
 |  MultiLineTextExtent
 |      See `GetMultiLineTextExtent`
 |  
 |  Optimization
 |      See `GetOptimization` and `SetOptimization`
 |  
 |  PPI
 |      See `GetPPI`
 |  
 |  PartialTextExtents
 |      See `GetPartialTextExtents`
 |  
 |  Pen
 |      See `GetPen` and `SetPen`
 |  
 |  Size
 |      See `GetSize`
 |  
 |  SizeMM
 |      See `GetSizeMM`
 |  
 |  TextBackground
 |      See `GetTextBackground` and `SetTextBackground`
 |  
 |  TextExtent
 |      See `GetTextExtent`
 |  
 |  TextForeground
 |      See `GetTextForeground` and `SetTextForeground`
 |  
 |  UserScale
 |      See `GetUserScale` and `SetUserScale`
 |  
 |  ----------------------------------------------------------------------
 |  Data and other attributes inherited from DC:
 |  
 |  __swig_destroy__ = <built-in function delete_DC>
 |  
 |  
 |  ----------------------------------------------------------------------
 |  Methods inherited from wx._core.Object:
 |  
 |  Destroy(*args, **kwargs)
 |      Destroy(self)
 |      
 |      Deletes the C++ object this Python object is a proxy for.
 |  
 |  GetClassName(*args, **kwargs)
 |      GetClassName(self) -> String
 |      
 |      Returns the class name of the C++ class using wxRTTI.
 |  
 |  IsSameAs(*args, **kwargs)
 |      IsSameAs(self, Object p) -> bool
 |      
 |      For wx.Objects that use C++ reference counting internally, this method
 |      can be used to determine if two objects are referencing the same data
 |      object.
 |  
 |  ----------------------------------------------------------------------
 |  Data descriptors inherited from wx._core.Object:
 |  
 |  ClassName
 |      See `GetClassName`
 |  
 |  __dict__
 |      dictionary for instance variables (if defined)
 |  
 |  __weakref__
 |      list of weak references to the object (if defined)

None

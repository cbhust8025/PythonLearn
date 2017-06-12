Help on class Control in module wx._core:

class Control(Window)
 |  This is the base class for a control or 'widget'.
 |  
 |  A control is generally a small window which processes user input
 |  and/or displays one or more item of data.
 |  
 |  Method resolution order:
 |      Control
 |      Window
 |      EvtHandler
 |      Object
 |      __builtin__.object
 |  
 |  Methods defined here:
 |  
 |  Command(*args, **kwargs)
 |      Command(self, CommandEvent event)
 |      
 |      Simulates the effect of the user issuing a command to the item.
 |      
 |      :see: `wx.CommandEvent`
 |  
 |  Create(*args, **kwargs)
 |      Create(self, Window parent, int id=-1, Point pos=DefaultPosition, 
 |          Size size=DefaultSize, long style=0, Validator validator=DefaultValidator, 
 |          String name=ControlNameStr) -> bool
 |      
 |      Do the 2nd phase and create the GUI control.
 |  
 |  GetAlignment(*args, **kwargs)
 |      GetAlignment(self) -> int
 |      
 |      Get the control alignment (left/right/centre, top/bottom/centre)
 |  
 |  GetLabelText(*args, **kwargs)
 |      GetLabelText(self) -> String
 |      
 |      Get just the text of the label, without mnemonic characters ('&')
 |  
 |  SetLabelMarkup(*args, **kwargs)
 |      SetLabelMarkup(self, String markup) -> bool
 |  
 |  SetLabelText(*args, **kwargs)
 |      SetLabelText(self, String text)
 |  
 |  __init__(self, *args, **kwargs)
 |      __init__(self, Window parent, int id=-1, Point pos=DefaultPosition, 
 |          Size size=DefaultSize, long style=0, Validator validator=DefaultValidator, 
 |          String name=ControlNameStr) -> Control
 |      
 |      Create a Control.  Normally you should only call this from a subclass'
 |      __init__ as a plain old wx.Control is not very useful.
 |  
 |  __repr__ = _swig_repr(self)
 |  
 |  ----------------------------------------------------------------------
 |  Static methods defined here:
 |  
 |  Ellipsize(*args, **kwargs)
 |      Ellipsize(String label, DC dc, int mode, int maxWidth, int flags=ELLIPSIZE_FLAGS_DEFAULT) -> String
 |  
 |  EscapeMnemonics(*args, **kwargs)
 |      EscapeMnemonics(String str) -> String
 |      
 |      escapes (by doubling them) the mnemonics
 |  
 |  FindAccelIndex(*args, **kwargs)
 |      FindAccelIndex(String label) -> int
 |      
 |      Return the accel index in the string or -1 if none.
 |  
 |  GetClassDefaultAttributes(*args, **kwargs)
 |      GetClassDefaultAttributes(int variant=WINDOW_VARIANT_NORMAL) -> VisualAttributes
 |      
 |      Get the default attributes for this class.  This is useful if you want
 |      to use the same font or colour in your own control as in a standard
 |      control -- which is a much better idea than hard coding specific
 |      colours or fonts which might look completely out of place on the
 |      user's system, especially if it uses themes.
 |      
 |      The variant parameter is only relevant under Mac currently and is
 |      ignore under other platforms. Under Mac, it will change the size of
 |      the returned font. See `wx.Window.SetWindowVariant` for more about
 |      this.
 |  
 |  GetCompositeControlsDefaultAttributes(*args, **kwargs)
 |      GetCompositeControlsDefaultAttributes(int variant) -> VisualAttributes
 |  
 |  RemoveMnemonics(*args, **kwargs)
 |      RemoveMnemonics(String str) -> String
 |      
 |      removes the mnemonics characters
 |  
 |  ----------------------------------------------------------------------
 |  Data descriptors defined here:
 |  
 |  Alignment
 |      See `GetAlignment`
 |  
 |  LabelText
 |      See `GetLabelText`
 |  
 |  thisown
 |      The membership flag
 |  
 |  ----------------------------------------------------------------------
 |  Methods inherited from Window:
 |  
 |  AcceptsFocus(*args, **kwargs)
 |      AcceptsFocus(self) -> bool
 |      
 |      Can this window have focus?
 |  
 |  AcceptsFocusFromKeyboard(*args, **kwargs)
 |      AcceptsFocusFromKeyboard(self) -> bool
 |      
 |      Can this window be given focus by keyboard navigation? if not, the
 |      only way to give it focus (provided it accepts it at all) is to click
 |      it.
 |  
 |  AddChild(*args, **kwargs)
 |      AddChild(self, Window child)
 |      
 |      Adds a child window. This is called automatically by window creation
 |      functions so should not be required by the application programmer.
 |  
 |  AdjustForLayoutDirection(*args, **kwargs)
 |      AdjustForLayoutDirection(self, int x, int width, int widthTotal) -> int
 |      
 |      Mirror coordinates for RTL layout if this window uses it and if the
 |      mirroring is not done automatically like Win32.
 |  
 |  AlwaysShowScrollbars(*args, **kwargs)
 |      AlwaysShowScrollbars(self, bool horz=True, bool vert=True)
 |  
 |  AssociateHandle(*args, **kwargs)
 |      AssociateHandle(self, long handle)
 |      
 |      Associate the window with a new native handle
 |  
 |  CacheBestSize(*args, **kwargs)
 |      CacheBestSize(self, Size size)
 |      
 |      Cache the best size so it doesn't need to be calculated again, (at least until
 |      some properties of the window change.)
 |  
 |  CanAcceptFocus(*args, **kwargs)
 |      CanAcceptFocus(self) -> bool
 |      
 |      Can this window have focus right now?
 |  
 |  CanAcceptFocusFromKeyboard(*args, **kwargs)
 |      CanAcceptFocusFromKeyboard(self) -> bool
 |      
 |      Can this window be assigned focus from keyboard right now?
 |  
 |  CanApplyThemeBorder(*args, **kwargs)
 |      CanApplyThemeBorder(self) -> bool
 |  
 |  CanBeOutsideClientArea(*args, **kwargs)
 |      CanBeOutsideClientArea(self) -> bool
 |  
 |  CanScroll(*args, **kwargs)
 |      CanScroll(self, int orient) -> bool
 |      
 |      Can the window have the scrollbar in this orientation?
 |  
 |  CanSetTransparent(*args, **kwargs)
 |      CanSetTransparent(self) -> bool
 |      
 |      Returns ``True`` if the platform supports setting the transparency for
 |      this window.  Note that this method will err on the side of caution,
 |      so it is possible that this will return ``False`` when it is in fact
 |      possible to set the transparency.
 |      
 |      NOTE: On X-windows systems the X server must have the composite
 |      extension loaded, and there must be a composite manager program (such
 |      as xcompmgr) running.
 |  
 |  CaptureMouse(*args, **kwargs)
 |      CaptureMouse(self)
 |      
 |      Directs all mouse input to this window. Call wx.Window.ReleaseMouse to
 |      release the capture.
 |      
 |      Note that wxWindows maintains the stack of windows having captured the
 |      mouse and when the mouse is released the capture returns to the window
 |      which had had captured it previously and it is only really released if
 |      there were no previous window. In particular, this means that you must
 |      release the mouse as many times as you capture it, unless the window
 |      receives the `wx.MouseCaptureLostEvent` event.
 |       
 |      Any application which captures the mouse in the beginning of some
 |      operation *must* handle `wx.MouseCaptureLostEvent` and cancel this
 |      operation when it receives the event. The event handler must not
 |      recapture mouse.
 |  
 |  Center(*args, **kwargs)
 |      Center(self, int direction=BOTH)
 |      
 |      Centers the window.  The parameter specifies the direction for
 |      centering, and may be wx.HORIZONTAL, wx.VERTICAL or wx.BOTH. It may
 |      also include wx.CENTER_ON_SCREEN flag if you want to center the window
 |      on the entire screen and not on its parent window.  If it is a
 |      top-level window and has no parent then it will always be centered
 |      relative to the screen.
 |  
 |  CenterOnParent(*args, **kwargs)
 |      CenterOnParent(self, int dir=BOTH)
 |      
 |      Center with respect to the the parent window
 |  
 |  Centre = Center(*args, **kwargs)
 |      Center(self, int direction=BOTH)
 |      
 |      Centers the window.  The parameter specifies the direction for
 |      centering, and may be wx.HORIZONTAL, wx.VERTICAL or wx.BOTH. It may
 |      also include wx.CENTER_ON_SCREEN flag if you want to center the window
 |      on the entire screen and not on its parent window.  If it is a
 |      top-level window and has no parent then it will always be centered
 |      relative to the screen.
 |  
 |  CentreOnParent = CenterOnParent(*args, **kwargs)
 |      CenterOnParent(self, int dir=BOTH)
 |      
 |      Center with respect to the the parent window
 |  
 |  ClearBackground(*args, **kwargs)
 |      ClearBackground(self)
 |      
 |      Clears the window by filling it with the current background
 |      colour. Does not cause an erase background event to be generated.
 |  
 |  ClientToScreen(*args, **kwargs)
 |      ClientToScreen(self, Point pt) -> Point
 |      
 |      Converts to screen coordinates from coordinates relative to this window.
 |  
 |  ClientToScreenXY(*args, **kwargs)
 |      ClientToScreenXY(int x, int y) -> (x,y)
 |      
 |      Converts to screen coordinates from coordinates relative to this window.
 |  
 |  ClientToWindowSize(*args, **kwargs)
 |      ClientToWindowSize(self, Size size) -> Size
 |      
 |      Converts client area size ``size to corresponding window size. In
 |      other words, the returned value is what `GetSize` would return if this
 |      window had client area of given size.  Components with
 |      ``wx.DefaultCoord`` (-1) value are left unchanged.
 |      
 |      Note that the conversion is not always exact, it assumes that
 |      non-client area doesn't change and so doesn't take into account things
 |      like menu bar (un)wrapping or (dis)appearance of the scrollbars.
 |  
 |  Close(*args, **kwargs)
 |      Close(self, bool force=False) -> bool
 |      
 |      This function simply generates a EVT_CLOSE event whose handler usually
 |      tries to close the window. It doesn't close the window itself,
 |      however.  If force is False (the default) then the window's close
 |      handler will be allowed to veto the destruction of the window.
 |  
 |  ConvertDialogPointToPixels(*args, **kwargs)
 |      ConvertDialogPointToPixels(self, Point pt) -> Point
 |      
 |      Converts a point or size from dialog units to pixels.  Dialog units
 |      are used for maintaining a dialog's proportions even if the font
 |      changes. For the x dimension, the dialog units are multiplied by the
 |      average character width and then divided by 4. For the y dimension,
 |      the dialog units are multiplied by the average character height and
 |      then divided by 8.
 |  
 |  ConvertDialogSizeToPixels(*args, **kwargs)
 |      ConvertDialogSizeToPixels(self, Size sz) -> Size
 |      
 |      Converts a point or size from dialog units to pixels.  Dialog units
 |      are used for maintaining a dialog's proportions even if the font
 |      changes. For the x dimension, the dialog units are multiplied by the
 |      average character width and then divided by 4. For the y dimension,
 |      the dialog units are multiplied by the average character height and
 |      then divided by 8.
 |  
 |  ConvertPixelPointToDialog(*args, **kwargs)
 |      ConvertPixelPointToDialog(self, Point pt) -> Point
 |  
 |  ConvertPixelSizeToDialog(*args, **kwargs)
 |      ConvertPixelSizeToDialog(self, Size sz) -> Size
 |  
 |  DLG_PNT(*args, **kwargs)
 |      DLG_PNT(self, Point pt) -> Point
 |      
 |      Converts a point or size from dialog units to pixels.  Dialog units
 |      are used for maintaining a dialog's proportions even if the font
 |      changes. For the x dimension, the dialog units are multiplied by the
 |      average character width and then divided by 4. For the y dimension,
 |      the dialog units are multiplied by the average character height and
 |      then divided by 8.
 |  
 |  DLG_SZE(*args, **kwargs)
 |      DLG_SZE(self, Size sz) -> Size
 |      
 |      Converts a point or size from dialog units to pixels.  Dialog units
 |      are used for maintaining a dialog's proportions even if the font
 |      changes. For the x dimension, the dialog units are multiplied by the
 |      average character width and then divided by 4. For the y dimension,
 |      the dialog units are multiplied by the average character height and
 |      then divided by 8.
 |  
 |  Destroy(*args, **kwargs)
 |      Destroy(self) -> bool
 |      
 |      Destroys the window safely.  Frames and dialogs are not destroyed
 |      immediately when this function is called -- they are added to a list
 |      of windows to be deleted on idle time, when all the window's events
 |      have been processed. This prevents problems with events being sent to
 |      non-existent windows.
 |      
 |      Returns True if the window has either been successfully deleted, or it
 |      has been added to the list of windows pending real deletion.
 |  
 |  DestroyChildren(*args, **kwargs)
 |      DestroyChildren(self) -> bool
 |      
 |      Destroys all children of a window. Called automatically by the
 |      destructor.
 |  
 |  Disable(*args, **kwargs)
 |      Disable(self) -> bool
 |      
 |      Disables the window, same as Enable(false).
 |  
 |  DissociateHandle(*args, **kwargs)
 |      DissociateHandle(self)
 |      
 |      Dissociate the current native handle from the window
 |  
 |  DragAcceptFiles(*args, **kwargs)
 |      DragAcceptFiles(self, bool accept)
 |      
 |      Enables or disables eligibility for drop file events, EVT_DROP_FILES.
 |  
 |  Enable(*args, **kwargs)
 |      Enable(self, bool enable=True) -> bool
 |      
 |      Enable or disable the window for user input. Note that when a parent
 |      window is disabled, all of its children are disabled as well and they
 |      are reenabled again when the parent is.  Returns true if the window
 |      has been enabled or disabled, false if nothing was done, i.e. if the
 |      window had already been in the specified state.
 |  
 |  FindWindowById(*args, **kwargs)
 |      FindWindowById(self, long winid) -> Window
 |      
 |      Find a child of this window by window ID
 |  
 |  FindWindowByLabel(*args, **kwargs)
 |      FindWindowByLabel(self, String label) -> Window
 |      
 |      Find a child of this window by label
 |  
 |  FindWindowByName(*args, **kwargs)
 |      FindWindowByName(self, String name) -> Window
 |      
 |      Find a child of this window by name
 |  
 |  Fit(*args, **kwargs)
 |      Fit(self)
 |      
 |      Sizes the window so that it fits around its subwindows. This function
 |      won't do anything if there are no subwindows and will only really work
 |      correctly if sizers are used for the subwindows layout. Also, if the
 |      window has exactly one subwindow it is better (faster and the result
 |      is more precise as Fit adds some margin to account for fuzziness of
 |      its calculations) to call window.SetClientSize(child.GetSize())
 |      instead of calling Fit.
 |  
 |  FitInside(*args, **kwargs)
 |      FitInside(self)
 |      
 |      Similar to Fit, but sizes the interior (virtual) size of a
 |      window. Mainly useful with scrolled windows to reset scrollbars after
 |      sizing changes that do not trigger a size event, and/or scrolled
 |      windows without an interior sizer. This function similarly won't do
 |      anything if there are no subwindows.
 |  
 |  Freeze(*args, **kwargs)
 |      Freeze(self)
 |      
 |      Freezes the window or, in other words, prevents any updates from
 |      taking place on screen, the window is not redrawn at all. Thaw must be
 |      called to reenable window redrawing.  Calls to Freeze/Thaw may be
 |      nested, with the actual Thaw being delayed until all the nesting has
 |      been undone.
 |      
 |      This method is useful for visual appearance optimization (for example,
 |      it is a good idea to use it before inserting large amount of text into
 |      a wxTextCtrl under wxGTK) but is not implemented on all platforms nor
 |      for all controls so it is mostly just a hint to wxWindows and not a
 |      mandatory directive.
 |  
 |  GetAcceleratorTable(*args, **kwargs)
 |      GetAcceleratorTable(self) -> AcceleratorTable
 |      
 |      Gets the accelerator table for this window.
 |  
 |  GetAdjustedBestSize(*args, **kw)
 |      # wrap a new function around the callable
 |  
 |  GetAutoLayout(*args, **kwargs)
 |      GetAutoLayout(self) -> bool
 |      
 |      Returns the current autoLayout setting
 |  
 |  GetBackgroundColour(*args, **kwargs)
 |      GetBackgroundColour(self) -> Colour
 |      
 |      Returns the background colour of the window.
 |  
 |  GetBackgroundStyle(*args, **kwargs)
 |      GetBackgroundStyle(self) -> int
 |      
 |      Returns the background style of the window.
 |      
 |      :see: `SetBackgroundStyle`
 |  
 |  GetBestFittingSize = GetEffectiveMinSize(*args, **kw)
 |      GetEffectiveMinSize(self) -> Size
 |      
 |      This function will merge the window's best size into the window's
 |      minimum size, giving priority to the min size components, and returns
 |      the results.
 |  
 |  GetBestSize(*args, **kwargs)
 |      GetBestSize(self) -> Size
 |      
 |      This function returns the best acceptable minimal size for the
 |      window, if applicable. For example, for a static text control, it will
 |      be the minimal size such that the control label is not truncated. For
 |      windows containing subwindows (such as wx.Panel), the size returned by
 |      this function will be the same as the size the window would have had
 |      after calling Fit.
 |  
 |  GetBestSizeTuple(*args, **kwargs)
 |      GetBestSizeTuple() -> (width, height)
 |      
 |      This function returns the best acceptable minimal size for the
 |      window, if applicable. For example, for a static text control, it will
 |      be the minimal size such that the control label is not truncated. For
 |      windows containing subwindows (such as wx.Panel), the size returned by
 |      this function will be the same as the size the window would have had
 |      after calling Fit.
 |  
 |  GetBestVirtualSize(*args, **kwargs)
 |      GetBestVirtualSize(self) -> Size
 |      
 |      Return the largest of ClientSize and BestSize (as determined by a
 |      sizer, interior children, or other means)
 |  
 |  GetBorder(*args)
 |      GetBorder(self, long flags) -> int
 |      GetBorder(self) -> int
 |      
 |      Get border for the flags of this window
 |  
 |  GetCaret(*args, **kwargs)
 |      GetCaret(self) -> Caret
 |      
 |      Returns the caret associated with the window.
 |  
 |  GetCharHeight(*args, **kwargs)
 |      GetCharHeight(self) -> int
 |      
 |      Get the (average) character size for the current font.
 |  
 |  GetCharWidth(*args, **kwargs)
 |      GetCharWidth(self) -> int
 |      
 |      Get the (average) character size for the current font.
 |  
 |  GetChildren(*args, **kwargs)
 |      GetChildren(self) -> WindowList
 |      
 |      Returns an object containing a list of the window's children.  The
 |      object provides a Python sequence-like interface over the internal
 |      list maintained by the window..
 |  
 |  GetClientAreaOrigin(*args, **kwargs)
 |      GetClientAreaOrigin(self) -> Point
 |      
 |      Get the origin of the client area of the window relative to the
 |      window's top left corner (the client area may be shifted because of
 |      the borders, scrollbars, other decorations...)
 |  
 |  GetClientRect(*args, **kwargs)
 |      GetClientRect(self) -> Rect
 |      
 |      Get the client area position and size as a `wx.Rect` object.
 |  
 |  GetClientSize(*args, **kwargs)
 |      GetClientSize(self) -> Size
 |      
 |      This gets the size of the window's 'client area' in pixels. The client
 |      area is the area which may be drawn on by the programmer, excluding
 |      title bar, border, scrollbars, etc.
 |  
 |  GetClientSizeTuple(*args, **kwargs)
 |      GetClientSizeTuple() -> (width, height)
 |      
 |      This gets the size of the window's 'client area' in pixels. The client
 |      area is the area which may be drawn on by the programmer, excluding
 |      title bar, border, scrollbars, etc.
 |  
 |  GetConstraints(*args, **kwargs)
 |      GetConstraints(self) -> LayoutConstraints
 |      
 |      Returns a pointer to the window's layout constraints, or None if there
 |      are none.
 |  
 |  GetContainingSizer(*args, **kwargs)
 |      GetContainingSizer(self) -> Sizer
 |      
 |      Return the sizer that this window is a member of, if any, otherwise None.
 |  
 |  GetCursor(*args, **kwargs)
 |      GetCursor(self) -> Cursor
 |      
 |      Return the cursor associated with this window.
 |  
 |  GetDefaultAttributes(*args, **kwargs)
 |      GetDefaultAttributes(self) -> VisualAttributes
 |      
 |      Get the default attributes for an instance of this class.  This is
 |      useful if you want to use the same font or colour in your own control
 |      as in a standard control -- which is a much better idea than hard
 |      coding specific colours or fonts which might look completely out of
 |      place on the user's system, especially if it uses themes.
 |  
 |  GetDropTarget(*args, **kwargs)
 |      GetDropTarget(self) -> DropTarget
 |      
 |      Returns the associated drop target, which may be None.
 |  
 |  GetEffectiveMinSize(*args, **kwargs)
 |      GetEffectiveMinSize(self) -> Size
 |      
 |      This function will merge the window's best size into the window's
 |      minimum size, giving priority to the min size components, and returns
 |      the results.
 |  
 |  GetEventHandler(*args, **kwargs)
 |      GetEventHandler(self) -> EvtHandler
 |      
 |      Returns the event handler for this window. By default, the window is
 |      its own event handler.
 |  
 |  GetExtraStyle(*args, **kwargs)
 |      GetExtraStyle(self) -> long
 |      
 |      Returns the extra style bits for the window.
 |  
 |  GetFont(*args, **kwargs)
 |      GetFont(self) -> Font
 |      
 |      Returns the default font used for this window.
 |  
 |  GetForegroundColour(*args, **kwargs)
 |      GetForegroundColour(self) -> Colour
 |      
 |      Returns the foreground colour of the window.  The interpretation of
 |      foreground colour is dependent on the window class; it may be the text
 |      colour or other colour, or it may not be used at all.
 |  
 |  GetFullTextExtent(*args, **kwargs)
 |      GetFullTextExtent(String string, Font font=None) ->
 |         (width, height, descent, externalLeading)
 |      
 |      Get the width, height, decent and leading of the text using the
 |      current or specified font.
 |  
 |  GetGrandParent(*args, **kwargs)
 |      GetGrandParent(self) -> Window
 |      
 |      Returns the parent of the parent of this window, or None if there
 |      isn't one.
 |  
 |  GetGtkWidget(*args, **kwargs)
 |      GetGtkWidget(self) -> long
 |      
 |      On wxGTK returns a pointer to the GtkWidget for this window as a long
 |      integer.  On the other platforms this method returns zero.
 |  
 |  GetHandle(*args, **kwargs)
 |      GetHandle(self) -> long
 |      
 |      Returns the platform-specific handle (as a long integer) of the
 |      physical window.  On wxMSW this is the win32 window handle, on wxGTK
 |      it is the XWindow ID, and on wxMac it is the ControlRef.
 |  
 |  GetHelpText(*args, **kwargs)
 |      GetHelpText(self) -> String
 |      
 |      Gets the help text to be used as context-sensitive help for this
 |      window.  Note that the text is actually stored by the current
 |      `wx.HelpProvider` implementation, and not in the window object itself.
 |  
 |  GetHelpTextAtPoint(*args, **kwargs)
 |      GetHelpTextAtPoint(self, Point pt, wxHelpEvent::Origin origin) -> String
 |      
 |      Get the help string associated with the given position in this window.
 |      
 |      Notice that pt may be invalid if event origin is keyboard or unknown
 |      and this method should return the global window help text then
 |  
 |  GetId(*args, **kwargs)
 |      GetId(self) -> int
 |      
 |      Returns the identifier of the window.  Each window has an integer
 |      identifier. If the application has not provided one (or the default Id
 |      -1 is used) then an unique identifier with a negative value will be
 |      generated.
 |  
 |  GetLabel(*args, **kwargs)
 |      GetLabel(self) -> String
 |      
 |      Generic way of getting a label from any window, for identification
 |      purposes.  The interpretation of this function differs from class to
 |      class. For frames and dialogs, the value returned is the title. For
 |      buttons or static text controls, it is the button text. This function
 |      can be useful for meta-programs such as testing tools or special-needs
 |      access programs)which need to identify windows by name.
 |  
 |  GetLayoutDirection(*args, **kwargs)
 |      GetLayoutDirection(self) -> int
 |      
 |      Get the layout direction (LTR or RTL) for this window.  Returns
 |      ``wx.Layout_Default`` if layout direction is not supported.
 |  
 |  GetMainWindowOfCompositeControl(*args, **kwargs)
 |      GetMainWindowOfCompositeControl(self) -> Window
 |  
 |  GetMaxClientSize(*args, **kwargs)
 |      GetMaxClientSize(self) -> Size
 |  
 |  GetMaxHeight(*args, **kwargs)
 |      GetMaxHeight(self) -> int
 |  
 |  GetMaxSize(*args, **kwargs)
 |      GetMaxSize(self) -> Size
 |  
 |  GetMaxWidth(*args, **kwargs)
 |      GetMaxWidth(self) -> int
 |  
 |  GetMinClientSize(*args, **kwargs)
 |      GetMinClientSize(self) -> Size
 |  
 |  GetMinHeight(*args, **kwargs)
 |      GetMinHeight(self) -> int
 |  
 |  GetMinSize(*args, **kwargs)
 |      GetMinSize(self) -> Size
 |  
 |  GetMinWidth(*args, **kwargs)
 |      GetMinWidth(self) -> int
 |  
 |  GetName(*args, **kwargs)
 |      GetName(self) -> String
 |      
 |      Returns the windows name.  This name is not guaranteed to be unique;
 |      it is up to the programmer to supply an appropriate name in the window
 |      constructor or via wx.Window.SetName.
 |  
 |  GetNextSibling(*args, **kwargs)
 |      GetNextSibling(self) -> Window
 |  
 |  GetParent(*args, **kwargs)
 |      GetParent(self) -> Window
 |      
 |      Returns the parent window of this window, or None if there isn't one.
 |  
 |  GetPopupMenuSelectionFromUser(*args, **kwargs)
 |      GetPopupMenuSelectionFromUser(self, Menu menu, Point pos=DefaultPosition) -> int
 |      
 |      Simply return the id of the selected item or wxID_NONE without
 |      generating any events.
 |  
 |  GetPosition(*args, **kwargs)
 |      GetPosition(self) -> Point
 |      
 |      Get the window's position.  Notice that the position is in client
 |      coordinates for child windows and screen coordinates for the top level
 |      ones, use `GetScreenPosition` if you need screen coordinates for all
 |      kinds of windows.
 |  
 |  GetPositionTuple(*args, **kwargs)
 |      GetPositionTuple() -> (x,y)
 |      
 |      Get the window's position.  Notice that the position is in client
 |      coordinates for child windows and screen coordinates for the top level
 |      ones, use `GetScreenPosition` if you need screen coordinates for all
 |      kinds of windows.
 |  
 |  GetPrevSibling(*args, **kwargs)
 |      GetPrevSibling(self) -> Window
 |  
 |  GetRect(*args, **kwargs)
 |      GetRect(self) -> Rect
 |      
 |      Returns the size and position of the window as a `wx.Rect` object.
 |  
 |  GetScreenPosition(*args, **kwargs)
 |      GetScreenPosition(self) -> Point
 |      
 |      Get the position of the window in screen coordinantes.
 |  
 |  GetScreenPositionTuple(*args, **kwargs)
 |      GetScreenPositionTuple() -> (x,y)
 |      
 |      Get the position of the window in screen coordinantes.
 |  
 |  GetScreenRect(*args, **kwargs)
 |      GetScreenRect(self) -> Rect
 |      
 |      Returns the size and position of the window in screen coordinantes as
 |      a `wx.Rect` object.
 |  
 |  GetScrollPos(*args, **kwargs)
 |      GetScrollPos(self, int orientation) -> int
 |      
 |      Returns the built-in scrollbar position.
 |  
 |  GetScrollRange(*args, **kwargs)
 |      GetScrollRange(self, int orientation) -> int
 |      
 |      Returns the built-in scrollbar range.
 |  
 |  GetScrollThumb(*args, **kwargs)
 |      GetScrollThumb(self, int orientation) -> int
 |      
 |      Returns the built-in scrollbar thumb size.
 |  
 |  GetSize(*args, **kwargs)
 |      GetSize(self) -> Size
 |      
 |      Get the window size.
 |  
 |  GetSizeTuple(*args, **kwargs)
 |      GetSizeTuple() -> (width, height)
 |      
 |      Get the window size.
 |  
 |  GetSizer(*args, **kwargs)
 |      GetSizer(self) -> Sizer
 |      
 |      Return the sizer associated with the window by a previous call to
 |      SetSizer or None if there isn't one.
 |  
 |  GetTextExtent(*args, **kwargs)
 |      GetTextExtent(String string) -> (width, height)
 |      
 |      Get the width and height of the text using the current font.
 |  
 |  GetThemeEnabled(*args, **kwargs)
 |      GetThemeEnabled(self) -> bool
 |      
 |      Return the themeEnabled flag.
 |  
 |  GetToolTip(*args, **kwargs)
 |      GetToolTip(self) -> ToolTip
 |      
 |      get the associated tooltip or None if none
 |  
 |  GetToolTipString(self)
 |  
 |  GetTopLevelParent(*args, **kwargs)
 |      GetTopLevelParent(self) -> Window
 |      
 |      Returns the first frame or dialog in this window's parental hierarchy.
 |  
 |  GetUpdateClientRect(*args, **kwargs)
 |      GetUpdateClientRect(self) -> Rect
 |      
 |      Get the update rectangle region bounding box in client coords.
 |  
 |  GetUpdateRegion(*args, **kwargs)
 |      GetUpdateRegion(self) -> Region
 |      
 |      Returns the region specifying which parts of the window have been
 |      damaged. Should only be called within an EVT_PAINT handler.
 |  
 |  GetValidator(*args, **kwargs)
 |      GetValidator(self) -> Validator
 |      
 |      Returns a pointer to the current validator for the window, or None if
 |      there is none.
 |  
 |  GetVirtualSize(*args, **kwargs)
 |      GetVirtualSize(self) -> Size
 |      
 |      Get the the virtual size of the window in pixels.  For most windows
 |      this is just the client area of the window, but for some like scrolled
 |      windows it is more or less independent of the screen window size.
 |  
 |  GetVirtualSizeTuple(*args, **kwargs)
 |      GetVirtualSizeTuple() -> (width, height)
 |      
 |      Get the the virtual size of the window in pixels.  For most windows
 |      this is just the client area of the window, but for some like scrolled
 |      windows it is more or less independent of the screen window size.
 |  
 |  GetWindowBorderSize(*args, **kwargs)
 |      GetWindowBorderSize(self) -> Size
 |      
 |      Return the size of the left/right and top/bottom borders.
 |  
 |  GetWindowStyle = GetWindowStyleFlag(*args, **kwargs)
 |      GetWindowStyleFlag(self) -> long
 |      
 |      Gets the window style that was passed to the constructor or Create
 |      method.
 |  
 |  GetWindowStyleFlag(*args, **kwargs)
 |      GetWindowStyleFlag(self) -> long
 |      
 |      Gets the window style that was passed to the constructor or Create
 |      method.
 |  
 |  GetWindowVariant(*args, **kwargs)
 |      GetWindowVariant(self) -> int
 |  
 |  HandleAsNavigationKey(*args, **kwargs)
 |      HandleAsNavigationKey(self, KeyEvent event) -> bool
 |      
 |      This function will generate the appropriate call to `Navigate` if the
 |      key event is one normally used for keyboard navigation.  Returns
 |      ``True`` if the key pressed was for navigation and was handled,
 |      ``False`` otherwise.
 |  
 |  HandleWindowEvent(*args, **kwargs)
 |      HandleWindowEvent(self, Event event) -> bool
 |      
 |      Process an event by calling GetEventHandler()->ProcessEvent() and
 |      handling any exceptions thrown by event handlers. It's mostly useful
 |      when processing wx events when called from C code (e.g. in GTK+
 |      callback) when the exception wouldn't correctly propagate to
 |      wx.EventLoop.
 |  
 |  HasCapture(*args, **kwargs)
 |      HasCapture(self) -> bool
 |      
 |      Returns true if this window has the current mouse capture.
 |  
 |  HasExtraStyle(*args, **kwargs)
 |      HasExtraStyle(self, int exFlag) -> bool
 |      
 |      Returns ``True`` if the given extra flag is set.
 |  
 |  HasFlag(*args, **kwargs)
 |      HasFlag(self, int flag) -> bool
 |      
 |      Test if the given style is set for this window.
 |  
 |  HasFocus(*args, **kwargs)
 |      HasFocus(self) -> bool
 |      
 |      Returns ``True`` if the window has the keyboard focus.
 |  
 |  HasMultiplePages(*args, **kwargs)
 |      HasMultiplePages(self) -> bool
 |  
 |  HasScrollbar(*args, **kwargs)
 |      HasScrollbar(self, int orient) -> bool
 |      
 |      Does the window have the scrollbar for this orientation?
 |  
 |  HasTransparentBackground(*args, **kwargs)
 |      HasTransparentBackground(self) -> bool
 |      
 |      Returns True if this window's background is transparent (as, for
 |      example, for `wx.StaticText`) and should show the parent window's
 |      background.
 |      
 |      This method is mostly used internally by the library itself and you
 |      normally shouldn't have to call it. You may, however, have to override
 |      it in your custom control classes to ensure that background is painted
 |      correctly.
 |  
 |  Hide(*args, **kwargs)
 |      Hide(self) -> bool
 |      
 |      Equivalent to calling Show(False).
 |  
 |  HideWithEffect(*args, **kwargs)
 |      HideWithEffect(self, int effect, unsigned int timeout=0) -> bool
 |      
 |      Hide the window with a special effect, not implemented on most
 |      platforms (where it is the same as Hide())
 |      
 |      Timeout specifies how long the animation should take, in ms, the
 |      default value of 0 means to use the default (system-dependent) value.
 |  
 |  HitTest(*args, **kwargs)
 |      HitTest(self, Point pt) -> int
 |      
 |      Test where the given (in client coords) point lies
 |  
 |  HitTestXY(*args, **kwargs)
 |      HitTestXY(self, int x, int y) -> int
 |      
 |      Test where the given (in client coords) point lies
 |  
 |  InformFirstDirection(*args, **kwargs)
 |      InformFirstDirection(self, int direction, int size, int availableOtherDir) -> bool
 |      
 |      wxSizer and friends use this to give a chance to a component to recalc
 |      its min size once one of the final size components is known. Override 
 |      this function when that is useful (such as for wxStaticText which can 
 |      stretch over several lines). Parameter availableOtherDir
 |      tells the item how much more space there is available in the opposite 
 |      direction (-1 if unknown).
 |  
 |  InheritAttributes(*args, **kwargs)
 |      InheritAttributes(self)
 |      
 |      This function is (or should be, in case of custom controls) called
 |      during window creation to intelligently set up the window visual
 |      attributes, that is the font and the foreground and background
 |      colours.
 |      
 |      By 'intelligently' the following is meant: by default, all windows use
 |      their own default attributes. However if some of the parent's
 |      attributes are explicitly changed (that is, using SetFont and not
 |      SetOwnFont) and if the corresponding attribute hadn't been
 |      explicitly set for this window itself, then this window takes the same
 |      value as used by the parent. In addition, if the window overrides
 |      ShouldInheritColours to return false, the colours will not be changed
 |      no matter what and only the font might.
 |      
 |      This rather complicated logic is necessary in order to accommodate the
 |      different usage scenarios. The most common one is when all default
 |      attributes are used and in this case, nothing should be inherited as
 |      in modern GUIs different controls use different fonts (and colours)
 |      than their siblings so they can't inherit the same value from the
 |      parent. However it was also deemed desirable to allow to simply change
 |      the attributes of all children at once by just changing the font or
 |      colour of their common parent, hence in this case we do inherit the
 |      parents attributes.
 |  
 |  InheritsBackgroundColour(*args, **kwargs)
 |      InheritsBackgroundColour(self) -> bool
 |  
 |  InitDialog(*args, **kwargs)
 |      InitDialog(self)
 |      
 |      Sends an EVT_INIT_DIALOG event, whose handler usually transfers data
 |      to the dialog via validators.
 |  
 |  InvalidateBestSize(*args, **kwargs)
 |      InvalidateBestSize(self)
 |      
 |      Reset the cached best size value so it will be recalculated the next
 |      time it is needed.
 |  
 |  IsBeingDeleted(*args, **kwargs)
 |      IsBeingDeleted(self) -> bool
 |      
 |      Is the window in the process of being deleted?
 |  
 |  IsDoubleBuffered(*args, **kwargs)
 |      IsDoubleBuffered(self) -> bool
 |      
 |      Returns ``True`` if the window contents is double-buffered by the
 |      system, i.e. if any drawing done on the window is really done on a
 |      temporary backing surface and transferred to the screen all at once
 |      later.
 |  
 |  IsEnabled(*args, **kwargs)
 |      IsEnabled(self) -> bool
 |      
 |      Returns true if the window is enabled for input, false otherwise.
 |      This method takes into account the enabled state of parent windows up
 |      to the top-level window.
 |  
 |  IsExposed(*args, **kwargs)
 |      IsExposed(self, int x, int y, int w=1, int h=1) -> bool
 |      
 |      Returns true if the given point or rectangle area has been exposed
 |      since the last repaint. Call this in an paint event handler to
 |      optimize redrawing by only redrawing those areas, which have been
 |      exposed.
 |  
 |  IsExposedPoint(*args, **kwargs)
 |      IsExposedPoint(self, Point pt) -> bool
 |      
 |      Returns true if the given point or rectangle area has been exposed
 |      since the last repaint. Call this in an paint event handler to
 |      optimize redrawing by only redrawing those areas, which have been
 |      exposed.
 |  
 |  IsExposedRect(*args, **kwargs)
 |      IsExposedRect(self, Rect rect) -> bool
 |      
 |      Returns true if the given point or rectangle area has been exposed
 |      since the last repaint. Call this in an paint event handler to
 |      optimize redrawing by only redrawing those areas, which have been
 |      exposed.
 |  
 |  IsFrozen(*args, **kwargs)
 |      IsFrozen(self) -> bool
 |      
 |      Returns ``True`` if the window has been frozen and not thawed yet.
 |      
 |      :see: `Freeze` and `Thaw`
 |  
 |  IsRetained(*args, **kwargs)
 |      IsRetained(self) -> bool
 |      
 |      Returns true if the window is retained, false otherwise.  Retained
 |      windows are only available on X platforms.
 |  
 |  IsScrollbarAlwaysShown(*args, **kwargs)
 |      IsScrollbarAlwaysShown(self, int orient) -> bool
 |  
 |  IsShown(*args, **kwargs)
 |      IsShown(self) -> bool
 |      
 |      Returns true if the window is shown, false if it has been hidden.
 |  
 |  IsShownOnScreen(*args, **kwargs)
 |      IsShownOnScreen(self) -> bool
 |      
 |      Returns ``True`` if the window is physically visible on the screen,
 |      i.e. it is shown and all its parents up to the toplevel window are
 |      shown as well.
 |  
 |  IsThisEnabled(*args, **kwargs)
 |      IsThisEnabled(self) -> bool
 |      
 |      Returns the internal enabled state independent of the parent(s) state,
 |      i.e. the state in which the window would be if all of its parents are
 |      enabled.  Use `IsEnabled` to get the effective window state.
 |  
 |  IsTopLevel(*args, **kwargs)
 |      IsTopLevel(self) -> bool
 |      
 |      Returns true if the given window is a top-level one. Currently all
 |      frames and dialogs are always considered to be top-level windows (even
 |      if they have a parent window).
 |  
 |  Layout(*args, **kwargs)
 |      Layout(self) -> bool
 |      
 |      Invokes the constraint-based layout algorithm or the sizer-based
 |      algorithm for this window.  See SetAutoLayout: when auto layout is on,
 |      this function gets called automatically by the default EVT_SIZE
 |      handler when the window is resized.
 |  
 |  LineDown(*args, **kwargs)
 |      LineDown(self) -> bool
 |      
 |      This is just a wrapper for ScrollLines(1).
 |  
 |  LineUp(*args, **kwargs)
 |      LineUp(self) -> bool
 |      
 |      This is just a wrapper for ScrollLines(-1).
 |  
 |  Lower(*args, **kwargs)
 |      Lower(self)
 |      
 |      Lowers the window to the bottom of the window hierarchy.  In current
 |      version of wxWidgets this works both for managed and child windows.
 |  
 |  MakeModal(*args, **kwargs)
 |      MakeModal(self, bool modal=True)
 |      
 |      Disables all other windows in the application so that the user can
 |      only interact with this window.  Passing False will reverse this
 |      effect.
 |  
 |  Move(*args, **kwargs)
 |      Move(self, Point pt, int flags=SIZE_USE_EXISTING)
 |      
 |      Moves the window to the given position.
 |  
 |  MoveAfterInTabOrder(*args, **kwargs)
 |      MoveAfterInTabOrder(self, Window win)
 |      
 |      Moves this window in the tab navigation order after the specified
 |      sibling window.  This means that when the user presses the TAB key on
 |      that other window, the focus switches to this window.
 |      
 |      The default tab order is the same as creation order.  This function
 |      and `MoveBeforeInTabOrder` allow to change it after creating all the
 |      windows.
 |  
 |  MoveBeforeInTabOrder(*args, **kwargs)
 |      MoveBeforeInTabOrder(self, Window win)
 |      
 |      Same as `MoveAfterInTabOrder` except that it inserts this window just
 |      before win instead of putting it right after it.
 |  
 |  MoveXY(*args, **kwargs)
 |      MoveXY(self, int x, int y, int flags=SIZE_USE_EXISTING)
 |      
 |      Moves the window to the given position.
 |  
 |  Navigate(*args, **kwargs)
 |      Navigate(self, int flags=NavigationKeyEvent.IsForward) -> bool
 |      
 |      Does keyboard navigation starting from this window to another.  This is
 |      equivalient to self.GetParent().NavigateIn().
 |  
 |  NavigateIn(*args, **kwargs)
 |      NavigateIn(self, int flags=NavigationKeyEvent.IsForward) -> bool
 |      
 |      Navigates inside this window.
 |  
 |  OnPaint(*args, **kwargs)
 |      OnPaint(self, PaintEvent event)
 |  
 |  PageDown(*args, **kwargs)
 |      PageDown(self) -> bool
 |      
 |      This is just a wrapper for ScrollPages(1).
 |  
 |  PageUp(*args, **kwargs)
 |      PageUp(self) -> bool
 |      
 |      This is just a wrapper for ScrollPages(-1).
 |  
 |  PopEventHandler(*args, **kwargs)
 |      PopEventHandler(self, bool deleteHandler=False) -> EvtHandler
 |      
 |      Removes and returns the top-most event handler on the event handler
 |      stack.  If deleteHandler is True then the wx.EvtHandler object will be
 |      destroyed after it is popped, and ``None`` will be returned instead.
 |  
 |  PopupMenu(*args, **kwargs)
 |      PopupMenu(self, Menu menu, Point pos=DefaultPosition) -> bool
 |      
 |      Pops up the given menu at the specified coordinates, relative to this window,
 |      and returns control when the user has dismissed the menu. If a menu item is
 |      selected, the corresponding menu event is generated and will be processed as
 |      usual.  If the default position is given then the current position of the
 |      mouse cursor will be used.
 |  
 |  PopupMenuXY(*args, **kwargs)
 |      PopupMenuXY(self, Menu menu, int x=-1, int y=-1) -> bool
 |      
 |      Pops up the given menu at the specified coordinates, relative to this window,
 |      and returns control when the user has dismissed the menu. If a menu item is
 |      selected, the corresponding menu event is generated and will be processed as
 |      usual.  If the default position is given then the current position of the
 |      mouse cursor will be used.
 |  
 |  PostCreate(self, pre)
 |      Phase 3 of the 2-phase create <wink!>
 |      Call this method after precreating the window with the 2-phase create method.
 |  
 |  PostSizeEvent(*args, **kwargs)
 |      PostSizeEvent(self)
 |      
 |      This is a more readable synonym for SendSizeEvent(wx.SEND_EVENT_POST)
 |  
 |  PostSizeEventToParent(*args, **kwargs)
 |      PostSizeEventToParent(self)
 |      
 |      This is the same as SendSizeEventToParent() but using PostSizeEvent()
 |  
 |  ProcessWindowEvent(*args, **kwargs)
 |      ProcessWindowEvent(self, Event event) -> bool
 |      
 |      Process an event by calling GetEventHandler().ProcessEvent(): this
 |      is a straightforward replacement for ProcessEvent() itself which
 |      shouldn't be used directly with windows as it doesn't take into
 |      account any event handlers associated with the window
 |  
 |  PushEventHandler(*args, **kwargs)
 |      PushEventHandler(self, EvtHandler handler)
 |      
 |      Pushes this event handler onto the event handler stack for the window.
 |      An event handler is an object that is capable of processing the events
 |      sent to a window.  (In other words, is able to dispatch the events to a
 |      handler function.)  By default, the window is its own event handler,
 |      but an application may wish to substitute another, for example to
 |      allow central implementation of event-handling for a variety of
 |      different window classes.
 |      
 |      wx.Window.PushEventHandler allows an application to set up a chain of
 |      event handlers, where an event not handled by one event handler is
 |      handed to the next one in the chain.  Use `wx.Window.PopEventHandler`
 |      to remove the event handler.  Ownership of the handler is *not* given
 |      to the window, so you should be sure to pop the handler before the
 |      window is destroyed and either let PopEventHandler destroy it, or call
 |      its Destroy method yourself.
 |  
 |  Raise(*args, **kwargs)
 |      Raise(self)
 |      
 |      Raises the window to the top of the window hierarchy.  In current
 |      version of wxWidgets this works both for managed and child windows.
 |  
 |  Refresh(*args, **kwargs)
 |      Refresh(self, bool eraseBackground=True, Rect rect=None)
 |      
 |      Mark the specified rectangle (or the whole window) as "dirty" so it
 |      will be repainted.  Causes an EVT_PAINT event to be generated and sent
 |      to the window.
 |  
 |  RefreshRect(*args, **kwargs)
 |      RefreshRect(self, Rect rect, bool eraseBackground=True)
 |      
 |      Redraws the contents of the given rectangle: the area inside it will
 |      be repainted.  This is the same as Refresh but has a nicer syntax.
 |  
 |  RegisterHotKey(*args, **kwargs)
 |      RegisterHotKey(self, int hotkeyId, int modifiers, int keycode) -> bool
 |      
 |      Registers a system wide hotkey. Every time the user presses the hotkey
 |      registered here, this window will receive a hotkey event. It will
 |      receive the event even if the application is in the background and
 |      does not have the input focus because the user is working with some
 |      other application.  To bind an event handler function to this hotkey
 |      use EVT_HOTKEY with an id equal to hotkeyId.  Returns True if the
 |      hotkey was registered successfully.
 |  
 |  ReleaseMouse(*args, **kwargs)
 |      ReleaseMouse(self)
 |      
 |      Releases mouse input captured with wx.Window.CaptureMouse.
 |  
 |  RemoveChild(*args, **kwargs)
 |      RemoveChild(self, Window child)
 |      
 |      Removes a child window. This is called automatically by window
 |      deletion functions so should not be required by the application
 |      programmer.
 |  
 |  RemoveEventHandler(*args, **kwargs)
 |      RemoveEventHandler(self, EvtHandler handler) -> bool
 |      
 |      Find the given handler in the event handler chain and remove (but not
 |      delete) it from the event handler chain, returns True if it was found
 |      and False otherwise (this also results in an assert failure so this
 |      function should only be called when the handler is supposed to be
 |      there.)
 |  
 |  Reparent(*args, **kwargs)
 |      Reparent(self, Window newParent) -> bool
 |      
 |      Reparents the window, i.e the window will be removed from its current
 |      parent window (e.g. a non-standard toolbar in a wxFrame) and then
 |      re-inserted into another. Available on Windows and GTK.  Returns True
 |      if the parent was changed, False otherwise (error or newParent ==
 |      oldParent)
 |  
 |  ScreenToClient(*args, **kwargs)
 |      ScreenToClient(self, Point pt) -> Point
 |      
 |      Converts from screen to client window coordinates.
 |  
 |  ScreenToClientXY(*args, **kwargs)
 |      ScreenToClientXY(int x, int y) -> (x,y)
 |      
 |      Converts from screen to client window coordinates.
 |  
 |  ScrollLines(*args, **kwargs)
 |      ScrollLines(self, int lines) -> bool
 |      
 |      If the platform and window class supports it, scrolls the window by
 |      the given number of lines down, if lines is positive, or up if lines
 |      is negative.  Returns True if the window was scrolled, False if it was
 |      already on top/bottom and nothing was done.
 |  
 |  ScrollPages(*args, **kwargs)
 |      ScrollPages(self, int pages) -> bool
 |      
 |      If the platform and window class supports it, scrolls the window by
 |      the given number of pages down, if pages is positive, or up if pages
 |      is negative.  Returns True if the window was scrolled, False if it was
 |      already on top/bottom and nothing was done.
 |  
 |  ScrollWindow(*args, **kwargs)
 |      ScrollWindow(self, int dx, int dy, Rect rect=None)
 |      
 |      Physically scrolls the pixels in the window and move child windows
 |      accordingly.  Use this function to optimise your scrolling
 |      implementations, to minimise the area that must be redrawn. Note that
 |      it is rarely required to call this function from a user program.
 |  
 |  SendIdleEvents(*args, **kwargs)
 |      SendIdleEvents(self, IdleEvent event) -> bool
 |      
 |      Send idle event to window and all subwindows.  Returns True if more
 |      idle time is requested.
 |  
 |  SendSizeEvent(*args, **kwargs)
 |      SendSizeEvent(self, int flags=0)
 |      
 |      Sends a size event to the window using its current size -- this has an
 |      effect of refreshing the window layout.
 |      
 |      By default the event is sent, i.e. processed immediately, but if flags
 |      value includes wxSEND_EVENT_POST then it's posted, i.e. only schedule
 |      for later processing.
 |  
 |  SendSizeEventToParent(*args, **kwargs)
 |      SendSizeEventToParent(self, int flags=0)
 |      
 |      This is a safe wrapper for GetParent().SendSizeEvent(): it checks that
 |      we have a parent window and it's not in process of being deleted.
 |  
 |  SetAcceleratorTable(*args, **kwargs)
 |      SetAcceleratorTable(self, AcceleratorTable accel)
 |      
 |      Sets the accelerator table for this window.
 |  
 |  SetAutoLayout(*args, **kwargs)
 |      SetAutoLayout(self, bool autoLayout)
 |      
 |      Determines whether the Layout function will be called automatically
 |      when the window is resized.  lease note that this only happens for the
 |      windows usually used to contain children, namely `wx.Panel` and
 |      `wx.TopLevelWindow` (and the classes deriving from them).
 |      
 |      This method is called implicitly by `SetSizer` but if you use
 |      `SetConstraints` you should call it manually or otherwise the window
 |      layout won't be correctly updated when its size changes.
 |  
 |  SetBackgroundColour(*args, **kwargs)
 |      SetBackgroundColour(self, Colour colour) -> bool
 |      
 |      Sets the background colour of the window.  Returns True if the colour
 |      was changed.  The background colour is usually painted by the default
 |      EVT_ERASE_BACKGROUND event handler function under Windows and
 |      automatically under GTK.  Using `wx.NullColour` will reset the window
 |      to the default background colour.
 |      
 |      Note that setting the background colour may not cause an immediate
 |      refresh, so you may wish to call `ClearBackground` or `Refresh` after
 |      calling this function.
 |      
 |      Using this function will disable attempts to use themes for this
 |      window, if the system supports them.  Use with care since usually the
 |      themes represent the appearance chosen by the user to be used for all
 |      applications on the system.
 |  
 |  SetBackgroundStyle(*args, **kwargs)
 |      SetBackgroundStyle(self, int style) -> bool
 |      
 |      Returns the background style of the window. The background style
 |      indicates how the background of the window is drawn.
 |      
 |          ======================  ========================================
 |          wx.BG_STYLE_SYSTEM      The background colour or pattern should
 |                                  be determined by the system
 |          wx.BG_STYLE_COLOUR      The background should be a solid colour
 |          wx.BG_STYLE_CUSTOM      The background will be implemented by the
 |                                  application.
 |          ======================  ========================================
 |      
 |      On GTK+, use of wx.BG_STYLE_CUSTOM allows the flicker-free drawing of
 |      a custom background, such as a tiled bitmap. Currently the style has
 |      no effect on other platforms.
 |      
 |      :see: `GetBackgroundStyle`, `SetBackgroundColour`
 |  
 |  SetBestFittingSize = SetInitialSize(*args, **kw)
 |      SetInitialSize(self, Size size=DefaultSize)
 |      
 |      A 'Smart' SetSize that will fill in default size components with the
 |      window's *best size* values.  Also set's the minsize for use with sizers.
 |  
 |  SetCanFocus(*args, **kwargs)
 |      SetCanFocus(self, bool canFocus)
 |  
 |  SetCaret(*args, **kwargs)
 |      SetCaret(self, Caret caret)
 |      
 |      Sets the caret associated with the window.
 |  
 |  SetClientRect(*args, **kwargs)
 |      SetClientRect(self, Rect rect)
 |      
 |      This sets the size of the window client area in pixels. Using this
 |      function to size a window tends to be more device-independent than
 |      wx.Window.SetSize, since the application need not worry about what
 |      dimensions the border or title bar have when trying to fit the window
 |      around panel items, for example.
 |  
 |  SetClientSize(*args, **kwargs)
 |      SetClientSize(self, Size size)
 |      
 |      This sets the size of the window client area in pixels. Using this
 |      function to size a window tends to be more device-independent than
 |      wx.Window.SetSize, since the application need not worry about what
 |      dimensions the border or title bar have when trying to fit the window
 |      around panel items, for example.
 |  
 |  SetClientSizeWH(*args, **kwargs)
 |      SetClientSizeWH(self, int width, int height)
 |      
 |      This sets the size of the window client area in pixels. Using this
 |      function to size a window tends to be more device-independent than
 |      wx.Window.SetSize, since the application need not worry about what
 |      dimensions the border or title bar have when trying to fit the window
 |      around panel items, for example.
 |  
 |  SetConstraints(*args, **kwargs)
 |      SetConstraints(self, LayoutConstraints constraints)
 |      
 |      Sets the window to have the given layout constraints. If an existing
 |      layout constraints object is already owned by the window, it will be
 |      deleted.  Pass None to disassociate and delete the window's current
 |      constraints.
 |      
 |      You must call SetAutoLayout to tell a window to use the constraints
 |      automatically in its default EVT_SIZE handler; otherwise, you must
 |      handle EVT_SIZE yourself and call Layout() explicitly. When setting
 |      both a wx.LayoutConstraints and a wx.Sizer, only the sizer will have
 |      effect.
 |  
 |  SetContainingSizer(*args, **kwargs)
 |      SetContainingSizer(self, Sizer sizer)
 |      
 |      This normally does not need to be called by application code. It is
 |      called internally when a window is added to a sizer, and is used so
 |      the window can remove itself from the sizer when it is destroyed.
 |  
 |  SetCursor(*args, **kwargs)
 |      SetCursor(self, Cursor cursor) -> bool
 |      
 |      Sets the window's cursor. Notice that the window cursor also sets it
 |      for the children of the window implicitly.
 |      
 |      The cursor may be wx.NullCursor in which case the window cursor will
 |      be reset back to default.
 |  
 |  SetDimensions(*args, **kwargs)
 |      SetDimensions(self, int x, int y, int width, int height, int sizeFlags=SIZE_AUTO)
 |      
 |      Sets the position and size of the window in pixels.  The sizeFlags
 |      parameter indicates the interpretation of the other params if they are
 |      equal to -1.
 |      
 |          ========================  ======================================
 |          wx.SIZE_AUTO              A -1 indicates that a class-specific
 |                                    default should be used.
 |          wx.SIZE_USE_EXISTING      Existing dimensions should be used if
 |                                    -1 values are supplied.
 |          wxSIZE_ALLOW_MINUS_ONE    Allow dimensions of -1 and less to be
 |                                    interpreted as real dimensions, not
 |                                    default values.
 |          ========================  ======================================
 |  
 |  SetDoubleBuffered(*args, **kwargs)
 |      SetDoubleBuffered(self, bool on)
 |      
 |      Put the native window into double buffered or composited mode.
 |  
 |  SetDropTarget(*args, **kwargs)
 |      SetDropTarget(self, DropTarget dropTarget)
 |      
 |      Associates a drop target with this window.  If the window already has
 |      a drop target, it is deleted.
 |  
 |  SetEventHandler(*args, **kwargs)
 |      SetEventHandler(self, EvtHandler handler)
 |      
 |      Sets the event handler for this window.  An event handler is an object
 |      that is capable of processing the events sent to a window.  (In other
 |      words, is able to dispatch the events to handler function.)  By
 |      default, the window is its own event handler, but an application may
 |      wish to substitute another, for example to allow central
 |      implementation of event-handling for a variety of different window
 |      classes.
 |      
 |      It is usually better to use `wx.Window.PushEventHandler` since this sets
 |      up a chain of event handlers, where an event not handled by one event
 |      handler is handed off to the next one in the chain.
 |  
 |  SetExtraStyle(*args, **kwargs)
 |      SetExtraStyle(self, long exStyle)
 |      
 |      Sets the extra style bits for the window.  Extra styles are the less
 |      often used style bits which can't be set with the constructor or with
 |      SetWindowStyleFlag()
 |  
 |  SetFocus(*args, **kwargs)
 |      SetFocus(self)
 |      
 |      Set's the focus to this window, allowing it to receive keyboard input.
 |  
 |  SetFocusFromKbd(*args, **kwargs)
 |      SetFocusFromKbd(self)
 |      
 |      Set focus to this window as the result of a keyboard action.  Normally
 |      only called internally.
 |  
 |  SetFont(*args, **kwargs)
 |      SetFont(self, Font font) -> bool
 |      
 |      Sets the font for this window.
 |  
 |  SetForegroundColour(*args, **kwargs)
 |      SetForegroundColour(self, Colour colour) -> bool
 |      
 |      Sets the foreground colour of the window.  Returns True is the colour
 |      was changed.  The interpretation of foreground colour is dependent on
 |      the window class; it may be the text colour or other colour, or it may
 |      not be used at all.
 |  
 |  SetHelpText(*args, **kwargs)
 |      SetHelpText(self, String text)
 |      
 |      Sets the help text to be used as context-sensitive help for this
 |      window.  Note that the text is actually stored by the current
 |      `wx.HelpProvider` implementation, and not in the window object itself.
 |  
 |  SetHelpTextForId(*args, **kw)
 |      SetHelpTextForId(self, String text)
 |      
 |      Associate this help text with all windows with the same id as this
 |      one.
 |  
 |  SetId(*args, **kwargs)
 |      SetId(self, int winid)
 |      
 |      Sets the identifier of the window.  Each window has an integer
 |      identifier. If the application has not provided one, an identifier
 |      will be generated. Normally, the identifier should be provided on
 |      creation and should not be modified subsequently.
 |  
 |  SetInitialSize(*args, **kwargs)
 |      SetInitialSize(self, Size size=DefaultSize)
 |      
 |      A 'Smart' SetSize that will fill in default size components with the
 |      window's *best size* values.  Also set's the minsize for use with sizers.
 |  
 |  SetLabel(*args, **kwargs)
 |      SetLabel(self, String label)
 |      
 |      Set the text which the window shows in its label if applicable.
 |  
 |  SetLayoutDirection(*args, **kwargs)
 |      SetLayoutDirection(self, int dir)
 |      
 |      Set the layout direction (LTR or RTL) for this window.
 |  
 |  SetMaxClientSize(*args, **kwargs)
 |      SetMaxClientSize(self, Size size)
 |  
 |  SetMaxSize(*args, **kwargs)
 |      SetMaxSize(self, Size maxSize)
 |      
 |      A more convenient method than `SetSizeHints` for setting just the
 |      max size.
 |  
 |  SetMinClientSize(*args, **kwargs)
 |      SetMinClientSize(self, Size size)
 |  
 |  SetMinSize(*args, **kwargs)
 |      SetMinSize(self, Size minSize)
 |      
 |      A more convenient method than `SetSizeHints` for setting just the
 |      min size.
 |  
 |  SetName(*args, **kwargs)
 |      SetName(self, String name)
 |      
 |      Sets the window's name.  The window name is used for ressource setting
 |      in X, it is not the same as the window title/label
 |  
 |  SetOwnBackgroundColour(*args, **kwargs)
 |      SetOwnBackgroundColour(self, Colour colour)
 |  
 |  SetOwnFont(*args, **kwargs)
 |      SetOwnFont(self, Font font)
 |  
 |  SetOwnForegroundColour(*args, **kwargs)
 |      SetOwnForegroundColour(self, Colour colour)
 |  
 |  SetPosition = Move(*args, **kwargs)
 |      Move(self, Point pt, int flags=SIZE_USE_EXISTING)
 |      
 |      Moves the window to the given position.
 |  
 |  SetRect(*args, **kwargs)
 |      SetRect(self, Rect rect, int sizeFlags=SIZE_AUTO)
 |      
 |      Sets the position and size of the window in pixels using a wx.Rect.
 |  
 |  SetScrollPos(*args, **kwargs)
 |      SetScrollPos(self, int orientation, int pos, bool refresh=True)
 |      
 |      Sets the position of one of the built-in scrollbars.
 |  
 |  SetScrollbar(*args, **kwargs)
 |      SetScrollbar(self, int orientation, int position, int thumbSize, int range, 
 |          bool refresh=True)
 |      
 |      Sets the scrollbar properties of a built-in scrollbar.
 |  
 |  SetSize(*args, **kwargs)
 |      SetSize(self, Size size)
 |      
 |      Sets the size of the window in pixels.
 |  
 |  SetSizeHints(*args, **kwargs)
 |      SetSizeHints(self, int minW, int minH, int maxW=-1, int maxH=-1, int incW=-1, 
 |          int incH=-1)
 |      
 |      Allows specification of minimum and maximum window sizes, and window
 |      size increments. If a pair of values is not set (or set to -1), the
 |      default values will be used.  If this function is called, the user
 |      will not be able to size the window outside the given bounds (if it is
 |      a top-level window.)  Sizers will also inspect the minimum window size
 |      and will use that value if set when calculating layout.
 |      
 |      The resizing increments are only significant under Motif or Xt.
 |  
 |  SetSizeHintsSz(*args, **kwargs)
 |      SetSizeHintsSz(self, Size minSize, Size maxSize=DefaultSize, Size incSize=DefaultSize)
 |      
 |      Allows specification of minimum and maximum window sizes, and window
 |      size increments. If a pair of values is not set (or set to -1), the
 |      default values will be used.  If this function is called, the user
 |      will not be able to size the window outside the given bounds (if it is
 |      a top-level window.)  Sizers will also inspect the minimum window size
 |      and will use that value if set when calculating layout.
 |      
 |      The resizing increments are only significant under Motif or Xt.
 |  
 |  SetSizeWH(*args, **kwargs)
 |      SetSizeWH(self, int width, int height)
 |      
 |      Sets the size of the window in pixels.
 |  
 |  SetSizer(*args, **kwargs)
 |      SetSizer(self, Sizer sizer, bool deleteOld=True)
 |      
 |      Sets the window to have the given layout sizer. The window will then
 |      own the object, and will take care of its deletion. If an existing
 |      layout sizer object is already owned by the window, it will be deleted
 |      if the deleteOld parameter is true. Note that this function will also
 |      call SetAutoLayout implicitly with a True parameter if the sizer is
 |      non-None, and False otherwise.
 |  
 |  SetSizerAndFit(*args, **kwargs)
 |      SetSizerAndFit(self, Sizer sizer, bool deleteOld=True)
 |      
 |      The same as SetSizer, except it also sets the size hints for the
 |      window based on the sizer's minimum size.
 |  
 |  SetThemeEnabled(*args, **kwargs)
 |      SetThemeEnabled(self, bool enableTheme)
 |      
 |      This function tells a window if it should use the system's "theme"
 |       code to draw the windows' background instead if its own background
 |       drawing code. This will only have an effect on platforms that support
 |       the notion of themes in user defined windows. One such platform is
 |       GTK+ where windows can have (very colourful) backgrounds defined by a
 |       user's selected theme.
 |      
 |      Dialogs, notebook pages and the status bar have this flag set to true
 |      by default so that the default look and feel is simulated best.
 |  
 |  SetToolTip(*args, **kwargs)
 |      SetToolTip(self, ToolTip tip)
 |      
 |      Attach a tooltip to the window.
 |  
 |  SetToolTipString(*args, **kwargs)
 |      SetToolTipString(self, String tip)
 |      
 |      Attach a tooltip to the window.
 |  
 |  SetTransparent(*args, **kwargs)
 |      SetTransparent(self, byte alpha) -> bool
 |      
 |      Attempt to set the transparency of this window to the ``alpha`` value,
 |      returns True on success.  The ``alpha`` value is an integer in the
 |      range of 0 to 255, where 0 is fully transparent and 255 is fully
 |      opaque.
 |  
 |  SetValidator(*args, **kwargs)
 |      SetValidator(self, Validator validator)
 |      
 |      Deletes the current validator (if any) and sets the window validator,
 |      having called wx.Validator.Clone to create a new validator of this
 |      type.
 |  
 |  SetVirtualSize(*args, **kwargs)
 |      SetVirtualSize(self, Size size)
 |      
 |      Set the the virtual size of a window in pixels.  For most windows this
 |      is just the client area of the window, but for some like scrolled
 |      windows it is more or less independent of the screen window size.
 |  
 |  SetVirtualSizeHints(*args, **kw)
 |      SetVirtualSizeHints(self, int minW, int minH, int maxW=-1, int maxH=-1)
 |  
 |  SetVirtualSizeHintsSz(*args, **kw)
 |      SetVirtualSizeHintsSz(self, Size minSize, Size maxSize=DefaultSize)
 |  
 |  SetVirtualSizeWH(*args, **kwargs)
 |      SetVirtualSizeWH(self, int w, int h)
 |      
 |      Set the the virtual size of a window in pixels.  For most windows this
 |      is just the client area of the window, but for some like scrolled
 |      windows it is more or less independent of the screen window size.
 |  
 |  SetWindowStyle = SetWindowStyleFlag(*args, **kwargs)
 |      SetWindowStyleFlag(self, long style)
 |      
 |      Sets the style of the window. Please note that some styles cannot be
 |      changed after the window creation and that Refresh() might need to be
 |      called after changing the others for the change to take place
 |      immediately.
 |  
 |  SetWindowStyleFlag(*args, **kwargs)
 |      SetWindowStyleFlag(self, long style)
 |      
 |      Sets the style of the window. Please note that some styles cannot be
 |      changed after the window creation and that Refresh() might need to be
 |      called after changing the others for the change to take place
 |      immediately.
 |  
 |  SetWindowVariant(*args, **kwargs)
 |      SetWindowVariant(self, int variant)
 |      
 |      Sets the variant of the window/font size to use for this window, if
 |      the platform supports variants, for example, wxMac.
 |  
 |  ShouldInheritColours(*args, **kwargs)
 |      ShouldInheritColours(self) -> bool
 |      
 |      Return true from here to allow the colours of this window to be
 |      changed by InheritAttributes, returning false forbids inheriting them
 |      from the parent window.
 |      
 |      The base class version returns false, but this method is overridden in
 |      wxControl where it returns true.
 |  
 |  Show(*args, **kwargs)
 |      Show(self, bool show=True) -> bool
 |      
 |      Shows or hides the window. You may need to call Raise for a top level
 |      window if you want to bring it to top, although this is not needed if
 |      Show is called immediately after the frame creation.  Returns True if
 |      the window has been shown or hidden or False if nothing was done
 |      because it already was in the requested state.
 |  
 |  ShowWithEffect(*args, **kwargs)
 |      ShowWithEffect(self, int effect, unsigned int timeout=0) -> bool
 |      
 |      Show the window with a special effect, not implemented on most
 |      platforms (where it is the same as Show())
 |      
 |      Timeout specifies how long the animation should take, in ms, the
 |      default value of 0 means to use the default (system-dependent) value.
 |  
 |  Thaw(*args, **kwargs)
 |      Thaw(self)
 |      
 |      Reenables window updating after a previous call to Freeze.  Calls to
 |      Freeze/Thaw may be nested, so Thaw must be called the same number of
 |      times that Freeze was before the window will be updated.
 |  
 |  ToggleWindowStyle(*args, **kwargs)
 |      ToggleWindowStyle(self, int flag) -> bool
 |      
 |      Turn the flag on if it had been turned off before and vice versa,
 |      returns True if the flag is turned on by this function call.
 |  
 |  TransferDataFromWindow(*args, **kwargs)
 |      TransferDataFromWindow(self) -> bool
 |      
 |      Transfers values from child controls to data areas specified by their
 |      validators. Returns false if a transfer failed.  If the window has
 |      wx.WS_EX_VALIDATE_RECURSIVELY extra style flag set, the method will
 |      also call TransferDataFromWindow() of all child windows.
 |  
 |  TransferDataToWindow(*args, **kwargs)
 |      TransferDataToWindow(self) -> bool
 |      
 |      Transfers values to child controls from data areas specified by their
 |      validators.  If the window has wx.WS_EX_VALIDATE_RECURSIVELY extra
 |      style flag set, the method will also call TransferDataToWindow() of
 |      all child windows.
 |  
 |  UnregisterHotKey(*args, **kwargs)
 |      UnregisterHotKey(self, int hotkeyId) -> bool
 |      
 |      Unregisters a system wide hotkey.
 |  
 |  UnsetToolTip(*args, **kwargs)
 |      UnsetToolTip(self)
 |  
 |  Update(*args, **kwargs)
 |      Update(self)
 |      
 |      Calling this method immediately repaints the invalidated area of the
 |      window instead of waiting for the EVT_PAINT event to happen, (normally
 |      this would usually only happen when the flow of control returns to the
 |      event loop.)  Notice that this function doesn't refresh the window and
 |      does nothing if the window has been already repainted.  Use `Refresh`
 |      first if you want to immediately redraw the window (or some portion of
 |      it) unconditionally.
 |  
 |  UpdateWindowUI(*args, **kwargs)
 |      UpdateWindowUI(self, long flags=UPDATE_UI_NONE)
 |      
 |      This function sends EVT_UPDATE_UI events to the window. The particular
 |      implementation depends on the window; for example a wx.ToolBar will
 |      send an update UI event for each toolbar button, and a wx.Frame will
 |      send an update UI event for each menubar menu item. You can call this
 |      function from your application to ensure that your UI is up-to-date at
 |      a particular point in time (as far as your EVT_UPDATE_UI handlers are
 |      concerned). This may be necessary if you have called
 |      `wx.UpdateUIEvent.SetMode` or `wx.UpdateUIEvent.SetUpdateInterval` to
 |      limit the overhead that wxWindows incurs by sending update UI events
 |      in idle time.
 |  
 |  UseBgCol(*args, **kwargs)
 |      UseBgCol(self) -> bool
 |  
 |  Validate(*args, **kwargs)
 |      Validate(self) -> bool
 |      
 |      Validates the current values of the child controls using their
 |      validators.  If the window has wx.WS_EX_VALIDATE_RECURSIVELY extra
 |      style flag set, the method will also call Validate() of all child
 |      windows.  Returns false if any of the validations failed.
 |  
 |  WarpPointer(*args, **kwargs)
 |      WarpPointer(self, int x, int y)
 |      
 |      Moves the pointer to the given position on the window.
 |      
 |      NOTE: This function is not supported under Mac because Apple Human
 |      Interface Guidelines forbid moving the mouse cursor programmatically.
 |  
 |  WindowToClientSize(*args, **kwargs)
 |      WindowToClientSize(self, Size size) -> Size
 |      
 |      Converts window size ``size`` to corresponding client area size. In
 |      other words, the returned value is what `GetClientSize` would return
 |      if this window had given window size. Components with
 |      ``wxDefaultCoord`` (-1) value are left unchanged.
 |      
 |      Note that the conversion is not always exact, it assumes that
 |      non-client area doesn't change and so doesn't take into account things
 |      like menu bar (un)wrapping or (dis)appearance of the scrollbars.
 |  
 |  ----------------------------------------------------------------------
 |  Static methods inherited from Window:
 |  
 |  FindFocus(*args, **kwargs)
 |      FindFocus() -> Window
 |      
 |      Returns the window or control that currently has the keyboard focus,
 |      or None.
 |  
 |  GetCapture(*args, **kwargs)
 |      GetCapture() -> Window
 |      
 |      Returns the window which currently captures the mouse or None
 |  
 |  NewControlId(*args, **kwargs)
 |      NewControlId(int count=1) -> int
 |      
 |      Generate a unique id (or count of them consecutively), returns a
 |      valid id in the auto-id range or wxID_NONE if failed.  If using
 |      autoid management, it will mark the id as reserved until it is
 |      used (by assigning it to a wxWindowIDRef) or unreserved.
 |  
 |  ReleaseControlId(id)
 |  
 |  UnreserveControlId(*args, **kwargs)
 |      UnreserveControlId(int id, int count=1)
 |      
 |      If an ID generated from NewControlId is not assigned to a wxWindowIDRef,
 |      it must be unreserved.
 |  
 |  ----------------------------------------------------------------------
 |  Data descriptors inherited from Window:
 |  
 |  AcceleratorTable
 |      See `GetAcceleratorTable` and `SetAcceleratorTable`
 |  
 |  AutoLayout
 |      See `GetAutoLayout` and `SetAutoLayout`
 |  
 |  BackgroundColour
 |      See `GetBackgroundColour` and `SetBackgroundColour`
 |  
 |  BackgroundStyle
 |      See `GetBackgroundStyle` and `SetBackgroundStyle`
 |  
 |  BestSize
 |      See `GetBestSize`
 |  
 |  BestVirtualSize
 |      See `GetBestVirtualSize`
 |  
 |  Border
 |      See `GetBorder`
 |  
 |  Caret
 |      See `GetCaret` and `SetCaret`
 |  
 |  CharHeight
 |      See `GetCharHeight`
 |  
 |  CharWidth
 |      See `GetCharWidth`
 |  
 |  Children
 |      See `GetChildren`
 |  
 |  ClientAreaOrigin
 |      See `GetClientAreaOrigin`
 |  
 |  ClientRect
 |      See `GetClientRect` and `SetClientRect`
 |  
 |  ClientSize
 |      See `GetClientSize` and `SetClientSize`
 |  
 |  Constraints
 |      See `GetConstraints` and `SetConstraints`
 |  
 |  ContainingSizer
 |      See `GetContainingSizer` and `SetContainingSizer`
 |  
 |  Cursor
 |      See `GetCursor` and `SetCursor`
 |  
 |  DefaultAttributes
 |      See `GetDefaultAttributes`
 |  
 |  DropTarget
 |      See `GetDropTarget` and `SetDropTarget`
 |  
 |  EffectiveMinSize
 |      See `GetEffectiveMinSize`
 |  
 |  Enabled
 |      See `IsEnabled` and `Enable`
 |  
 |  EventHandler
 |      See `GetEventHandler` and `SetEventHandler`
 |  
 |  ExtraStyle
 |      See `GetExtraStyle` and `SetExtraStyle`
 |  
 |  Font
 |      See `GetFont` and `SetFont`
 |  
 |  ForegroundColour
 |      See `GetForegroundColour` and `SetForegroundColour`
 |  
 |  GrandParent
 |      See `GetGrandParent`
 |  
 |  GtkWidget
 |      GetGtkWidget(self) -> long
 |      
 |      On wxGTK returns a pointer to the GtkWidget for this window as a long
 |      integer.  On the other platforms this method returns zero.
 |  
 |  Handle
 |      See `GetHandle`
 |  
 |  HelpText
 |      See `GetHelpText` and `SetHelpText`
 |  
 |  Id
 |      See `GetId` and `SetId`
 |  
 |  Label
 |      See `GetLabel` and `SetLabel`
 |  
 |  LayoutDirection
 |      See `GetLayoutDirection` and `SetLayoutDirection`
 |  
 |  MaxClientSize
 |      GetMaxClientSize(self) -> Size
 |  
 |  MaxHeight
 |      See `GetMaxHeight`
 |  
 |  MaxSize
 |      See `GetMaxSize` and `SetMaxSize`
 |  
 |  MaxWidth
 |      See `GetMaxWidth`
 |  
 |  MinClientSize
 |      GetMinClientSize(self) -> Size
 |  
 |  MinHeight
 |      See `GetMinHeight`
 |  
 |  MinSize
 |      See `GetMinSize` and `SetMinSize`
 |  
 |  MinWidth
 |      See `GetMinWidth`
 |  
 |  Name
 |      See `GetName` and `SetName`
 |  
 |  Parent
 |      See `GetParent`
 |  
 |  Position
 |      See `GetPosition` and `SetPosition`
 |  
 |  Rect
 |      See `GetRect` and `SetRect`
 |  
 |  ScreenPosition
 |      See `GetScreenPosition`
 |  
 |  ScreenRect
 |      See `GetScreenRect`
 |  
 |  Shown
 |      See `IsShown` and `Show`
 |  
 |  Size
 |      See `GetSize` and `SetSize`
 |  
 |  Sizer
 |      See `GetSizer` and `SetSizer`
 |  
 |  ThemeEnabled
 |      See `GetThemeEnabled` and `SetThemeEnabled`
 |  
 |  ToolTip
 |      See `GetToolTip` and `SetToolTip`
 |  
 |  ToolTipString
 |  
 |  TopLevel
 |      See `IsTopLevel`
 |  
 |  TopLevelParent
 |      See `GetTopLevelParent`
 |  
 |  UpdateClientRect
 |      See `GetUpdateClientRect`
 |  
 |  UpdateRegion
 |      See `GetUpdateRegion`
 |  
 |  Validator
 |      See `GetValidator` and `SetValidator`
 |  
 |  VirtualSize
 |      See `GetVirtualSize` and `SetVirtualSize`
 |  
 |  WindowStyle
 |      See `GetWindowStyle` and `SetWindowStyle`
 |  
 |  WindowStyleFlag
 |      See `GetWindowStyleFlag` and `SetWindowStyleFlag`
 |  
 |  WindowVariant
 |      See `GetWindowVariant` and `SetWindowVariant`
 |  
 |  ----------------------------------------------------------------------
 |  Methods inherited from EvtHandler:
 |  
 |  AddPendingEvent(*args, **kwargs)
 |      AddPendingEvent(self, Event event)
 |  
 |  Bind(self, event, handler, source=None, id=-1, id2=-1)
 |      Bind an event to an event handler.
 |      
 |      :param event: One of the EVT_* objects that specifies the
 |                    type of event to bind,
 |      
 |      :param handler: A callable object to be invoked when the
 |                    event is delivered to self.  Pass None to
 |                    disconnect an event handler.
 |      
 |      :param source: Sometimes the event originates from a
 |                    different window than self, but you still
 |                    want to catch it in self.  (For example, a
 |                    button event delivered to a frame.)  By
 |                    passing the source of the event, the event
 |                    handling system is able to differentiate
 |                    between the same event type from different
 |                    controls.
 |      
 |      :param id: Used to spcify the event source by ID instead
 |                 of instance.
 |      
 |      :param id2: Used when it is desirable to bind a handler
 |                    to a range of IDs, such as with EVT_MENU_RANGE.
 |  
 |  Connect(*args, **kwargs)
 |      Connect(self, int id, int lastId, EventType eventType, PyObject func)
 |  
 |  DeletePendingEvents(*args, **kwargs)
 |      DeletePendingEvents(self)
 |  
 |  Disconnect(*args, **kwargs)
 |      Disconnect(self, int id, int lastId=-1, EventType eventType=wxEVT_NULL, 
 |          PyObject func=None) -> bool
 |  
 |  GetEvtHandlerEnabled(*args, **kwargs)
 |      GetEvtHandlerEnabled(self) -> bool
 |  
 |  GetNextHandler(*args, **kwargs)
 |      GetNextHandler(self) -> EvtHandler
 |  
 |  GetPreviousHandler(*args, **kwargs)
 |      GetPreviousHandler(self) -> EvtHandler
 |  
 |  IsUnlinked(*args, **kwargs)
 |      IsUnlinked(self) -> bool
 |  
 |  ProcessEvent(*args, **kwargs)
 |      ProcessEvent(self, Event event) -> bool
 |  
 |  ProcessEventLocally(*args, **kwargs)
 |      ProcessEventLocally(self, Event event) -> bool
 |  
 |  ProcessPendingEvents(*args, **kwargs)
 |      ProcessPendingEvents(self)
 |  
 |  QueueEvent(*args, **kwargs)
 |      QueueEvent(self, Event event)
 |  
 |  SafelyProcessEvent(*args, **kwargs)
 |      SafelyProcessEvent(self, Event event) -> bool
 |  
 |  SetEvtHandlerEnabled(*args, **kwargs)
 |      SetEvtHandlerEnabled(self, bool enabled)
 |  
 |  SetNextHandler(*args, **kwargs)
 |      SetNextHandler(self, EvtHandler handler)
 |  
 |  SetPreviousHandler(*args, **kwargs)
 |      SetPreviousHandler(self, EvtHandler handler)
 |  
 |  Unbind(self, event, source=None, id=-1, id2=-1, handler=None)
 |      Disconnects the event handler binding for event from self.
 |      Returns True if successful.
 |  
 |  Unlink(*args, **kwargs)
 |      Unlink(self)
 |  
 |  ----------------------------------------------------------------------
 |  Data descriptors inherited from EvtHandler:
 |  
 |  EvtHandlerEnabled
 |      See `GetEvtHandlerEnabled` and `SetEvtHandlerEnabled`
 |  
 |  NextHandler
 |      See `GetNextHandler` and `SetNextHandler`
 |  
 |  PreviousHandler
 |      See `GetPreviousHandler` and `SetPreviousHandler`
 |  
 |  ----------------------------------------------------------------------
 |  Methods inherited from Object:
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
 |  Data descriptors inherited from Object:
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
[Finished in 0.3s]

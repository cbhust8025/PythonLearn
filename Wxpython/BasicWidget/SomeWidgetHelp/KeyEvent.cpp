C:\Python27\python.exe C:/Users/CB/PycharmProjects/hemengting/Wxlearn1.1-start.py
Help on class KeyEvent in module wx._core:

class KeyEvent(Event, KeyboardState)
 |  This event class contains information about keypress and character
 |  events.  These events are only sent to the widget that currently has
 |  the keyboard focus.
 |  
 |  Notice that there are three different kinds of keyboard events in
 |  wxWidgets: key down and up events and char events. The difference
 |  between the first two is clear - the first corresponds to a key press
 |  and the second to a key release - otherwise they are identical. Just
 |  note that if the key is maintained in a pressed state you will
 |  typically get a lot of (automatically generated) down events but only
 |  one up so it is wrong to assume that there is one up event
 |  corresponding to each down one.
 |  
 |  Both key events provide untranslated key codes while the char event
 |  carries the translated one. The untranslated code for alphanumeric
 |  keys is always an upper case value. For the other keys it is one of
 |  WXK_XXX values from the keycodes table. The translated key is, in
 |  general, the character the user expects to appear as the result of the
 |  key combination when typing the text into a text entry zone, for
 |  example.
 |  
 |  A few examples to clarify this (all assume that CAPS LOCK is unpressed
 |  and the standard US keyboard): when the 'A' key is pressed, the key
 |  down event key code is equal to ASCII A == 65. But the char event key
 |  code is ASCII a == 97. On the other hand, if you press both SHIFT and
 |  'A' keys simultaneously , the key code in key down event will still be
 |  just 'A' while the char event key code parameter will now be 'A' as
 |  well.
 |  
 |  Although in this simple case it is clear that the correct key code
 |  could be found in the key down event handler by checking the value
 |  returned by `ShiftDown`, in general you should use EVT_CHAR for this
 |  as for non alphanumeric keys or non-US keyboard layouts the
 |  translation is keyboard-layout dependent and can only be done properly
 |  by the system itself.
 |  
 |  Another kind of translation is done when the control key is pressed:
 |  for example, for CTRL-A key press the key down event still carries the
 |  same key code 'A' as usual but the char event will have key code of 1,
 |  the ASCII value of this key combination.
 |  
 |  You may discover how the other keys on your system behave
 |  interactively by running the KeyEvents sample in the wxPython demo and
 |  pressing some keys while the blue box at the top has the keyboard
 |  focus.
 |  
 |  **Note**: If a key down event is caught and the event handler does not
 |  call event.Skip() then the coresponding char event will not
 |  happen. This is by design and enables the programs that handle both
 |  types of events to be a bit simpler.
 |  
 |  **Note for Windows programmers**: The key and char events in wxWidgets
 |  are similar to but slightly different from Windows WM_KEYDOWN and
 |  WM_CHAR events. In particular, Alt-x combination will generate a char
 |  event in wxWidgets (unless it is used as an accelerator).
 |  
 |  **Tip**: be sure to call event.Skip() for events that you don't
 |  process in key event function, otherwise menu shortcuts may cease to
 |  work under Windows.
 |  
 |  Method resolution order:
 |      KeyEvent
 |      Event
 |      Object
 |      KeyboardState
 |      __builtin__.object
 |  
 |  Methods defined here:
 |  
 |  DoAllowNextEvent(*args, **kwargs)
 |      DoAllowNextEvent(self)
 |  
 |  GetKeyCode(*args, **kwargs)
 |      GetKeyCode(self) -> int
 |      
 |      Returns the virtual key code. ASCII events return normal ASCII values,
 |      while non-ASCII events return values such as WXK_LEFT for the left
 |      cursor key. See `wx.KeyEvent` for a full list of the virtual key
 |      codes.
 |      
 |      Note that in Unicode build, the returned value is meaningful only if
 |      the user entered a character that can be represented in current
 |      locale's default charset. You can obtain the corresponding Unicode
 |      character using `GetUnicodeKey`.
 |  
 |  GetPosition(*args, **kwargs)
 |      GetPosition(self) -> Point
 |      
 |      Find the position of the event, if applicable.
 |  
 |  GetPositionTuple(*args, **kwargs)
 |      GetPositionTuple() -> (x,y)
 |      
 |      Find the position of the event, if applicable.
 |  
 |  GetRawKeyCode(*args, **kwargs)
 |      GetRawKeyCode(self) -> unsigned int
 |      
 |      Returns the raw key code for this event. This is a platform-dependent
 |      scan code which should only be used in advanced
 |      applications. Currently the raw key codes are not supported by all
 |      ports.
 |  
 |  GetRawKeyFlags(*args, **kwargs)
 |      GetRawKeyFlags(self) -> unsigned int
 |      
 |      Returns the low level key flags for this event. The flags are
 |      platform-dependent and should only be used in advanced applications.
 |      Currently the raw key flags are not supported by all ports.
 |  
 |  GetUniChar = GetUnicodeKey(*args, **kwargs)
 |  
 |  GetUnicodeKey(*args, **kwargs)
 |      GetUnicodeKey(self) -> int
 |      
 |      Returns the Unicode character corresponding to this key event.  This
 |      function is only meaningful in a Unicode build of wxPython.
 |  
 |  GetX(*args, **kwargs)
 |      GetX(self) -> int
 |      
 |      Returns the X position (in client coordinates) of the event, if
 |      applicable.
 |  
 |  GetY(*args, **kwargs)
 |      GetY(self) -> int
 |      
 |      Returns the Y position (in client coordinates) of the event, if
 |      applicable.
 |  
 |  IsKeyInCategory(*args, **kwargs)
 |      IsKeyInCategory(self, int category) -> bool
 |  
 |  IsNextEventAllowed(*args, **kwargs)
 |      IsNextEventAllowed(self) -> bool
 |  
 |  SetUnicodeKey(*args, **kwargs)
 |      SetUnicodeKey(self, int uniChar)
 |      
 |      Set the Unicode value of the key event, but only if this is a Unicode
 |      build of wxPython.
 |  
 |  __init__(self, *args, **kwargs)
 |      __init__(self, EventType eventType=wxEVT_NULL) -> KeyEvent
 |      
 |      Construct a new `wx.KeyEvent`.  Valid event types are:
 |          *
 |  
 |  __repr__ = _swig_repr(self)
 |  
 |  ----------------------------------------------------------------------
 |  Data descriptors defined here:
 |  
 |  KeyCode
 |      See `GetKeyCode`
 |  
 |  Position
 |      See `GetPosition`
 |  
 |  RawKeyCode
 |      See `GetRawKeyCode`
 |  
 |  RawKeyFlags
 |      See `GetRawKeyFlags`
 |  
 |  UnicodeKey
 |      See `GetUnicodeKey` and `SetUnicodeKey`
 |  
 |  X
 |      See `GetX`
 |  
 |  Y
 |      See `GetY`
 |  
 |  m_keyCode
 |  
 |  m_rawCode
 |  
 |  m_rawFlags
 |  
 |  m_x
 |  
 |  m_y
 |  
 |  thisown
 |      The membership flag
 |  
 |  ----------------------------------------------------------------------
 |  Methods inherited from Event:
 |  
 |  Clone(*args, **kwargs)
 |      Clone(self) -> Event
 |  
 |  DidntHonourProcessOnlyIn(*args, **kwargs)
 |      DidntHonourProcessOnlyIn(self)
 |  
 |  GetEventCategory(*args, **kwargs)
 |      GetEventCategory(self) -> int
 |  
 |  GetEventObject(*args, **kwargs)
 |      GetEventObject(self) -> Object
 |      
 |      Returns the object (usually a window) associated with the event, if
 |      any.
 |  
 |  GetEventType(*args, **kwargs)
 |      GetEventType(self) -> EventType
 |      
 |      Returns the identifier of the given event type, such as
 |      ``wxEVT_COMMAND_BUTTON_CLICKED``.
 |  
 |  GetId(*args, **kwargs)
 |      GetId(self) -> int
 |      
 |      Returns the identifier associated with this event, such as a button
 |      command id.
 |  
 |  GetSkipped(*args, **kwargs)
 |      GetSkipped(self) -> bool
 |      
 |      Returns true if the event handler should be skipped, false otherwise.
 |      :see: `Skip`
 |  
 |  GetTimestamp(*args, **kwargs)
 |      GetTimestamp(self) -> long
 |  
 |  IsCommandEvent(*args, **kwargs)
 |      IsCommandEvent(self) -> bool
 |      
 |      Returns true if the event is or is derived from `wx.CommandEvent` else
 |      it returns false. Note: Exists only for optimization purposes.
 |  
 |  ResumePropagation(*args, **kwargs)
 |      ResumePropagation(self, int propagationLevel)
 |      
 |      Resume the event propagation by restoring the propagation level.  (For
 |      example, you can use the value returned by an earlier call to
 |      `StopPropagation`.)
 |  
 |  SetEventObject(*args, **kwargs)
 |      SetEventObject(self, Object obj)
 |      
 |      Sets the originating object, or in other words, obj is normally the
 |      object that is sending the event.
 |  
 |  SetEventType(*args, **kwargs)
 |      SetEventType(self, EventType typ)
 |      
 |      Sets the specific type of the event.
 |  
 |  SetId(*args, **kwargs)
 |      SetId(self, int Id)
 |      
 |      Set's the ID for the event.  This is usually the ID of the window that
 |      is sending the event, but it can also be a command id from a menu
 |      item, etc.
 |  
 |  SetTimestamp(*args, **kwargs)
 |      SetTimestamp(self, long ts=0)
 |  
 |  ShouldProcessOnlyIn(*args, **kwargs)
 |      ShouldProcessOnlyIn(self, EvtHandler h) -> bool
 |  
 |  ShouldPropagate(*args, **kwargs)
 |      ShouldPropagate(self) -> bool
 |      
 |      Test if this event should be propagated to the parent window or not,
 |      i.e. if the propagation level is currently greater than 0.
 |  
 |  Skip(*args, **kwargs)
 |      Skip(self, bool skip=True)
 |      
 |      This method can be used inside an event handler to control whether
 |      further event handlers bound to this event will be called after the
 |      current one returns. Without Skip() (or equivalently if Skip(False) is
 |      used), the event will not be processed any more. If Skip(True) is
 |      called, the event processing system continues searching for a further
 |      handler function for this event, even though it has been processed
 |      already in the current handler.
 |  
 |  StopPropagation(*args, **kwargs)
 |      StopPropagation(self) -> int
 |      
 |      Stop the event from propagating to its parent window.  Returns the old
 |      propagation level value which may be later passed to
 |      `ResumePropagation` to allow propagating the event again.
 |  
 |  WasProcessed(*args, **kwargs)
 |      WasProcessed(self) -> bool
 |  
 |  __del__ lambda self
 |  
 |  ----------------------------------------------------------------------
 |  Data descriptors inherited from Event:
 |  
 |  EventObject
 |      See `GetEventObject` and `SetEventObject`
 |  
 |  EventType
 |      See `GetEventType` and `SetEventType`
 |  
 |  Id
 |      See `GetId` and `SetId`
 |  
 |  Skipped
 |      See `GetSkipped`
 |  
 |  Timestamp
 |      See `GetTimestamp` and `SetTimestamp`
 |  
 |  ----------------------------------------------------------------------
 |  Data and other attributes inherited from Event:
 |  
 |  __swig_destroy__ = <built-in function delete_Event>
 |  
 |  
 |  ----------------------------------------------------------------------
 |  Methods inherited from Object:
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
 |  
 |  ----------------------------------------------------------------------
 |  Methods inherited from KeyboardState:
 |  
 |  AltDown(*args, **kwargs)
 |      AltDown(self) -> bool
 |      
 |      Returns ``True`` if the Alt key was down at the time of the event.
 |  
 |  CmdDown(*args, **kwargs)
 |      CmdDown(self) -> bool
 |      
 |      "Cmd" is a pseudo key which is the same as Control for PC and Unix
 |      platforms but the special "Apple" (a.k.a as "Command") key on
 |      Macs. It makes often sense to use it instead of, say, `ControlDown`
 |      because Cmd key is used for the same thing under Mac as Ctrl
 |      elsewhere. The Ctrl still exists, it's just not used for this
 |      purpose. So for non-Mac platforms this is the same as `ControlDown`
 |      and Macs this is the same as `MetaDown`.
 |  
 |  ControlDown(*args, **kwargs)
 |      ControlDown(self) -> bool
 |      
 |      Returns ``True`` if the Control key was down at the time of the event.
 |  
 |  GetModifiers(*args, **kwargs)
 |      GetModifiers(self) -> int
 |      
 |      Returns a bitmask of the current modifier settings.  Can be used to
 |      check if the key event has exactly the given modifiers without having
 |      to explicitly check that the other modifiers are not down.  For
 |      example::
 |      
 |          if event.GetModifers() == wx.MOD_CONTROL:
 |              DoSomething()
 |  
 |  HasModifiers(*args, **kwargs)
 |      HasModifiers(self) -> bool
 |      
 |      Returns true if either CTRL or ALT keys was down at the time of the
 |      key event. Note that this function does not take into account neither
 |      SHIFT nor META key states (the reason for ignoring the latter is that
 |      it is common for NUMLOCK key to be configured as META under X but the
 |      key presses even while NUMLOCK is on should be still processed
 |      normally).
 |  
 |  MetaDown(*args, **kwargs)
 |      MetaDown(self) -> bool
 |      
 |      Returns ``True`` if the Meta key was down at the time of the event.
 |  
 |  RawControlDown(*args, **kwargs)
 |      RawControlDown(self) -> bool
 |  
 |  SetAltDown(*args, **kwargs)
 |      SetAltDown(self, bool down)
 |  
 |  SetControlDown(*args, **kwargs)
 |      SetControlDown(self, bool down)
 |  
 |  SetMetaDown(*args, **kwargs)
 |      SetMetaDown(self, bool down)
 |  
 |  SetRawControlDown(*args, **kwargs)
 |      SetRawControlDown(self, bool down)
 |  
 |  SetShiftDown(*args, **kwargs)
 |      SetShiftDown(self, bool down)
 |  
 |  ShiftDown(*args, **kwargs)
 |      ShiftDown(self) -> bool
 |      
 |      Returns ``True`` if the Shift key was down at the time of the event.
 |  
 |  ----------------------------------------------------------------------
 |  Data descriptors inherited from KeyboardState:
 |  
 |  Modifiers
 |      See `GetModifiers`
 |  
 |  altDown
 |      AltDown(self) -> bool
 |      
 |      Returns ``True`` if the Alt key was down at the time of the event.
 |  
 |  cmdDown
 |      CmdDown(self) -> bool
 |      
 |      "Cmd" is a pseudo key which is the same as Control for PC and Unix
 |      platforms but the special "Apple" (a.k.a as "Command") key on
 |      Macs. It makes often sense to use it instead of, say, `ControlDown`
 |      because Cmd key is used for the same thing under Mac as Ctrl
 |      elsewhere. The Ctrl still exists, it's just not used for this
 |      purpose. So for non-Mac platforms this is the same as `ControlDown`
 |      and Macs this is the same as `MetaDown`.
 |  
 |  controlDown
 |      ControlDown(self) -> bool
 |      
 |      Returns ``True`` if the Control key was down at the time of the event.
 |  
 |  m_altDown
 |  
 |  m_controlDown
 |  
 |  m_metaDown
 |  
 |  m_shiftDown
 |  
 |  metaDown
 |      MetaDown(self) -> bool
 |      
 |      Returns ``True`` if the Meta key was down at the time of the event.
 |  
 |  rawControlDown
 |      RawControlDown(self) -> bool
 |  
 |  shiftDown
 |      ShiftDown(self) -> bool
 |      
 |      Returns ``True`` if the Shift key was down at the time of the event.

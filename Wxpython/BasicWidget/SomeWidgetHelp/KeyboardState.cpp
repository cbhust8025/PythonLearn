Help on class KeyboardState in module wx._core:

class KeyboardState(__builtin__.object)
 |  wx.KeyboardState stores the state of the keyboard modifier keys
 |  
 |  Methods defined here:
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
 |  __del__ lambda self
 |  
 |  __init__(self, *args, **kwargs)
 |      __init__(self, bool controlDown=False, bool shiftDown=False, bool altDown=False, 
 |          bool metaDown=False) -> KeyboardState
 |      
 |      wx.KeyboardState stores the state of the keyboard modifier keys
 |  
 |  __repr__ = _swig_repr(self)
 |  
 |  ----------------------------------------------------------------------
 |  Data descriptors defined here:
 |  
 |  Modifiers
 |      See `GetModifiers`
 |  
 |  __dict__
 |      dictionary for instance variables (if defined)
 |  
 |  __weakref__
 |      list of weak references to the object (if defined)
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
 |  
 |  thisown
 |      The membership flag
 |  
 |  ----------------------------------------------------------------------
 |  Data and other attributes defined here:
 |  
 |  __swig_destroy__ = <built-in function delete_KeyboardState>

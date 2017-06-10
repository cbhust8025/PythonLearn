Help on class CommandEvent in module wx._core:

class CommandEvent(Event)
 |  This event class contains information about command events, which
 |  originate from a variety of simple controls, as well as menus and
 |  toolbars.
 |  
 |  Method resolution order:
 |      CommandEvent
 |      Event
 |      Object
 |      __builtin__.object
 |  
 |  Methods defined here:
 |  
 |  Checked = IsChecked(*args, **kwargs)
 |  
 |  Clone(*args, **kwargs)
 |      Clone(self) -> Event
 |  
 |  GetClientData(*args, **kwargs)
 |      GetClientData(self) -> PyObject
 |      
 |      Returns the client data object for a listbox or choice selection event, (if any.)
 |  
 |  GetClientObject = GetClientData(*args, **kwargs)
 |  
 |  GetExtraLong(*args, **kwargs)
 |      GetExtraLong(self) -> long
 |      
 |      Returns extra information dependant on the event objects type. If the
 |      event comes from a listbox selection, it is a boolean determining
 |      whether the event was a selection (true) or a deselection (false). A
 |      listbox deselection only occurs for multiple-selection boxes, and in
 |      this case the index and string values are indeterminate and the
 |      listbox must be examined by the application.
 |  
 |  GetInt(*args, **kwargs)
 |      GetInt(self) -> int
 |      
 |      Returns the integer identifier corresponding to a listbox, choice or
 |      radiobox selection (only if the event was a selection, not a
 |      deselection), or a boolean value representing the value of a checkbox.
 |  
 |  GetSelection(*args, **kwargs)
 |      GetSelection(self) -> int
 |      
 |      Returns item index for a listbox or choice selection event (not valid
 |      for a deselection).
 |  
 |  GetString(*args, **kwargs)
 |      GetString(self) -> String
 |      
 |      Returns item string for a listbox or choice selection event (not valid
 |      for a deselection).
 |  
 |  IsChecked(*args, **kwargs)
 |      IsChecked(self) -> bool
 |      
 |      This method can be used with checkbox and menu events: for the
 |      checkboxes, the method returns true for a selection event and false
 |      for a deselection one. For the menu events, this method indicates if
 |      the menu item just has become checked or unchecked (and thus only
 |      makes sense for checkable menu items).
 |  
 |  IsSelection(*args, **kwargs)
 |      IsSelection(self) -> bool
 |      
 |      For a listbox or similar event, returns true if it is a selection,
 |      false if it is a deselection.
 |  
 |  SetClientData(*args, **kwargs)
 |      SetClientData(self, PyObject clientData)
 |      
 |      Associate the given client data with the item at position n.
 |  
 |  SetClientObject = SetClientData(*args, **kwargs)
 |  
 |  SetExtraLong(*args, **kwargs)
 |      SetExtraLong(self, long extraLong)
 |  
 |  SetInt(*args, **kwargs)
 |      SetInt(self, int i)
 |  
 |  SetString(*args, **kwargs)
 |      SetString(self, String s)
 |  
 |  __init__(self, *args, **kwargs)
 |      __init__(self, EventType commandType=wxEVT_NULL, int winid=0) -> CommandEvent
 |      
 |      This event class contains information about command events, which
 |      originate from a variety of simple controls, as well as menus and
 |      toolbars.
 |  
 |  __repr__ = _swig_repr(self)
 |  
 |  ----------------------------------------------------------------------
 |  Data descriptors defined here:
 |  
 |  ClientData
 |      See `GetClientData` and `SetClientData`
 |  
 |  ClientObject
 |      See `GetClientObject` and `SetClientObject`
 |  
 |  ExtraLong
 |      See `GetExtraLong` and `SetExtraLong`
 |  
 |  Int
 |      See `GetInt` and `SetInt`
 |  
 |  Selection
 |      See `GetSelection`
 |  
 |  String
 |      See `GetString` and `SetString`
 |  
 |  thisown
 |      The membership flag
 |  
 |  ----------------------------------------------------------------------
 |  Methods inherited from Event:
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

None
[Finished in 0.3s]

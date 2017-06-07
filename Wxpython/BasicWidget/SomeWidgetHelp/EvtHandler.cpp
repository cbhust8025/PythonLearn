Help on class EvtHandler in module wx._core:

class EvtHandler(Object)
 |  Proxy of C++ EvtHandler class
 |  
 |  Method resolution order:
 |      EvtHandler
 |      Object
 |      __builtin__.object
 |  
 |  Methods defined here:
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
 |  __init__(self, *args, **kwargs)
 |      __init__(self) -> EvtHandler
 |  
 |  __repr__ = _swig_repr(self)
 |  
 |  ----------------------------------------------------------------------
 |  Data descriptors defined here:
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
 |  thisown
 |      The membership flag
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

// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `Mp3Player.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <Mp3Player.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace
{

const ::std::string __Mp3Player__Manage__addFile_name = "addFile";

const ::std::string __Mp3Player__Manage__removeFile_name = "removeFile";

const ::std::string __Mp3Player__Manage__getFilesList_name = "getFilesList";

const ::std::string __Mp3Player__Manage__findByName_name = "findByName";

}
::IceProxy::Ice::Object* ::IceProxy::Mp3Player::upCast(::IceProxy::Mp3Player::Manage* p) { return p; }

void
::IceProxy::Mp3Player::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Mp3Player::Manage>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Mp3Player::Manage;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::Mp3Player::Manage::addFile(const ::std::string& name, ::Ice::Int offset, const ::Mp3Player::byteArray& bytes, ::Ice::Int size, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Mp3Player__Manage__addFile_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Mp3Player::Manage* __del = dynamic_cast< ::IceDelegate::Mp3Player::Manage*>(__delBase.get());
            __del->addFile(name, offset, bytes, size, __ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Mp3Player::Manage::begin_addFile(const ::std::string& name, ::Ice::Int offset, const ::Mp3Player::byteArray& bytes, ::Ice::Int size, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Mp3Player__Manage__addFile_name, __del, __cookie);
    try
    {
        __result->__prepare(__Mp3Player__Manage__addFile_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(name);
        __os->write(offset);
        __os->write(bytes);
        __os->write(size);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::Mp3Player::Manage::end_addFile(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Mp3Player__Manage__addFile_name);
}

void
IceProxy::Mp3Player::Manage::removeFile(const ::std::string& name, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Mp3Player__Manage__removeFile_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Mp3Player::Manage* __del = dynamic_cast< ::IceDelegate::Mp3Player::Manage*>(__delBase.get());
            __del->removeFile(name, __ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Mp3Player::Manage::begin_removeFile(const ::std::string& name, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Mp3Player__Manage__removeFile_name, __del, __cookie);
    try
    {
        __result->__prepare(__Mp3Player__Manage__removeFile_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(name);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::Mp3Player::Manage::end_removeFile(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Mp3Player__Manage__removeFile_name);
}

::Mp3Player::stringArray
IceProxy::Mp3Player::Manage::getFilesList(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Mp3Player__Manage__getFilesList_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__Mp3Player__Manage__getFilesList_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Mp3Player::Manage* __del = dynamic_cast< ::IceDelegate::Mp3Player::Manage*>(__delBase.get());
            return __del->getFilesList(__ctx, __observer);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Mp3Player::Manage::begin_getFilesList(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Mp3Player__Manage__getFilesList_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Mp3Player__Manage__getFilesList_name, __del, __cookie);
    try
    {
        __result->__prepare(__Mp3Player__Manage__getFilesList_name, ::Ice::Normal, __ctx);
        __result->__writeEmptyParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::Mp3Player::stringArray
IceProxy::Mp3Player::Manage::end_getFilesList(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Mp3Player__Manage__getFilesList_name);
    ::Mp3Player::stringArray __ret;
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(__ret);
        __result->__endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

::Mp3Player::stringArray
IceProxy::Mp3Player::Manage::findByName(const ::std::string& name, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Mp3Player__Manage__findByName_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__Mp3Player__Manage__findByName_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Mp3Player::Manage* __del = dynamic_cast< ::IceDelegate::Mp3Player::Manage*>(__delBase.get());
            return __del->findByName(name, __ctx, __observer);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Mp3Player::Manage::begin_findByName(const ::std::string& name, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Mp3Player__Manage__findByName_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Mp3Player__Manage__findByName_name, __del, __cookie);
    try
    {
        __result->__prepare(__Mp3Player__Manage__findByName_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(name);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::Mp3Player::stringArray
IceProxy::Mp3Player::Manage::end_findByName(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Mp3Player__Manage__findByName_name);
    ::Mp3Player::stringArray __ret;
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(__ret);
        __result->__endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

const ::std::string&
IceProxy::Mp3Player::Manage::ice_staticId()
{
    return ::Mp3Player::Manage::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Mp3Player::Manage::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Mp3Player::Manage);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Mp3Player::Manage::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Mp3Player::Manage);
}

::IceProxy::Ice::Object*
IceProxy::Mp3Player::Manage::__newInstance() const
{
    return new Manage;
}

void
IceDelegateM::Mp3Player::Manage::addFile(const ::std::string& name, ::Ice::Int offset, const ::Mp3Player::byteArray& bytes, ::Ice::Int size, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Mp3Player__Manage__addFile_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(name);
        __os->write(offset);
        __os->write(bytes);
        __os->write(size);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::Mp3Player::Manage::removeFile(const ::std::string& name, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Mp3Player__Manage__removeFile_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(name);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::Mp3Player::stringArray
IceDelegateM::Mp3Player::Manage::getFilesList(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Mp3Player__Manage__getFilesList_name, ::Ice::Normal, __context, __observer);
    __og.writeEmptyParams();
    bool __ok = __og.invoke();
    ::Mp3Player::stringArray __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(__ret);
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Mp3Player::stringArray
IceDelegateM::Mp3Player::Manage::findByName(const ::std::string& name, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Mp3Player__Manage__findByName_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(name);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Mp3Player::stringArray __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(__ret);
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateD::Mp3Player::Manage::addFile(const ::std::string& name, ::Ice::Int offset, const ::Mp3Player::byteArray& bytes, ::Ice::Int size, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& __p_name, ::Ice::Int __p_offset, const ::Mp3Player::byteArray& __p_bytes, ::Ice::Int __p_size, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_name(__p_name),
            _m_offset(__p_offset),
            _m_bytes(__p_bytes),
            _m_size(__p_size)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Mp3Player::Manage* servant = dynamic_cast< ::Mp3Player::Manage*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->addFile(_m_name, _m_offset, _m_bytes, _m_size, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_name;
        ::Ice::Int _m_offset;
        const ::Mp3Player::byteArray& _m_bytes;
        ::Ice::Int _m_size;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Mp3Player__Manage__addFile_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(name, offset, bytes, size, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::Mp3Player::Manage::removeFile(const ::std::string& name, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& __p_name, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_name(__p_name)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Mp3Player::Manage* servant = dynamic_cast< ::Mp3Player::Manage*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeFile(_m_name, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_name;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Mp3Player__Manage__removeFile_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(name, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::Mp3Player::stringArray
IceDelegateD::Mp3Player::Manage::getFilesList(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Mp3Player::stringArray& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Mp3Player::Manage* servant = dynamic_cast< ::Mp3Player::Manage*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getFilesList(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Mp3Player::stringArray& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Mp3Player__Manage__getFilesList_name, ::Ice::Normal, __context);
    ::Mp3Player::stringArray __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Mp3Player::stringArray
IceDelegateD::Mp3Player::Manage::findByName(const ::std::string& name, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Mp3Player::stringArray& __result, const ::std::string& __p_name, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_name(__p_name)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Mp3Player::Manage* servant = dynamic_cast< ::Mp3Player::Manage*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->findByName(_m_name, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Mp3Player::stringArray& _result;
        const ::std::string& _m_name;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Mp3Player__Manage__findByName_name, ::Ice::Normal, __context);
    ::Mp3Player::stringArray __result;
    try
    {
        _DirectI __direct(__result, name, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Object* Mp3Player::upCast(::Mp3Player::Manage* p) { return p; }

namespace
{
const ::std::string __Mp3Player__Manage_ids[2] =
{
    "::Ice::Object",
    "::Mp3Player::Manage"
};

}

bool
Mp3Player::Manage::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Mp3Player__Manage_ids, __Mp3Player__Manage_ids + 2, _s);
}

::std::vector< ::std::string>
Mp3Player::Manage::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Mp3Player__Manage_ids[0], &__Mp3Player__Manage_ids[2]);
}

const ::std::string&
Mp3Player::Manage::ice_id(const ::Ice::Current&) const
{
    return __Mp3Player__Manage_ids[1];
}

const ::std::string&
Mp3Player::Manage::ice_staticId()
{
    return __Mp3Player__Manage_ids[1];
}

::Ice::DispatchStatus
Mp3Player::Manage::___addFile(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string name;
    ::Ice::Int offset;
    ::Mp3Player::byteArray bytes;
    ::Ice::Int size;
    __is->read(name);
    __is->read(offset);
    __is->read(bytes);
    __is->read(size);
    __inS.endReadParams();
    addFile(name, offset, bytes, size, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Mp3Player::Manage::___removeFile(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string name;
    __is->read(name);
    __inS.endReadParams();
    removeFile(name, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Mp3Player::Manage::___getFilesList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    ::Mp3Player::stringArray __ret = getFilesList(__current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(__ret);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Mp3Player::Manage::___findByName(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string name;
    __is->read(name);
    __inS.endReadParams();
    ::Mp3Player::stringArray __ret = findByName(name, __current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(__ret);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Mp3Player__Manage_all[] =
{
    "addFile",
    "findByName",
    "getFilesList",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "removeFile"
};

}

::Ice::DispatchStatus
Mp3Player::Manage::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Mp3Player__Manage_all, __Mp3Player__Manage_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Mp3Player__Manage_all)
    {
        case 0:
        {
            return ___addFile(in, current);
        }
        case 1:
        {
            return ___findByName(in, current);
        }
        case 2:
        {
            return ___getFilesList(in, current);
        }
        case 3:
        {
            return ___ice_id(in, current);
        }
        case 4:
        {
            return ___ice_ids(in, current);
        }
        case 5:
        {
            return ___ice_isA(in, current);
        }
        case 6:
        {
            return ___ice_ping(in, current);
        }
        case 7:
        {
            return ___removeFile(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Mp3Player::Manage::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Mp3Player::Manage::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
Mp3Player::__patch(ManagePtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Mp3Player::ManagePtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Mp3Player::Manage::ice_staticId(), v);
    }
}

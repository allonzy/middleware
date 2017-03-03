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

package Mp3Player;

public final class ManagePrxHelper extends Ice.ObjectPrxHelperBase implements ManagePrx
{
    private static final String __addFile_name = "addFile";

    public void addFile(String name, int offset, byte[] bytes, int size)
    {
        addFile(name, offset, bytes, size, null, false);
    }

    public void addFile(String name, int offset, byte[] bytes, int size, java.util.Map<String, String> __ctx)
    {
        addFile(name, offset, bytes, size, __ctx, true);
    }

    private void addFile(String name, int offset, byte[] bytes, int size, java.util.Map<String, String> __ctx, boolean __explicitCtx)
    {
        if(__explicitCtx && __ctx == null)
        {
            __ctx = _emptyContext;
        }
        final Ice.Instrumentation.InvocationObserver __observer = IceInternal.ObserverHelper.get(this, "addFile", __ctx);
        int __cnt = 0;
        try
        {
            while(true)
            {
                Ice._ObjectDel __delBase = null;
                try
                {
                    __delBase = __getDelegate(false);
                    _ManageDel __del = (_ManageDel)__delBase;
                    __del.addFile(name, offset, bytes, size, __ctx, __observer);
                    return;
                }
                catch(IceInternal.LocalExceptionWrapper __ex)
                {
                    __handleExceptionWrapper(__delBase, __ex, __observer);
                }
                catch(Ice.LocalException __ex)
                {
                    __cnt = __handleException(__delBase, __ex, null, __cnt, __observer);
                }
            }
        }
        finally
        {
            if(__observer != null)
            {
                __observer.detach();
            }
        }
    }

    public Ice.AsyncResult begin_addFile(String name, int offset, byte[] bytes, int size)
    {
        return begin_addFile(name, offset, bytes, size, null, false, null);
    }

    public Ice.AsyncResult begin_addFile(String name, int offset, byte[] bytes, int size, java.util.Map<String, String> __ctx)
    {
        return begin_addFile(name, offset, bytes, size, __ctx, true, null);
    }

    public Ice.AsyncResult begin_addFile(String name, int offset, byte[] bytes, int size, Ice.Callback __cb)
    {
        return begin_addFile(name, offset, bytes, size, null, false, __cb);
    }

    public Ice.AsyncResult begin_addFile(String name, int offset, byte[] bytes, int size, java.util.Map<String, String> __ctx, Ice.Callback __cb)
    {
        return begin_addFile(name, offset, bytes, size, __ctx, true, __cb);
    }

    public Ice.AsyncResult begin_addFile(String name, int offset, byte[] bytes, int size, Callback_Manage_addFile __cb)
    {
        return begin_addFile(name, offset, bytes, size, null, false, __cb);
    }

    public Ice.AsyncResult begin_addFile(String name, int offset, byte[] bytes, int size, java.util.Map<String, String> __ctx, Callback_Manage_addFile __cb)
    {
        return begin_addFile(name, offset, bytes, size, __ctx, true, __cb);
    }

    private Ice.AsyncResult begin_addFile(String name, int offset, byte[] bytes, int size, java.util.Map<String, String> __ctx, boolean __explicitCtx, IceInternal.CallbackBase __cb)
    {
        IceInternal.OutgoingAsync __result = new IceInternal.OutgoingAsync(this, __addFile_name, __cb);
        try
        {
            __result.__prepare(__addFile_name, Ice.OperationMode.Normal, __ctx, __explicitCtx);
            IceInternal.BasicStream __os = __result.__startWriteParams(Ice.FormatType.DefaultFormat);
            __os.writeString(name);
            __os.writeInt(offset);
            byteArrayHelper.write(__os, bytes);
            __os.writeInt(size);
            __result.__endWriteParams();
            __result.__send(true);
        }
        catch(Ice.LocalException __ex)
        {
            __result.__exceptionAsync(__ex);
        }
        return __result;
    }

    public void end_addFile(Ice.AsyncResult __result)
    {
        __end(__result, __addFile_name);
    }

    private static final String __findByName_name = "findByName";

    public String[] findByName(String name)
    {
        return findByName(name, null, false);
    }

    public String[] findByName(String name, java.util.Map<String, String> __ctx)
    {
        return findByName(name, __ctx, true);
    }

    private String[] findByName(String name, java.util.Map<String, String> __ctx, boolean __explicitCtx)
    {
        if(__explicitCtx && __ctx == null)
        {
            __ctx = _emptyContext;
        }
        final Ice.Instrumentation.InvocationObserver __observer = IceInternal.ObserverHelper.get(this, "findByName", __ctx);
        int __cnt = 0;
        try
        {
            while(true)
            {
                Ice._ObjectDel __delBase = null;
                try
                {
                    __checkTwowayOnly("findByName");
                    __delBase = __getDelegate(false);
                    _ManageDel __del = (_ManageDel)__delBase;
                    return __del.findByName(name, __ctx, __observer);
                }
                catch(IceInternal.LocalExceptionWrapper __ex)
                {
                    __handleExceptionWrapper(__delBase, __ex, __observer);
                }
                catch(Ice.LocalException __ex)
                {
                    __cnt = __handleException(__delBase, __ex, null, __cnt, __observer);
                }
            }
        }
        finally
        {
            if(__observer != null)
            {
                __observer.detach();
            }
        }
    }

    public Ice.AsyncResult begin_findByName(String name)
    {
        return begin_findByName(name, null, false, null);
    }

    public Ice.AsyncResult begin_findByName(String name, java.util.Map<String, String> __ctx)
    {
        return begin_findByName(name, __ctx, true, null);
    }

    public Ice.AsyncResult begin_findByName(String name, Ice.Callback __cb)
    {
        return begin_findByName(name, null, false, __cb);
    }

    public Ice.AsyncResult begin_findByName(String name, java.util.Map<String, String> __ctx, Ice.Callback __cb)
    {
        return begin_findByName(name, __ctx, true, __cb);
    }

    public Ice.AsyncResult begin_findByName(String name, Callback_Manage_findByName __cb)
    {
        return begin_findByName(name, null, false, __cb);
    }

    public Ice.AsyncResult begin_findByName(String name, java.util.Map<String, String> __ctx, Callback_Manage_findByName __cb)
    {
        return begin_findByName(name, __ctx, true, __cb);
    }

    private Ice.AsyncResult begin_findByName(String name, java.util.Map<String, String> __ctx, boolean __explicitCtx, IceInternal.CallbackBase __cb)
    {
        __checkAsyncTwowayOnly(__findByName_name);
        IceInternal.OutgoingAsync __result = new IceInternal.OutgoingAsync(this, __findByName_name, __cb);
        try
        {
            __result.__prepare(__findByName_name, Ice.OperationMode.Normal, __ctx, __explicitCtx);
            IceInternal.BasicStream __os = __result.__startWriteParams(Ice.FormatType.DefaultFormat);
            __os.writeString(name);
            __result.__endWriteParams();
            __result.__send(true);
        }
        catch(Ice.LocalException __ex)
        {
            __result.__exceptionAsync(__ex);
        }
        return __result;
    }

    public String[] end_findByName(Ice.AsyncResult __result)
    {
        Ice.AsyncResult.__check(__result, this, __findByName_name);
        boolean __ok = __result.__wait();
        try
        {
            if(!__ok)
            {
                try
                {
                    __result.__throwUserException();
                }
                catch(Ice.UserException __ex)
                {
                    throw new Ice.UnknownUserException(__ex.ice_name(), __ex);
                }
            }
            IceInternal.BasicStream __is = __result.__startReadParams();
            String[] __ret;
            __ret = stringArrayHelper.read(__is);
            __result.__endReadParams();
            return __ret;
        }
        catch(Ice.LocalException ex)
        {
            Ice.Instrumentation.InvocationObserver __obsv = __result.__getObserver();
            if(__obsv != null)
            {
                __obsv.failed(ex.ice_name());
            }
            throw ex;
        }
    }

    private static final String __getFilesList_name = "getFilesList";

    public String[] getFilesList()
    {
        return getFilesList(null, false);
    }

    public String[] getFilesList(java.util.Map<String, String> __ctx)
    {
        return getFilesList(__ctx, true);
    }

    private String[] getFilesList(java.util.Map<String, String> __ctx, boolean __explicitCtx)
    {
        if(__explicitCtx && __ctx == null)
        {
            __ctx = _emptyContext;
        }
        final Ice.Instrumentation.InvocationObserver __observer = IceInternal.ObserverHelper.get(this, "getFilesList", __ctx);
        int __cnt = 0;
        try
        {
            while(true)
            {
                Ice._ObjectDel __delBase = null;
                try
                {
                    __checkTwowayOnly("getFilesList");
                    __delBase = __getDelegate(false);
                    _ManageDel __del = (_ManageDel)__delBase;
                    return __del.getFilesList(__ctx, __observer);
                }
                catch(IceInternal.LocalExceptionWrapper __ex)
                {
                    __handleExceptionWrapper(__delBase, __ex, __observer);
                }
                catch(Ice.LocalException __ex)
                {
                    __cnt = __handleException(__delBase, __ex, null, __cnt, __observer);
                }
            }
        }
        finally
        {
            if(__observer != null)
            {
                __observer.detach();
            }
        }
    }

    public Ice.AsyncResult begin_getFilesList()
    {
        return begin_getFilesList(null, false, null);
    }

    public Ice.AsyncResult begin_getFilesList(java.util.Map<String, String> __ctx)
    {
        return begin_getFilesList(__ctx, true, null);
    }

    public Ice.AsyncResult begin_getFilesList(Ice.Callback __cb)
    {
        return begin_getFilesList(null, false, __cb);
    }

    public Ice.AsyncResult begin_getFilesList(java.util.Map<String, String> __ctx, Ice.Callback __cb)
    {
        return begin_getFilesList(__ctx, true, __cb);
    }

    public Ice.AsyncResult begin_getFilesList(Callback_Manage_getFilesList __cb)
    {
        return begin_getFilesList(null, false, __cb);
    }

    public Ice.AsyncResult begin_getFilesList(java.util.Map<String, String> __ctx, Callback_Manage_getFilesList __cb)
    {
        return begin_getFilesList(__ctx, true, __cb);
    }

    private Ice.AsyncResult begin_getFilesList(java.util.Map<String, String> __ctx, boolean __explicitCtx, IceInternal.CallbackBase __cb)
    {
        __checkAsyncTwowayOnly(__getFilesList_name);
        IceInternal.OutgoingAsync __result = new IceInternal.OutgoingAsync(this, __getFilesList_name, __cb);
        try
        {
            __result.__prepare(__getFilesList_name, Ice.OperationMode.Normal, __ctx, __explicitCtx);
            __result.__writeEmptyParams();
            __result.__send(true);
        }
        catch(Ice.LocalException __ex)
        {
            __result.__exceptionAsync(__ex);
        }
        return __result;
    }

    public String[] end_getFilesList(Ice.AsyncResult __result)
    {
        Ice.AsyncResult.__check(__result, this, __getFilesList_name);
        boolean __ok = __result.__wait();
        try
        {
            if(!__ok)
            {
                try
                {
                    __result.__throwUserException();
                }
                catch(Ice.UserException __ex)
                {
                    throw new Ice.UnknownUserException(__ex.ice_name(), __ex);
                }
            }
            IceInternal.BasicStream __is = __result.__startReadParams();
            String[] __ret;
            __ret = stringArrayHelper.read(__is);
            __result.__endReadParams();
            return __ret;
        }
        catch(Ice.LocalException ex)
        {
            Ice.Instrumentation.InvocationObserver __obsv = __result.__getObserver();
            if(__obsv != null)
            {
                __obsv.failed(ex.ice_name());
            }
            throw ex;
        }
    }

    private static final String __removeFile_name = "removeFile";

    public void removeFile(String name)
    {
        removeFile(name, null, false);
    }

    public void removeFile(String name, java.util.Map<String, String> __ctx)
    {
        removeFile(name, __ctx, true);
    }

    private void removeFile(String name, java.util.Map<String, String> __ctx, boolean __explicitCtx)
    {
        if(__explicitCtx && __ctx == null)
        {
            __ctx = _emptyContext;
        }
        final Ice.Instrumentation.InvocationObserver __observer = IceInternal.ObserverHelper.get(this, "removeFile", __ctx);
        int __cnt = 0;
        try
        {
            while(true)
            {
                Ice._ObjectDel __delBase = null;
                try
                {
                    __delBase = __getDelegate(false);
                    _ManageDel __del = (_ManageDel)__delBase;
                    __del.removeFile(name, __ctx, __observer);
                    return;
                }
                catch(IceInternal.LocalExceptionWrapper __ex)
                {
                    __handleExceptionWrapper(__delBase, __ex, __observer);
                }
                catch(Ice.LocalException __ex)
                {
                    __cnt = __handleException(__delBase, __ex, null, __cnt, __observer);
                }
            }
        }
        finally
        {
            if(__observer != null)
            {
                __observer.detach();
            }
        }
    }

    public Ice.AsyncResult begin_removeFile(String name)
    {
        return begin_removeFile(name, null, false, null);
    }

    public Ice.AsyncResult begin_removeFile(String name, java.util.Map<String, String> __ctx)
    {
        return begin_removeFile(name, __ctx, true, null);
    }

    public Ice.AsyncResult begin_removeFile(String name, Ice.Callback __cb)
    {
        return begin_removeFile(name, null, false, __cb);
    }

    public Ice.AsyncResult begin_removeFile(String name, java.util.Map<String, String> __ctx, Ice.Callback __cb)
    {
        return begin_removeFile(name, __ctx, true, __cb);
    }

    public Ice.AsyncResult begin_removeFile(String name, Callback_Manage_removeFile __cb)
    {
        return begin_removeFile(name, null, false, __cb);
    }

    public Ice.AsyncResult begin_removeFile(String name, java.util.Map<String, String> __ctx, Callback_Manage_removeFile __cb)
    {
        return begin_removeFile(name, __ctx, true, __cb);
    }

    private Ice.AsyncResult begin_removeFile(String name, java.util.Map<String, String> __ctx, boolean __explicitCtx, IceInternal.CallbackBase __cb)
    {
        IceInternal.OutgoingAsync __result = new IceInternal.OutgoingAsync(this, __removeFile_name, __cb);
        try
        {
            __result.__prepare(__removeFile_name, Ice.OperationMode.Normal, __ctx, __explicitCtx);
            IceInternal.BasicStream __os = __result.__startWriteParams(Ice.FormatType.DefaultFormat);
            __os.writeString(name);
            __result.__endWriteParams();
            __result.__send(true);
        }
        catch(Ice.LocalException __ex)
        {
            __result.__exceptionAsync(__ex);
        }
        return __result;
    }

    public void end_removeFile(Ice.AsyncResult __result)
    {
        __end(__result, __removeFile_name);
    }

    public static ManagePrx checkedCast(Ice.ObjectPrx __obj)
    {
        ManagePrx __d = null;
        if(__obj != null)
        {
            if(__obj instanceof ManagePrx)
            {
                __d = (ManagePrx)__obj;
            }
            else
            {
                if(__obj.ice_isA(ice_staticId()))
                {
                    ManagePrxHelper __h = new ManagePrxHelper();
                    __h.__copyFrom(__obj);
                    __d = __h;
                }
            }
        }
        return __d;
    }

    public static ManagePrx checkedCast(Ice.ObjectPrx __obj, java.util.Map<String, String> __ctx)
    {
        ManagePrx __d = null;
        if(__obj != null)
        {
            if(__obj instanceof ManagePrx)
            {
                __d = (ManagePrx)__obj;
            }
            else
            {
                if(__obj.ice_isA(ice_staticId(), __ctx))
                {
                    ManagePrxHelper __h = new ManagePrxHelper();
                    __h.__copyFrom(__obj);
                    __d = __h;
                }
            }
        }
        return __d;
    }

    public static ManagePrx checkedCast(Ice.ObjectPrx __obj, String __facet)
    {
        ManagePrx __d = null;
        if(__obj != null)
        {
            Ice.ObjectPrx __bb = __obj.ice_facet(__facet);
            try
            {
                if(__bb.ice_isA(ice_staticId()))
                {
                    ManagePrxHelper __h = new ManagePrxHelper();
                    __h.__copyFrom(__bb);
                    __d = __h;
                }
            }
            catch(Ice.FacetNotExistException ex)
            {
            }
        }
        return __d;
    }

    public static ManagePrx checkedCast(Ice.ObjectPrx __obj, String __facet, java.util.Map<String, String> __ctx)
    {
        ManagePrx __d = null;
        if(__obj != null)
        {
            Ice.ObjectPrx __bb = __obj.ice_facet(__facet);
            try
            {
                if(__bb.ice_isA(ice_staticId(), __ctx))
                {
                    ManagePrxHelper __h = new ManagePrxHelper();
                    __h.__copyFrom(__bb);
                    __d = __h;
                }
            }
            catch(Ice.FacetNotExistException ex)
            {
            }
        }
        return __d;
    }

    public static ManagePrx uncheckedCast(Ice.ObjectPrx __obj)
    {
        ManagePrx __d = null;
        if(__obj != null)
        {
            if(__obj instanceof ManagePrx)
            {
                __d = (ManagePrx)__obj;
            }
            else
            {
                ManagePrxHelper __h = new ManagePrxHelper();
                __h.__copyFrom(__obj);
                __d = __h;
            }
        }
        return __d;
    }

    public static ManagePrx uncheckedCast(Ice.ObjectPrx __obj, String __facet)
    {
        ManagePrx __d = null;
        if(__obj != null)
        {
            Ice.ObjectPrx __bb = __obj.ice_facet(__facet);
            ManagePrxHelper __h = new ManagePrxHelper();
            __h.__copyFrom(__bb);
            __d = __h;
        }
        return __d;
    }

    public static final String[] __ids =
    {
        "::Ice::Object",
        "::Mp3Player::Manage"
    };

    public static String ice_staticId()
    {
        return __ids[1];
    }

    protected Ice._ObjectDelM __createDelegateM()
    {
        return new _ManageDelM();
    }

    protected Ice._ObjectDelD __createDelegateD()
    {
        return new _ManageDelD();
    }

    public static void __write(IceInternal.BasicStream __os, ManagePrx v)
    {
        __os.writeProxy(v);
    }

    public static ManagePrx __read(IceInternal.BasicStream __is)
    {
        Ice.ObjectPrx proxy = __is.readProxy();
        if(proxy != null)
        {
            ManagePrxHelper result = new ManagePrxHelper();
            result.__copyFrom(proxy);
            return result;
        }
        return null;
    }

    public static final long serialVersionUID = 0L;
}
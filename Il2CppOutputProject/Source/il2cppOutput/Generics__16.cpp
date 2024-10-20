﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Enumerator_tFDD83062A262A5CEB8E1D6AF6D70D5C633288041;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct IEnumerator_1_t74A831196B44E945623D4DFE6157EAB69DA16A05;
struct IEnumerator_1_tFFC0D5DA899224FBB03DA01DBD1716C6FD29C9E0;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IList_1_t09217E1EDF7CCAED72B667F406AAC92AB64B8790;
struct IList_1_t1E95A05AFA88C09BA96A40B431F7D5867BD0D622;
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D;
struct RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669;
struct RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56;
struct ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B;
struct ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470;
struct ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050;
struct ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513;
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8;
struct TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7;
struct TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08;
struct TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689;
struct TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D;
struct NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA;
struct NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D;
struct NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07;
struct TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3;
struct TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB;
struct TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440;
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Exception_t;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA;
struct NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D;
struct NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07;
struct TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3;
struct TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB;
struct TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9;
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440;
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct Enumerator_tFDD83062A262A5CEB8E1D6AF6D70D5C633288041  : public RuntimeObject
{
	ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* ____builder;
	int32_t ____version;
	int32_t ____index;
	RuntimeObject* ____current;
};
struct Enumerator_t80FD5046ECCBFF50D4CD855B7B13C05C89E66E69 : public RuntimeObject {};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7  : public RuntimeObject
{
	NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* ____slots;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____slotMap;
	int32_t ____inUseCount;
	int32_t ____pageId;
	int32_t ____nextFreeSlotLine;
};
struct TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08  : public RuntimeObject
{
	NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* ____slots;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____slotMap;
	int32_t ____inUseCount;
	int32_t ____pageId;
	int32_t ____nextFreeSlotLine;
};
struct TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689  : public RuntimeObject
{
	NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* ____slots;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____slotMap;
	int32_t ____inUseCount;
	int32_t ____pageId;
	int32_t ____nextFreeSlotLine;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 
{
	int32_t ____nodeID;
	int32_t ____mainTreeNodeID;
};
struct NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 
{
	int32_t ____nodeID;
	int32_t ____mainTreeNodeID;
};
struct NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 
{
	int32_t ____nodeID;
	int32_t ____mainTreeNodeID;
};
struct RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115 
{
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ____tree;
	int32_t ____version;
	int32_t ____index;
	int32_t ____mainTreeNodeId;
	int32_t ____current;
};
struct RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A 
{
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ____tree;
	int32_t ____version;
	int32_t ____index;
	int32_t ____mainTreeNodeId;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4;
struct TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D  : public ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92
{
};
struct TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03  : public ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F 
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	RuntimeObject* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct NodeColor_t60CC6B48EF16CC76598762EF71BFEABD73151911 
{
	int32_t ___value__;
};
struct NodeColor_tC8EFC0D9ADE3D859539E5AE7AB7DEFDF7C8332DB 
{
	int32_t ___value__;
};
struct NodeColor_t5D6A7FB1CA13C3C221E75A658354858C04D545BC 
{
	int32_t ___value__;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___U3CTypedValueU3Ek__BackingField;
	bool ___U3CIsFieldU3Ek__BackingField;
	String_t* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_pinvoke
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	char* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_com
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	Il2CppChar* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct RBTreeError_t7F1B2496C83326D0832CBD24FB32282F348CD048 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TreeAccessMethod_t93F641AE9C014E6ABDD0A2B1EA84068077F46CC5 
{
	int32_t ___value__;
};
struct Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 
{
	int32_t ____selfId;
	int32_t ____leftId;
	int32_t ____rightId;
	int32_t ____parentId;
	int32_t ____nextId;
	int32_t ____subTreeSize;
	int32_t ____keyOfNode;
	int32_t ____nodeColor;
};
struct Node_t39E89F54A46CA848B0AED9F5454D71E99D318FDB 
{
	int32_t ____selfId;
	int32_t ____leftId;
	int32_t ____rightId;
	int32_t ____parentId;
	int32_t ____nextId;
	int32_t ____subTreeSize;
	RuntimeObject* ____keyOfNode;
	int32_t ____nodeColor;
};
typedef Il2CppFullySharedGenericStruct Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034;
struct RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D  : public RuntimeObject
{
	TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* ____pageTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____pageTableMap;
	int32_t ____inUsePageCount;
	int32_t ____nextFreePageLine;
	int32_t ___root;
	int32_t ____version;
	int32_t ____inUseNodeCount;
	int32_t ____inUseSatelliteTreeCount;
	int32_t ____accessMethod;
};
struct RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669  : public RuntimeObject
{
	TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* ____pageTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____pageTableMap;
	int32_t ____inUsePageCount;
	int32_t ____nextFreePageLine;
	int32_t ___root;
	int32_t ____version;
	int32_t ____inUseNodeCount;
	int32_t ____inUseSatelliteTreeCount;
	int32_t ____accessMethod;
};
struct RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56  : public RuntimeObject
{
	TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* ____pageTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____pageTableMap;
	int32_t ____inUsePageCount;
	int32_t ____nextFreePageLine;
	int32_t ___root;
	int32_t ____version;
	int32_t ____inUseNodeCount;
	int32_t ____inUseSatelliteTreeCount;
	int32_t ____accessMethod;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3  : public RuntimeArray
{
	ALIGN_FIELD (8) TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* m_Items[1];

	inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 m_Items[1];

	inline Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 value)
	{
		m_Items[index] = value;
	}
};
struct TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB  : public RuntimeArray
{
	ALIGN_FIELD (8) TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* m_Items[1];

	inline TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_t39E89F54A46CA848B0AED9F5454D71E99D318FDB m_Items[1];

	inline Node_t39E89F54A46CA848B0AED9F5454D71E99D318FDB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_t39E89F54A46CA848B0AED9F5454D71E99D318FDB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_t39E89F54A46CA848B0AED9F5454D71E99D318FDB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____keyOfNode), (void*)NULL);
	}
	inline Node_t39E89F54A46CA848B0AED9F5454D71E99D318FDB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_t39E89F54A46CA848B0AED9F5454D71E99D318FDB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_t39E89F54A46CA848B0AED9F5454D71E99D318FDB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____keyOfNode), (void*)NULL);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9  : public RuntimeArray
{
	ALIGN_FIELD (8) TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* m_Items[1];

	inline TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440  : public RuntimeArray
{
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 m_Items[1];

	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CMemberNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____attributeType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____lazyMemberInfo), (void*)NULL);
		#endif
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CMemberNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____attributeType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____lazyMemberInfo), (void*)NULL);
		#endif
	}
};
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B  : public RuntimeArray
{
	ALIGN_FIELD (8) CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F m_Items[1];

	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m328625AEF6FC9DE908D967C4537628D1B2B61700_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m6A133AF17BE38F8B527CD83716760BF90D624007_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m6E21AC6C4E86A24D602CD91F46425928C4ADF82D_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, int32_t ___1_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_Dispose_m1E08AEE7388530D346B9193B730D8B03273BF2A6_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_Successor_m89C5DC61DF69FB7B614F570A01A91F8D4555D74A_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_m76DBA6D87BDD9AE92D0E1B8AA83CBCA809AF2C5E_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_gshared_inline (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mE3D8BAC55EE728E4B5EC5C2CA70730160709EB5A_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m9B4501D17EEC9E2B952126A9678DEEB960C8CA50_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_mC7027B6747A32BD6A978E0DA6DE74FA6DB6AEA5C_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, int32_t ___1_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_gshared_inline (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, bool ___0_allocatedPage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83_gshared (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_PageId_m60FCE18172BAC6C1B1479026018D6422F2B30A70_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIntValueFromBitMap_m48B51C8E9FEE3BC3018EEABB1B7171C27550AF56_gshared (uint32_t ___0_bitMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreePage_AllocSlot_m98CE7C69F3225831EDC1F758AC133AFDBD631329_gshared (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_userIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3_gshared (NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, int32_t ___1_item, bool ___2_append, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_InitTree_mF38DBB7EC2C944A42C6E22B0EE84ABAC77882781_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* RBTree_1_AllocPage_m215B88622A11B25D550D9105F141689D4EB4A839_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_InUseCount_m8E1B3603F6197A4CC81CE5F9FEC441342EA079DD_gshared_inline (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFree_m1D298F02A27F4FBB8095CC09DDC73419066BED45_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* ___0_page, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_PageId_mAB3203DD4C550C1E6CDC4DF4367B61A00DC0A367_gshared_inline (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexOfPageWithFreeSlot_mB207A5B63C61CA6BA078E59E1E995360C81C43E7_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, bool ___0_allocatedPage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePage__ctor_m6DC52E242F1727514B983F48EF264E12E82574EB_gshared (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_PageId_m4637CDAE893DECB44B1201D9DFEF3C18C0DB5257_gshared_inline (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_InUseCount_m51D4FB92286C827692E858691E4E1F47FCBCD2B1_gshared_inline (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreePage_mD851F770281DBDCB21B4DA2CB84909655F0FA687_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* ___0_page, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIntValueFromBitMap_mDB63445CC664F05D6EEF8AB921EE44CD858E8F45_gshared (uint32_t ___0_bitMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreePage_AllocSlot_mEB4D7879BFA8750667B1902CA20FBF28279E1B52_gshared (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Minimum_m04A2B22ED80334294DFDB982AF71368FF96175C1_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_x_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Successor_mBC120AD827A51511A7C816DDE34B411DCB52E9B0_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_x_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetNext_mADA41B6665596F49964D1AC259BC1CAEDEB86AC8_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetKey_mBBCC4BFD81ED932DEF3BAACA07389DAF7017AFF9_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, RuntimeObject* ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetSubTreeSize_m0EBB22E8908E7A97007F5BA1CB2F7BE4ED2AB1FD_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_IncreaseSize_mC7A31D096BC854B6993FED4FE86BE2B2AB33281E_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBInsert_m25C1F9B8FA733750F51C334ED01E4EF680C3EBBC_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetNewNode_mCD240B40D292EF9307F03939556ACA325503DA73_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_LeftRotate_m6FAEDAE5FEA845BB51C6E52F7F3797987043F8A3_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RightRotate_m2A33BBCDE144E00B7E1C6C1A17ECF008E2A5660C_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 RBTree_1_GetNodeByKey_mF3719F0495F9D5A4339890BE2EB8999ACD068EFA_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 RBTree_1_GetNodeByIndex_m948B6DED575DEAF9BC7735B1CD602A208058485C_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_userIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteX_m61010CD7CB4B2C5EA027848024A26D252CCE530C_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RecomputeSize_m5B049EA2694E6343E2D30EDCDB34CC4C44A0FD08_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_DecreaseSize_m63463D3F02F9E581B66DAC4F5311669F2284C603_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteFixup_m7FD4570F1436DF16B372F9317522C5D1CDB8B597_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreeNode_m2284FBA53D1081B794CEC801EE442A646B7C0AA8_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SearchSubTree_m739962F4F45C09FA4CF594B0EBDBE94D778F7549_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, RuntimeObject* ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePath__ctor_m78E9206041A7104A8531998AA3DF9EC7DE5E4A45_gshared (NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNodePath_mA462180E40EFE84991C0B4E4CA85D960D8655784_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexByNode_mBCE98E9CE148E35692561C8E3447BCD0DA72F2F3_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m1305DFA6E20E6D34D7496686C6CFFB676A0265F2_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m1985EC887852D977760416BBE4644EB35499D6E5_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNode_m579F0FCDCC9A79BC70EEE156F07CC896029A410B_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_IndexOf_mC4650C040FAD95BD3F81362BCD765C733564B53E_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_InsertAt_m55077BF0B4CAA5C5ABD5911CCB68C789D7652B4D_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_position, RuntimeObject* ___1_item, bool ___2_append, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTree_1_DeleteByIndex_m77EB3F96268C89DEA1218BA5DB3CB1A8EEC073F6_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_get_Count_m1F1E9F00D8DEEB51D299E897DDAD8F4903E2FA9B_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55_gshared (NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_EnsureCapacity_m076CB69F333012AA70D6FB4A1942229BE3AFDB8A_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_IndexOf_m44F05A371D1726738D08B71DA7A606FE612F7EFF_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_RemoveAt_m2FAB70AED511E20D17EEC01D6092F8998FE3B7B3_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8089D385B6D4EACE459E149D2C7544C017BDC887_gshared (Enumerator_tFDD83062A262A5CEB8E1D6AF6D70D5C633288041* __this, ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* ___0_builder, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_GetEnumerator_m604D81B930A4D7581904C01960981F02807E6840_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_ValidateNullValue_mE96C51B701CAA99735D346A0D421BB01DFED1FCA_gshared (RuntimeObject* ___0_value, String_t* ___1_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Add_m129CC65EBD7CF4155F6DBC3C7BC0A7D8FB17E016_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_get_Count_m712C23152F205989A9FBD883DC268B3DB8B2641C_gshared_inline (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_IsCompatibleObject_m5F313CD5FE4FF765F9A3B2268CA877ADBB7F57BA_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_Contains_m5B14BD16A256ABD0E52AFB4DCAD6C29D55528B51_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Insert_m0D4A6276C5192A71A27A7C93472A88B3CB3831AE_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_Remove_m56D899A4F23BDAA2734238200D06EC8A68F0CE77_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_get_Item_m5D456B9C2FED574195A1CF3AFF1984D3820F7EC5_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_set_Item_mCDB55E21C2461E6FD0E595F49612B0395A412A47_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ReadOnlyCollectionBuilder_1_ToArray_mF1C840CFBB343884E990EF08670781D4D03996B9_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF_gshared (TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_set_Capacity_m37ECBD79FE0E0681FE2996761F5FE3CCAAEDA6E4_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6B6BE788B018E462AB49965C9BF42835AA0F40FE_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC010A5256D19EE219546ED424AE97F0D94A1E97E_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m54E213256F6E5A5649AC292E96F3858D2F3B3AA0_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB23F2D0BBC3186365E72E6FB4BC47AAB1686211B_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB07E1D8A7EE4081EF3A7DBD0369DB07BAB1365B2_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7FE8864771813C869EECD0FC9B3518D2617F47DB_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA2DC89076EDA7FAE081CB1EBB0F544D3E25E992E_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m6FE656D0B1AC159B2743D580A2BE9B8BE8FE9654_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m4FC5EF77143370F6ADA6FCF6F964623DF661D512_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m732D12395A2D23BF37EC63D5E50E0ACFD3060CF5_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m76F2BEE33BE96FF2ACEDFE076FAC30629D35A491_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;

inline void RBTreeEnumerator__ctor_m328625AEF6FC9DE908D967C4537628D1B2B61700 (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, const RuntimeMethod*))RBTreeEnumerator__ctor_m328625AEF6FC9DE908D967C4537628D1B2B61700_gshared)(__this, ___0_tree, method);
}
inline int32_t RBTree_1_ComputeNodeByIndex_m6A133AF17BE38F8B527CD83716760BF90D624007 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t*, const RuntimeMethod*))RBTree_1_ComputeNodeByIndex_m6A133AF17BE38F8B527CD83716760BF90D624007_gshared)(__this, ___0_index, ___1_satelliteRootId, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462 (int32_t ___0_internalError, const RuntimeMethod* method) ;
inline void RBTreeEnumerator__ctor_m6E21AC6C4E86A24D602CD91F46425928C4ADF82D (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, int32_t ___1_position, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTreeEnumerator__ctor_m6E21AC6C4E86A24D602CD91F46425928C4ADF82D_gshared)(__this, ___0_tree, ___1_position, method);
}
inline void RBTreeEnumerator_Dispose_m1E08AEE7388530D346B9193B730D8B03273BF2A6 (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, const RuntimeMethod*))RBTreeEnumerator_Dispose_m1E08AEE7388530D346B9193B730D8B03273BF2A6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1 (const RuntimeMethod* method) ;
inline bool RBTree_1_Successor_m89C5DC61DF69FB7B614F570A01A91F8D4555D74A (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method)
{
	return ((  bool (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t*, int32_t*, const RuntimeMethod*))RBTree_1_Successor_m89C5DC61DF69FB7B614F570A01A91F8D4555D74A_gshared)(__this, ___0_nodeId, ___1_mainTreeNodeId, method);
}
inline RuntimeObject* RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE_gshared)(__this, ___0_nodeId, method);
}
inline bool RBTreeEnumerator_MoveNext_m76DBA6D87BDD9AE92D0E1B8AA83CBCA809AF2C5E (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, const RuntimeMethod*))RBTreeEnumerator_MoveNext_m76DBA6D87BDD9AE92D0E1B8AA83CBCA809AF2C5E_gshared)(__this, method);
}
inline RuntimeObject* RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_inline (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, const RuntimeMethod*))RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_gshared_inline)(__this, method);
}
inline RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mE3D8BAC55EE728E4B5EC5C2CA70730160709EB5A (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mE3D8BAC55EE728E4B5EC5C2CA70730160709EB5A_gshared)(__this, method);
}
inline void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m9B4501D17EEC9E2B952126A9678DEEB960C8CA50 (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_Reset_m9B4501D17EEC9E2B952126A9678DEEB960C8CA50_gshared)(__this, method);
}
inline void RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, const RuntimeMethod*))RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB_gshared)(__this, ___0_tree, method);
}
inline void RBTreeEnumerator__ctor_mC7027B6747A32BD6A978E0DA6DE74FA6DB6AEA5C (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, int32_t ___1_position, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))RBTreeEnumerator__ctor_mC7027B6747A32BD6A978E0DA6DE74FA6DB6AEA5C_gshared)(__this, ___0_tree, ___1_position, method);
}
inline void RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955 (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, const RuntimeMethod*))RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955_gshared)(__this, method);
}
inline bool RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, const RuntimeMethod*))RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E_gshared)(__this, method);
}
inline void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_inline (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_gshared_inline)((RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*)__this, il2cppRetVal, method);
}
inline RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB_gshared)(__this, method);
}
inline void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470 (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, const RuntimeMethod*))RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323_gshared)(__this, method);
}
inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	return ((  TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA_gshared)(__this, ___0_size, method);
}
inline void TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, int32_t, const RuntimeMethod*))TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_gshared_inline)(__this, ___0_value, method);
}
inline void RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, const RuntimeMethod*))RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB_gshared)(__this, ___0_page, method);
}
inline int32_t TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, const RuntimeMethod*))TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_gshared_inline)(__this, method);
}
inline int32_t RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, bool ___0_allocatedPage, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, bool, const RuntimeMethod*))RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA_gshared)(__this, ___0_allocatedPage, method);
}
inline void TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83 (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, int32_t, const RuntimeMethod*))TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83_gshared)(__this, ___0_size, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void TreePage_set_PageId_m60FCE18172BAC6C1B1479026018D6422F2B30A70_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, int32_t, const RuntimeMethod*))TreePage_set_PageId_m60FCE18172BAC6C1B1479026018D6422F2B30A70_gshared_inline)(__this, ___0_value, method);
}
inline int32_t TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, const RuntimeMethod*))TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_gshared_inline)(__this, method);
}
inline void RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, const RuntimeMethod*))RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C_gshared)(__this, ___0_page, method);
}
inline int32_t RBTree_1_GetIntValueFromBitMap_m48B51C8E9FEE3BC3018EEABB1B7171C27550AF56 (uint32_t ___0_bitMap, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint32_t, const RuntimeMethod*))RBTree_1_GetIntValueFromBitMap_m48B51C8E9FEE3BC3018EEABB1B7171C27550AF56_gshared)(___0_bitMap, method);
}
inline int32_t TreePage_AllocSlot_m98CE7C69F3225831EDC1F758AC133AFDBD631329 (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, const RuntimeMethod*))TreePage_AllocSlot_m98CE7C69F3225831EDC1F758AC133AFDBD631329_gshared)(__this, ___0_tree, method);
}
inline int32_t RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844_gshared)(__this, ___0_x_id, method);
}
inline int32_t RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B_gshared)(__this, ___0_x_id, method);
}
inline int32_t RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45_gshared)(__this, ___0_nodeId, ___1_rightNodeId, method);
}
inline void RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9_gshared)(__this, ___0_nodeId, ___1_parentNodeId, method);
}
inline void RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8_gshared)(__this, ___0_nodeId, ___1_nextNodeId, method);
}
inline int32_t RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_key, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9_gshared)(__this, ___0_nodeId, ___1_key, method);
}
inline void RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063_gshared)(__this, ___0_nodeId, ___1_leftNodeId, method);
}
inline int32_t RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55_gshared)(__this, ___0_nodeId, ___1_size, method);
}
inline void RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, int32_t, int32_t, bool, const RuntimeMethod*))RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E_gshared)(__this, ___0_root_id, ___1_x_id, ___2_mainTreeNodeID, ___3_position, ___4_append, method);
}
inline int32_t RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568_gshared)(__this, ___0_key, method);
}
inline int32_t RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371_gshared)(__this, ___0_nodeId, ___1_color, method);
}
inline int32_t RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE_gshared)(__this, ___0_root_id, ___1_x_id, ___2_mainTreeNode, method);
}
inline int32_t RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2_gshared)(__this, ___0_root_id, ___1_x_id, ___2_mainTreeNode, method);
}
inline NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2_gshared)(__this, ___0_key, method);
}
inline NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_userIndex, const RuntimeMethod* method)
{
	return ((  NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8_gshared)(__this, ___0_userIndex, method);
}
inline int32_t RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC_gshared)(__this, ___0_root_id, ___1_z_id, ___2_mainTreeNodeID, method);
}
inline void RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89_gshared)(__this, ___0_root_id, ___1_x_id, ___2_px_id, ___3_mainTreeNodeID, method);
}
inline void RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2_gshared)(__this, ___0_root_id, ___1_key, method);
}
inline void NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3 (NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method)
{
	((  void (*) (NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50*, int32_t, int32_t, const RuntimeMethod*))NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3_gshared)(__this, ___0_nodeID, ___1_mainTreeNodeID, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B (int32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline int32_t RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 ___0_path, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50, const RuntimeMethod*))RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5_gshared)(__this, ___0_path, method);
}
inline int32_t RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064_gshared)(__this, ___0_x_id, ___1_index, method);
}
inline int32_t RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t*, const RuntimeMethod*))RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751_gshared)(__this, ___0_index, ___1_satelliteRootId, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_RowOutOfRange_m2F6883E5D2F9AF63A3F9DC5521799A7E270F1054 (int32_t ___0_index, const RuntimeMethod* method) ;
inline void RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, const RuntimeMethod*))RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E_gshared)(__this, ___0_tree, method);
}
inline int32_t RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_node, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297_gshared)(__this, ___0_node, method);
}
inline int32_t RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74_gshared)(__this, ___0_nodeId, ___1_item, method);
}
inline int32_t RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, int32_t ___1_item, bool ___2_append, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, bool, const RuntimeMethod*))RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F_gshared)(__this, ___0_position, ___1_item, ___2_append, method);
}
inline int32_t RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_i, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6_gshared)(__this, ___0_i, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8 (String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E (String_t* ___0_paramName, const RuntimeMethod* method) ;
inline int32_t RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, const RuntimeMethod*))RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
inline void RBTree_1_InitTree_mF38DBB7EC2C944A42C6E22B0EE84ABAC77882781 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, const RuntimeMethod*))RBTree_1_InitTree_mF38DBB7EC2C944A42C6E22B0EE84ABAC77882781_gshared)(__this, method);
}
inline TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* RBTree_1_AllocPage_m215B88622A11B25D550D9105F141689D4EB4A839 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	return ((  TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_AllocPage_m215B88622A11B25D550D9105F141689D4EB4A839_gshared)(__this, ___0_size, method);
}
inline void TreePage_set_InUseCount_m8E1B3603F6197A4CC81CE5F9FEC441342EA079DD_inline (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*, int32_t, const RuntimeMethod*))TreePage_set_InUseCount_m8E1B3603F6197A4CC81CE5F9FEC441342EA079DD_gshared_inline)(__this, ___0_value, method);
}
inline void RBTree_1_MarkPageFree_m1D298F02A27F4FBB8095CC09DDC73419066BED45 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* ___0_page, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*, const RuntimeMethod*))RBTree_1_MarkPageFree_m1D298F02A27F4FBB8095CC09DDC73419066BED45_gshared)(__this, ___0_page, method);
}
inline int32_t TreePage_get_PageId_mAB3203DD4C550C1E6CDC4DF4367B61A00DC0A367_inline (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*, const RuntimeMethod*))TreePage_get_PageId_mAB3203DD4C550C1E6CDC4DF4367B61A00DC0A367_gshared_inline)(__this, method);
}
inline int32_t RBTree_1_GetIndexOfPageWithFreeSlot_mB207A5B63C61CA6BA078E59E1E995360C81C43E7 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, bool ___0_allocatedPage, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, bool, const RuntimeMethod*))RBTree_1_GetIndexOfPageWithFreeSlot_mB207A5B63C61CA6BA078E59E1E995360C81C43E7_gshared)(__this, ___0_allocatedPage, method);
}
inline void TreePage__ctor_m6DC52E242F1727514B983F48EF264E12E82574EB (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*, int32_t, const RuntimeMethod*))TreePage__ctor_m6DC52E242F1727514B983F48EF264E12E82574EB_gshared)(__this, ___0_size, method);
}
inline void TreePage_set_PageId_m4637CDAE893DECB44B1201D9DFEF3C18C0DB5257_inline (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*, int32_t, const RuntimeMethod*))TreePage_set_PageId_m4637CDAE893DECB44B1201D9DFEF3C18C0DB5257_gshared_inline)(__this, ___0_value, method);
}
inline int32_t TreePage_get_InUseCount_m51D4FB92286C827692E858691E4E1F47FCBCD2B1_inline (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*, const RuntimeMethod*))TreePage_get_InUseCount_m51D4FB92286C827692E858691E4E1F47FCBCD2B1_gshared_inline)(__this, method);
}
inline void RBTree_1_FreePage_mD851F770281DBDCB21B4DA2CB84909655F0FA687 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* ___0_page, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*, const RuntimeMethod*))RBTree_1_FreePage_mD851F770281DBDCB21B4DA2CB84909655F0FA687_gshared)(__this, ___0_page, method);
}
inline int32_t RBTree_1_GetIntValueFromBitMap_mDB63445CC664F05D6EEF8AB921EE44CD858E8F45 (uint32_t ___0_bitMap, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint32_t, const RuntimeMethod*))RBTree_1_GetIntValueFromBitMap_mDB63445CC664F05D6EEF8AB921EE44CD858E8F45_gshared)(___0_bitMap, method);
}
inline int32_t TreePage_AllocSlot_mEB4D7879BFA8750667B1902CA20FBF28279E1B52 (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, const RuntimeMethod*))TreePage_AllocSlot_mEB4D7879BFA8750667B1902CA20FBF28279E1B52_gshared)(__this, ___0_tree, method);
}
inline int32_t RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_Minimum_m04A2B22ED80334294DFDB982AF71368FF96175C1 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_x_id, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_Minimum_m04A2B22ED80334294DFDB982AF71368FF96175C1_gshared)(__this, ___0_x_id, method);
}
inline int32_t RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_Successor_mBC120AD827A51511A7C816DDE34B411DCB52E9B0 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_x_id, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_Successor_mBC120AD827A51511A7C816DDE34B411DCB52E9B0_gshared)(__this, ___0_x_id, method);
}
inline int32_t RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4_gshared)(__this, ___0_nodeId, ___1_rightNodeId, method);
}
inline void RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493_gshared)(__this, ___0_nodeId, ___1_parentNodeId, method);
}
inline void RBTree_1_SetNext_mADA41B6665596F49964D1AC259BC1CAEDEB86AC8 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetNext_mADA41B6665596F49964D1AC259BC1CAEDEB86AC8_gshared)(__this, ___0_nodeId, ___1_nextNodeId, method);
}
inline void RBTree_1_SetKey_mBBCC4BFD81ED932DEF3BAACA07389DAF7017AFF9 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, RuntimeObject* ___1_key, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, RuntimeObject*, const RuntimeMethod*))RBTree_1_SetKey_mBBCC4BFD81ED932DEF3BAACA07389DAF7017AFF9_gshared)(__this, ___0_nodeId, ___1_key, method);
}
inline void RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052_gshared)(__this, ___0_nodeId, ___1_leftNodeId, method);
}
inline int32_t RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_SetSubTreeSize_m0EBB22E8908E7A97007F5BA1CB2F7BE4ED2AB1FD (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetSubTreeSize_m0EBB22E8908E7A97007F5BA1CB2F7BE4ED2AB1FD_gshared)(__this, ___0_nodeId, ___1_size, method);
}
inline void RBTree_1_IncreaseSize_mC7A31D096BC854B6993FED4FE86BE2B2AB33281E (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_IncreaseSize_mC7A31D096BC854B6993FED4FE86BE2B2AB33281E_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_RBInsert_m25C1F9B8FA733750F51C334ED01E4EF680C3EBBC (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t, int32_t, int32_t, bool, const RuntimeMethod*))RBTree_1_RBInsert_m25C1F9B8FA733750F51C334ED01E4EF680C3EBBC_gshared)(__this, ___0_root_id, ___1_x_id, ___2_mainTreeNodeID, ___3_position, ___4_append, method);
}
inline int32_t RBTree_1_GetNewNode_mCD240B40D292EF9307F03939556ACA325503DA73 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, RuntimeObject*, const RuntimeMethod*))RBTree_1_GetNewNode_mCD240B40D292EF9307F03939556ACA325503DA73_gshared)(__this, ___0_key, method);
}
inline int32_t RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2_gshared)(__this, ___0_nodeId, ___1_color, method);
}
inline int32_t RBTree_1_LeftRotate_m6FAEDAE5FEA845BB51C6E52F7F3797987043F8A3 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_LeftRotate_m6FAEDAE5FEA845BB51C6E52F7F3797987043F8A3_gshared)(__this, ___0_root_id, ___1_x_id, ___2_mainTreeNode, method);
}
inline int32_t RBTree_1_RightRotate_m2A33BBCDE144E00B7E1C6C1A17ECF008E2A5660C (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_RightRotate_m2A33BBCDE144E00B7E1C6C1A17ECF008E2A5660C_gshared)(__this, ___0_root_id, ___1_x_id, ___2_mainTreeNode, method);
}
inline NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 RBTree_1_GetNodeByKey_mF3719F0495F9D5A4339890BE2EB8999ACD068EFA (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, RuntimeObject*, const RuntimeMethod*))RBTree_1_GetNodeByKey_mF3719F0495F9D5A4339890BE2EB8999ACD068EFA_gshared)(__this, ___0_key, method);
}
inline NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 RBTree_1_GetNodeByIndex_m948B6DED575DEAF9BC7735B1CD602A208058485C (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_userIndex, const RuntimeMethod* method)
{
	return ((  NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_GetNodeByIndex_m948B6DED575DEAF9BC7735B1CD602A208058485C_gshared)(__this, ___0_userIndex, method);
}
inline int32_t RBTree_1_RBDeleteX_m61010CD7CB4B2C5EA027848024A26D252CCE530C (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_RBDeleteX_m61010CD7CB4B2C5EA027848024A26D252CCE530C_gshared)(__this, ___0_root_id, ___1_z_id, ___2_mainTreeNodeID, method);
}
inline void RBTree_1_RecomputeSize_m5B049EA2694E6343E2D30EDCDB34CC4C44A0FD08 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_RecomputeSize_m5B049EA2694E6343E2D30EDCDB34CC4C44A0FD08_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_DecreaseSize_m63463D3F02F9E581B66DAC4F5311669F2284C603 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_DecreaseSize_m63463D3F02F9E581B66DAC4F5311669F2284C603_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_RBDeleteFixup_m7FD4570F1436DF16B372F9317522C5D1CDB8B597 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_RBDeleteFixup_m7FD4570F1436DF16B372F9317522C5D1CDB8B597_gshared)(__this, ___0_root_id, ___1_x_id, ___2_px_id, ___3_mainTreeNodeID, method);
}
inline void RBTree_1_FreeNode_m2284FBA53D1081B794CEC801EE442A646B7C0AA8 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_FreeNode_m2284FBA53D1081B794CEC801EE442A646B7C0AA8_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_SearchSubTree_m739962F4F45C09FA4CF594B0EBDBE94D778F7549 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, RuntimeObject* ___1_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, RuntimeObject*, const RuntimeMethod*))RBTree_1_SearchSubTree_m739962F4F45C09FA4CF594B0EBDBE94D778F7549_gshared)(__this, ___0_root_id, ___1_key, method);
}
inline void NodePath__ctor_m78E9206041A7104A8531998AA3DF9EC7DE5E4A45 (NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method)
{
	((  void (*) (NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2*, int32_t, int32_t, const RuntimeMethod*))NodePath__ctor_m78E9206041A7104A8531998AA3DF9EC7DE5E4A45_gshared)(__this, ___0_nodeID, ___1_mainTreeNodeID, method);
}
inline int32_t RBTree_1_GetIndexByNodePath_mA462180E40EFE84991C0B4E4CA85D960D8655784 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 ___0_path, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2, const RuntimeMethod*))RBTree_1_GetIndexByNodePath_mA462180E40EFE84991C0B4E4CA85D960D8655784_gshared)(__this, ___0_path, method);
}
inline int32_t RBTree_1_ComputeIndexByNode_mBCE98E9CE148E35692561C8E3447BCD0DA72F2F3 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_ComputeIndexByNode_mBCE98E9CE148E35692561C8E3447BCD0DA72F2F3_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m1305DFA6E20E6D34D7496686C6CFFB676A0265F2 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_ComputeIndexWithSatelliteByNode_m1305DFA6E20E6D34D7496686C6CFFB676A0265F2_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_ComputeNodeByIndex_m1985EC887852D977760416BBE4644EB35499D6E5 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_ComputeNodeByIndex_m1985EC887852D977760416BBE4644EB35499D6E5_gshared)(__this, ___0_x_id, ___1_index, method);
}
inline int32_t RBTree_1_GetIndexByNode_m579F0FCDCC9A79BC70EEE156F07CC896029A410B (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_node, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_GetIndexByNode_m579F0FCDCC9A79BC70EEE156F07CC896029A410B_gshared)(__this, ___0_node, method);
}
inline int32_t RBTree_1_IndexOf_mC4650C040FAD95BD3F81362BCD765C733564B53E (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, RuntimeObject* ___1_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, RuntimeObject*, const RuntimeMethod*))RBTree_1_IndexOf_mC4650C040FAD95BD3F81362BCD765C733564B53E_gshared)(__this, ___0_nodeId, ___1_item, method);
}
inline int32_t RBTree_1_InsertAt_m55077BF0B4CAA5C5ABD5911CCB68C789D7652B4D (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_position, RuntimeObject* ___1_item, bool ___2_append, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, RuntimeObject*, bool, const RuntimeMethod*))RBTree_1_InsertAt_m55077BF0B4CAA5C5ABD5911CCB68C789D7652B4D_gshared)(__this, ___0_position, ___1_item, ___2_append, method);
}
inline RuntimeObject* RBTree_1_DeleteByIndex_m77EB3F96268C89DEA1218BA5DB3CB1A8EEC073F6 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_i, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_DeleteByIndex_m77EB3F96268C89DEA1218BA5DB3CB1A8EEC073F6_gshared)(__this, ___0_i, method);
}
inline int32_t RBTree_1_get_Count_m1F1E9F00D8DEEB51D299E897DDAD8F4903E2FA9B (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, const RuntimeMethod*))RBTree_1_get_Count_m1F1E9F00D8DEEB51D299E897DDAD8F4903E2FA9B_gshared)(__this, method);
}
inline void NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55 (NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method)
{
	((  void (*) (NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813*, int32_t, int32_t, const RuntimeMethod*))NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55_gshared)(__this, ___0_nodeID, ___1_mainTreeNodeID, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void ReadOnlyCollectionBuilder_1_EnsureCapacity_m076CB69F333012AA70D6FB4A1942229BE3AFDB8A (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, int32_t, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_EnsureCapacity_m076CB69F333012AA70D6FB4A1942229BE3AFDB8A_gshared)(__this, ___0_min, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline int32_t ReadOnlyCollectionBuilder_1_IndexOf_m44F05A371D1726738D08B71DA7A606FE612F7EFF (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_IndexOf_m44F05A371D1726738D08B71DA7A606FE612F7EFF_gshared)(__this, ___0_item, method);
}
inline void ReadOnlyCollectionBuilder_1_RemoveAt_m2FAB70AED511E20D17EEC01D6092F8998FE3B7B3 (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, int32_t, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_RemoveAt_m2FAB70AED511E20D17EEC01D6092F8998FE3B7B3_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m8089D385B6D4EACE459E149D2C7544C017BDC887 (Enumerator_tFDD83062A262A5CEB8E1D6AF6D70D5C633288041* __this, ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* ___0_builder, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFDD83062A262A5CEB8E1D6AF6D70D5C633288041*, ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, const RuntimeMethod*))Enumerator__ctor_m8089D385B6D4EACE459E149D2C7544C017BDC887_gshared)(__this, ___0_builder, method);
}
inline RuntimeObject* ReadOnlyCollectionBuilder_1_GetEnumerator_m604D81B930A4D7581904C01960981F02807E6840 (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_GetEnumerator_m604D81B930A4D7581904C01960981F02807E6840_gshared)(__this, method);
}
inline void ReadOnlyCollectionBuilder_1_ValidateNullValue_mE96C51B701CAA99735D346A0D421BB01DFED1FCA (RuntimeObject* ___0_value, String_t* ___1_argument, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_ValidateNullValue_mE96C51B701CAA99735D346A0D421BB01DFED1FCA_gshared)(___0_value, ___1_argument, method);
}
inline void ReadOnlyCollectionBuilder_1_Add_m129CC65EBD7CF4155F6DBC3C7BC0A7D8FB17E016 (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_Add_m129CC65EBD7CF4155F6DBC3C7BC0A7D8FB17E016_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C (RuntimeObject* ___0_value, Type_t* ___1_type, String_t* ___2_paramName, const RuntimeMethod* method) ;
inline int32_t ReadOnlyCollectionBuilder_1_get_Count_m712C23152F205989A9FBD883DC268B3DB8B2641C_inline (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_get_Count_m712C23152F205989A9FBD883DC268B3DB8B2641C_gshared_inline)(__this, method);
}
inline bool ReadOnlyCollectionBuilder_1_IsCompatibleObject_m5F313CD5FE4FF765F9A3B2268CA877ADBB7F57BA (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_IsCompatibleObject_m5F313CD5FE4FF765F9A3B2268CA877ADBB7F57BA_gshared)(___0_value, method);
}
inline bool ReadOnlyCollectionBuilder_1_Contains_m5B14BD16A256ABD0E52AFB4DCAD6C29D55528B51 (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_Contains_m5B14BD16A256ABD0E52AFB4DCAD6C29D55528B51_gshared)(__this, ___0_item, method);
}
inline void ReadOnlyCollectionBuilder_1_Insert_m0D4A6276C5192A71A27A7C93472A88B3CB3831AE (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, int32_t, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_Insert_m0D4A6276C5192A71A27A7C93472A88B3CB3831AE_gshared)(__this, ___0_index, ___1_item, method);
}
inline bool ReadOnlyCollectionBuilder_1_Remove_m56D899A4F23BDAA2734238200D06EC8A68F0CE77 (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_Remove_m56D899A4F23BDAA2734238200D06EC8A68F0CE77_gshared)(__this, ___0_item, method);
}
inline RuntimeObject* ReadOnlyCollectionBuilder_1_get_Item_m5D456B9C2FED574195A1CF3AFF1984D3820F7EC5 (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, int32_t, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_get_Item_m5D456B9C2FED574195A1CF3AFF1984D3820F7EC5_gshared)(__this, ___0_index, method);
}
inline void ReadOnlyCollectionBuilder_1_set_Item_mCDB55E21C2461E6FD0E595F49612B0395A412A47 (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, int32_t, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_set_Item_mCDB55E21C2461E6FD0E595F49612B0395A412A47_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ReadOnlyCollectionBuilder_1_ToArray_mF1C840CFBB343884E990EF08670781D4D03996B9 (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_ToArray_mF1C840CFBB343884E990EF08670781D4D03996B9_gshared)(__this, method);
}
inline void TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF (TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF_gshared)(__this, ___0_list, method);
}
inline void ReadOnlyCollectionBuilder_1_set_Capacity_m37ECBD79FE0E0681FE2996761F5FE3CCAAEDA6E4 (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B*, int32_t, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_set_Capacity_m37ECBD79FE0E0681FE2996761F5FE3CCAAEDA6E4_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_InvalidNullValue_mD3F707613D9B6413719EB3549DAF5406FBD60199 (Type_t* ___0_type, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023 (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t ReadOnlyCollection_1_get_Count_m6B6BE788B018E462AB49965C9BF42835AA0F40FE (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m6B6BE788B018E462AB49965C9BF42835AA0F40FE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline bool ReadOnlyCollection_1_IsCompatibleObject_mC010A5256D19EE219546ED424AE97F0D94A1E97E (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_mC010A5256D19EE219546ED424AE97F0D94A1E97E_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m54E213256F6E5A5649AC292E96F3858D2F3B3AA0 (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050*, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m54E213256F6E5A5649AC292E96F3858D2F3B3AA0_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_mB23F2D0BBC3186365E72E6FB4BC47AAB1686211B (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050*, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_mB23F2D0BBC3186365E72E6FB4BC47AAB1686211B_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_mB07E1D8A7EE4081EF3A7DBD0369DB07BAB1365B2 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mB07E1D8A7EE4081EF3A7DBD0369DB07BAB1365B2_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m7FE8864771813C869EECD0FC9B3518D2617F47DB (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m7FE8864771813C869EECD0FC9B3518D2617F47DB_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_mA2DC89076EDA7FAE081CB1EBB0F544D3E25E992E (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513*, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F, const RuntimeMethod*))ReadOnlyCollection_1_Contains_mA2DC89076EDA7FAE081CB1EBB0F544D3E25E992E_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m6FE656D0B1AC159B2743D580A2BE9B8BE8FE9654 (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513*, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m6FE656D0B1AC159B2743D580A2BE9B8BE8FE9654_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m4FC5EF77143370F6ADA6FCF6F964623DF661D512 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m4FC5EF77143370F6ADA6FCF6F964623DF661D512_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m732D12395A2D23BF37EC63D5E50E0ACFD3060CF5 (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m732D12395A2D23BF37EC63D5E50E0ACFD3060CF5_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m76F2BEE33BE96FF2ACEDFE076FAC30629D35A491 (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m76F2BEE33BE96FF2ACEDFE076FAC30629D35A491_gshared)(__this, ___0_value, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m328625AEF6FC9DE908D967C4537628D1B2B61700_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, const RuntimeMethod* method) 
{
	{
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_0 = ___0_tree;
		__this->____tree = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tree), (void*)L_0);
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		__this->____version = L_2;
		__this->____index = 0;
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_3 = ___0_tree;
		NullCheck(L_3);
		int32_t L_4 = L_3->___root;
		__this->____mainTreeNodeId = L_4;
		RuntimeObject** L_5 = (RuntimeObject**)(&__this->____current);
		il2cpp_codegen_initobj(L_5, sizeof(RuntimeObject*));
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator__ctor_m328625AEF6FC9DE908D967C4537628D1B2B61700_AdjustorThunk (RuntimeObject* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	RBTreeEnumerator__ctor_m328625AEF6FC9DE908D967C4537628D1B2B61700(_thisAdjusted, ___0_tree, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m6E21AC6C4E86A24D602CD91F46425928C4ADF82D_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, int32_t ___1_position, const RuntimeMethod* method) 
{
	{
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_0 = ___0_tree;
		__this->____tree = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tree), (void*)L_0);
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		__this->____version = L_2;
		int32_t L_3 = ___1_position;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		__this->____index = 0;
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_4 = ___0_tree;
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		__this->____mainTreeNodeId = L_5;
		goto IL_0050;
	}

IL_002b:
	{
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_6 = ___0_tree;
		int32_t L_7 = ___1_position;
		int32_t* L_8 = (int32_t*)(&__this->____mainTreeNodeId);
		NullCheck(L_6);
		int32_t L_9;
		L_9 = RBTree_1_ComputeNodeByIndex_m6A133AF17BE38F8B527CD83716760BF90D624007(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		__this->____index = L_9;
		int32_t L_10 = __this->____index;
		if (L_10)
		{
			goto IL_0050;
		}
	}
	{
		Exception_t* L_11;
		L_11 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0050:
	{
		RuntimeObject** L_12 = (RuntimeObject**)(&__this->____current);
		il2cpp_codegen_initobj(L_12, sizeof(RuntimeObject*));
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator__ctor_m6E21AC6C4E86A24D602CD91F46425928C4ADF82D_AdjustorThunk (RuntimeObject* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, int32_t ___1_position, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	RBTreeEnumerator__ctor_m6E21AC6C4E86A24D602CD91F46425928C4ADF82D(_thisAdjusted, ___0_tree, ___1_position, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_Dispose_m1E08AEE7388530D346B9193B730D8B03273BF2A6_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_Dispose_m1E08AEE7388530D346B9193B730D8B03273BF2A6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	RBTreeEnumerator_Dispose_m1E08AEE7388530D346B9193B730D8B03273BF2A6(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_m76DBA6D87BDD9AE92D0E1B8AA83CBCA809AF2C5E_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_1 = __this->____tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_4 = __this->____tree;
		int32_t* L_5 = (int32_t*)(&__this->____index);
		int32_t* L_6 = (int32_t*)(&__this->____mainTreeNodeId);
		NullCheck(L_4);
		bool L_7;
		L_7 = RBTree_1_Successor_m89C5DC61DF69FB7B614F570A01A91F8D4555D74A(L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_8 = __this->____tree;
		int32_t L_9 = __this->____index;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		__this->____current = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current), (void*)L_10);
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool RBTreeEnumerator_MoveNext_m76DBA6D87BDD9AE92D0E1B8AA83CBCA809AF2C5E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	bool _returnValue;
	_returnValue = RBTreeEnumerator_MoveNext_m76DBA6D87BDD9AE92D0E1B8AA83CBCA809AF2C5E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mE3D8BAC55EE728E4B5EC5C2CA70730160709EB5A_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mE3D8BAC55EE728E4B5EC5C2CA70730160709EB5A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mE3D8BAC55EE728E4B5EC5C2CA70730160709EB5A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m9B4501D17EEC9E2B952126A9678DEEB960C8CA50_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_1 = __this->____tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		__this->____index = 0;
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_4 = __this->____tree;
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		__this->____mainTreeNodeId = L_5;
		RuntimeObject** L_6 = (RuntimeObject**)(&__this->____current);
		il2cpp_codegen_initobj(L_6, sizeof(RuntimeObject*));
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m9B4501D17EEC9E2B952126A9678DEEB960C8CA50_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	RBTreeEnumerator_System_Collections_IEnumerator_Reset_m9B4501D17EEC9E2B952126A9678DEEB960C8CA50(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	{
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_0 = ___0_tree;
		il2cpp_codegen_write_instance_field_data<RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0), L_0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1), L_2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), 0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_3 = ___0_tree;
		NullCheck(L_3);
		int32_t L_4 = L_3->___root;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3), L_4);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)))), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB_AdjustorThunk (RuntimeObject* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB(_thisAdjusted, ___0_tree, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_mC7027B6747A32BD6A978E0DA6DE74FA6DB6AEA5C_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, int32_t ___1_position, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	{
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_0 = ___0_tree;
		il2cpp_codegen_write_instance_field_data<RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0), L_0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1), L_2);
		int32_t L_3 = ___1_position;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), 0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_4 = ___0_tree;
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3), L_5);
		goto IL_0050;
	}

IL_002b:
	{
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_6 = ___0_tree;
		int32_t L_7 = ___1_position;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), (((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), L_8);
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2));
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		Exception_t* L_10;
		L_10 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0050:
	{
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)))), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator__ctor_mC7027B6747A32BD6A978E0DA6DE74FA6DB6AEA5C_AdjustorThunk (RuntimeObject* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, int32_t ___1_position, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	RBTreeEnumerator__ctor_mC7027B6747A32BD6A978E0DA6DE74FA6DB6AEA5C(_thisAdjusted, ___0_tree, ___1_position, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1));
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_1 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_4 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		NullCheck(L_4);
		bool L_5;
		L_5 = ((  bool (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_4, (((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))), (((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_6 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2));
		NullCheck(L_6);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_7, (Il2CppFullySharedGenericAny*)L_8);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4), L_8, SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	bool _returnValue;
	_returnValue = RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), __this, (Il2CppFullySharedGenericAny*)L_0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1));
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_1 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), 0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_4 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3), L_5);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)))), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1__ctor_m94D0C9F06C7211AEA1E7596028FE173C1C787497_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_accessMethod, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_accessMethod;
		__this->____accessMethod = L_0;
		RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___root = 0;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = (TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3*)(TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)32));
		__this->____pageTable = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTable), (void*)L_0);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_1 = __this->____pageTable;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_1)->max_length)), ((int32_t)32))), 1))/((int32_t)32))));
		__this->____pageTableMap = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTableMap), (void*)L_2);
		__this->____inUsePageCount = 0;
		__this->____nextFreePageLine = 0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3;
		L_3 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)32), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_4 = __this->____pageTable;
		NullCheck(L_4);
		int32_t L_5 = 0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_7 = L_6->____slots;
		NullCheck(L_7);
		((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->____nodeColor = (int32_t)1;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_8 = __this->____pageTable;
		NullCheck(L_8);
		int32_t L_9 = 0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->____slotMap;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_12 = __this->____pageTable;
		NullCheck(L_12);
		int32_t L_13 = 0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_inline(L_14, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->____inUseNodeCount = 1;
		__this->____inUseSatelliteTreeCount = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) 
{
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_0 = ___0_page;
		RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_1 = __this->____pageTable;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_2 = ___0_page;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, NULL);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)NULL);
		int32_t L_4 = __this->____inUsePageCount;
		__this->____inUsePageCount = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA(__this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_2 = __this->____pageTable;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_size;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83(L_5, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)L_5);
		int32_t L_6 = V_0;
		__this->____nextFreePageLine = ((int32_t)(L_6/((int32_t)32)));
		goto IL_00a9;
	}

IL_0029:
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_7 = __this->____pageTable;
		NullCheck(L_7);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_8 = (TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3*)(TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_7)->max_length)), 2)));
		V_1 = L_8;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_9 = __this->____pageTable;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_10 = V_1;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_11 = __this->____pageTable;
		NullCheck(L_11);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_12 = V_1;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_12)->max_length)), ((int32_t)32))), 1))/((int32_t)32))));
		V_2 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____pageTableMap;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____pageTableMap;
		NullCheck(L_16);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, 0, ((int32_t)(((RuntimeArray*)L_16)->max_length)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____pageTableMap;
		NullCheck(L_17);
		__this->____nextFreePageLine = ((int32_t)(((RuntimeArray*)L_17)->max_length));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_18 = __this->____pageTable;
		NullCheck(L_18);
		V_0 = ((int32_t)(((RuntimeArray*)L_18)->max_length));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_19 = V_1;
		__this->____pageTable = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTable), (void*)L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		__this->____pageTableMap = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTableMap), (void*)L_20);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_21 = __this->____pageTable;
		int32_t L_22 = V_0;
		int32_t L_23 = ___0_size;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_24 = (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83(L_24, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)L_24);
	}

IL_00a9:
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_25 = __this->____pageTable;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = V_0;
		NullCheck(L_28);
		TreePage_set_PageId_m60FCE18172BAC6C1B1479026018D6422F2B30A70_inline(L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_30 = __this->____inUsePageCount;
		__this->____inUsePageCount = ((int32_t)il2cpp_codegen_add(L_30, 1));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_31 = __this->____pageTable;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFull_mC50FFD42DDEC1D8C70AB4B76EA8E765F43D1A138_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____pageTableMap;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_1 = ___0_page;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_0);
		int32_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_2/((int32_t)32))))));
		int32_t L_4 = *((int32_t*)L_3);
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = ___0_page;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4|((int32_t)(1<<((int32_t)(((int32_t)(L_6%((int32_t)32)))&((int32_t)31)))))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____pageTableMap;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_1 = ___0_page;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_0);
		int32_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_2/((int32_t)32))))));
		int32_t L_4 = *((int32_t*)L_3);
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = ___0_page;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4&((~((int32_t)(1<<((int32_t)(((int32_t)(L_6%((int32_t)32)))&((int32_t)31)))))))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIntValueFromBitMap_m48B51C8E9FEE3BC3018EEABB1B7171C27550AF56_gshared (uint32_t ___0_bitMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		uint32_t L_0 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_0&((int32_t)-65536))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)16)));
		uint32_t L_2 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_2>>((int32_t)16)));
	}

IL_0016:
	{
		uint32_t L_3 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_3&((int32_t)65280))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 8));
		uint32_t L_5 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_5>>8));
	}

IL_0028:
	{
		uint32_t L_6 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_6&((int32_t)240))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 4));
		uint32_t L_8 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_8>>4));
	}

IL_003a:
	{
		uint32_t L_9 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_9&((int32_t)12))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 2));
		uint32_t L_11 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_11>>2));
	}

IL_0049:
	{
		uint32_t L_12 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_12&2)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = ___0_nodeId;
		V_1 = ((int32_t)(L_4&((int32_t)65535)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = V_0;
		NullCheck(L_5);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_6 = L_5->____slots;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_initobj(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), sizeof(Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_8 = V_0;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____slotMap;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/((int32_t)32))))));
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13 = V_1;
		*((int32_t*)L_11) = (int32_t)((int32_t)(L_12&((~((int32_t)(1<<((int32_t)(((int32_t)(L_13%((int32_t)32)))&((int32_t)31)))))))));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_14 = V_0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_2 = L_16;
		int32_t L_17 = V_2;
		NullCheck(L_15);
		TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_inline(L_15, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_18 = __this->____inUseNodeCount;
		__this->____inUseNodeCount = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_inline(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_20)
		{
			goto IL_0071;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_21 = V_0;
		RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}

IL_0071:
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_inline(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_24 = V_0;
		NullCheck(L_24);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_25 = L_24->____slots;
		NullCheck(L_25);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_25)->max_length)), 1))))))
		{
			goto IL_008a;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_26 = V_0;
		RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB(__this, L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_008a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, bool ___0_allocatedPage, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		int32_t L_0 = __this->____nextFreePageLine;
		V_0 = L_0;
		V_1 = (-1);
		goto IL_0073;
	}

IL_000b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____pageTableMap;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint32_t)L_4) < ((uint32_t)(-1)))))
		{
			goto IL_006f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____pageTableMap;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = (uint32_t)L_8;
		goto IL_006a;
	}

IL_0021:
	{
		uint32_t L_9 = V_2;
		uint32_t L_10 = V_2;
		V_3 = (uint32_t)((int32_t)(((~((int32_t)L_9)))&((int32_t)il2cpp_codegen_add((int32_t)L_10, 1))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____pageTableMap;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		uint32_t L_15 = V_3;
		if (!((int64_t)(((int64_t)L_14)&((int64_t)(uint64_t)L_15))))
		{
			goto IL_003d;
		}
	}
	{
		Exception_t* L_16;
		L_16 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_003d:
	{
		int32_t L_17 = V_0;
		uint32_t L_18 = V_3;
		int32_t L_19;
		L_19 = RBTree_1_GetIntValueFromBitMap_m48B51C8E9FEE3BC3018EEABB1B7171C27550AF56(L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)32))), L_19));
		bool L_20 = ___0_allocatedPage;
		if (!L_20)
		{
			goto IL_0058;
		}
	}
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_21 = __this->____pageTable;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (!L_24)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_25 = V_1;
		return L_25;
	}

IL_0058:
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_26 = __this->____pageTable;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if (L_29)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_30 = V_1;
		return L_30;
	}

IL_0064:
	{
		V_1 = (-1);
		uint32_t L_31 = V_2;
		uint32_t L_32 = V_3;
		V_2 = (uint32_t)((int32_t)((int32_t)L_31|(int32_t)L_32));
	}

IL_006a:
	{
		uint32_t L_33 = V_2;
		if (((int32_t)((int32_t)L_33^(-1))))
		{
			goto IL_0021;
		}
	}

IL_006f:
	{
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0073:
	{
		int32_t L_35 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____pageTableMap;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_37 = __this->____nextFreePageLine;
		if (!L_37)
		{
			goto IL_0095;
		}
	}
	{
		__this->____nextFreePageLine = 0;
		bool L_38 = ___0_allocatedPage;
		int32_t L_39;
		L_39 = RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA(__this, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_1 = L_39;
	}

IL_0095:
	{
		int32_t L_40 = V_1;
		return L_40;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseNodeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_get_HasDuplicates_m4F156E4EE63FDA1D6F9A8FC9E85FDCEA272E3F72_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)NULL;
		int32_t L_0;
		L_0 = RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_001c;
		}
	}
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_2 = __this->____pageTable;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		goto IL_00a5;
	}

IL_001c:
	{
		int32_t L_6 = __this->____inUsePageCount;
		if ((((int32_t)L_6) >= ((int32_t)4)))
		{
			goto IL_0030;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_7;
		L_7 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)32), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_7;
		goto IL_00a5;
	}

IL_0030:
	{
		int32_t L_8 = __this->____inUsePageCount;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0048;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_9;
		L_9 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)256), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_9;
		goto IL_00a5;
	}

IL_0048:
	{
		int32_t L_10 = __this->____inUsePageCount;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0063;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_11;
		L_11 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)1024), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_11;
		goto IL_00a5;
	}

IL_0063:
	{
		int32_t L_12 = __this->____inUsePageCount;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)4096))))
		{
			goto IL_007e;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_13;
		L_13 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)4096), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_13;
		goto IL_00a5;
	}

IL_007e:
	{
		int32_t L_14 = __this->____inUsePageCount;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)32768))))
		{
			goto IL_0099;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_15;
		L_15 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)8192), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_15;
		goto IL_00a5;
	}

IL_0099:
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_16;
		L_16 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)65536), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_16;
	}

IL_00a5:
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = TreePage_AllocSlot_m98CE7C69F3225831EDC1F758AC133AFDBD631329(L_17, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_2 = L_18;
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_00b8;
		}
	}
	{
		Exception_t* L_20;
		L_20 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_00b8:
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_21 = V_0;
		NullCheck(L_21);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_22 = L_21->____slots;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_26 = V_2;
		((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->____selfId = ((int32_t)(((int32_t)(L_25<<((int32_t)16)))|L_26));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_27 = V_0;
		NullCheck(L_27);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_28 = L_27->____slots;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->____subTreeSize = 1;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_30 = V_0;
		NullCheck(L_30);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_31 = L_30->____slots;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = ___0_key;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->____keyOfNode = L_33;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_34 = V_0;
		NullCheck(L_34);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_35 = L_34->____slots;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->____selfId;
		return L_37;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___0_x_id;
		int32_t L_3;
		L_3 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_4;
		L_4 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_4;
	}

IL_0017:
	{
		int32_t L_5 = ___0_x_id;
		int32_t L_6;
		L_6 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_6;
		goto IL_002c;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		___0_x_id = L_7;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_9;
	}

IL_002c:
	{
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_11 = ___0_x_id;
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0021;
		}
	}

IL_0039:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_Successor_mBE6CC011CC22FE54A564CB8AE8247BC43146D3EE_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_nodeId;
		int32_t L_1 = *((int32_t*)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t* L_2 = ___0_nodeId;
		int32_t* L_3 = ___1_mainTreeNodeId;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5;
		L_5 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		*((int32_t*)L_2) = (int32_t)L_5;
		int32_t* L_6 = ___1_mainTreeNodeId;
		*((int32_t*)L_6) = (int32_t)0;
		goto IL_0032;
	}

IL_0013:
	{
		int32_t* L_7 = ___0_nodeId;
		int32_t* L_8 = ___0_nodeId;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10;
		L_10 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		*((int32_t*)L_7) = (int32_t)L_10;
		int32_t* L_11 = ___0_nodeId;
		int32_t L_12 = *((int32_t*)L_11);
		if (L_12)
		{
			goto IL_0032;
		}
	}
	{
		int32_t* L_13 = ___1_mainTreeNodeId;
		int32_t L_14 = *((int32_t*)L_13);
		if (!L_14)
		{
			goto IL_0032;
		}
	}
	{
		int32_t* L_15 = ___0_nodeId;
		int32_t* L_16 = ___1_mainTreeNodeId;
		int32_t L_17 = *((int32_t*)L_16);
		int32_t L_18;
		L_18 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		*((int32_t*)L_15) = (int32_t)L_18;
		int32_t* L_19 = ___1_mainTreeNodeId;
		*((int32_t*)L_19) = (int32_t)0;
	}

IL_0032:
	{
		int32_t* L_20 = ___0_nodeId;
		int32_t L_21 = *((int32_t*)L_20);
		if (!L_21)
		{
			goto IL_0062;
		}
	}
	{
		int32_t* L_22 = ___0_nodeId;
		int32_t L_23 = *((int32_t*)L_22);
		int32_t L_24;
		L_24 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_24)
		{
			goto IL_0060;
		}
	}
	{
		int32_t* L_25 = ___1_mainTreeNodeId;
		int32_t L_26 = *((int32_t*)L_25);
		if (!L_26)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t* L_27;
		L_27 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)21), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
	}

IL_004c:
	{
		int32_t* L_28 = ___1_mainTreeNodeId;
		int32_t* L_29 = ___0_nodeId;
		int32_t L_30 = *((int32_t*)L_29);
		*((int32_t*)L_28) = (int32_t)L_30;
		int32_t* L_31 = ___0_nodeId;
		int32_t* L_32 = ___0_nodeId;
		int32_t L_33 = *((int32_t*)L_32);
		int32_t L_34;
		L_34 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_35;
		L_35 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		*((int32_t*)L_31) = (int32_t)L_35;
	}

IL_0060:
	{
		return (bool)1;
	}

IL_0062:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) 
{
	{
		goto IL_000b;
	}

IL_0002:
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		___0_x_id = L_1;
	}

IL_000b:
	{
		int32_t L_2 = ___0_x_id;
		int32_t L_3;
		L_3 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_3)
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_4 = ___0_x_id;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B11_2 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B13_3 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B17_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B18_3 = NULL;
	{
		int32_t L_0 = ___1_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = ___1_x_id;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_2, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_9 = ___1_x_id;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_13 = ___1_x_id;
		int32_t L_14;
		L_14 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = ___0_root_id;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_16 = V_0;
		__this->___root = L_16;
		goto IL_0099;
	}

IL_0050:
	{
		int32_t L_17 = ___2_mainTreeNode;
		int32_t L_18 = V_0;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_19 = ___2_mainTreeNode;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_19, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		int32_t L_22 = V_0;
		___0_root_id = L_22;
		goto IL_0099;
	}

IL_006b:
	{
		int32_t L_23 = ___1_x_id;
		int32_t L_24 = ___1_x_id;
		int32_t L_25;
		L_25 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_26;
		L_26 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_23) == ((uint32_t)L_26))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_29 = V_0;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0099;
	}

IL_008b:
	{
		int32_t L_30 = ___1_x_id;
		int32_t L_31;
		L_31 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_32 = V_0;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_31, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0099:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___1_x_id;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_35 = ___1_x_id;
		int32_t L_36 = V_0;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_37 = ___1_x_id;
		if (!L_37)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_38 = ___1_x_id;
		int32_t L_39 = ___1_x_id;
		int32_t L_40;
		L_40 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_41;
		L_41 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_42 = ___1_x_id;
		int32_t L_43;
		L_43 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_44;
		L_44 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_45 = ___1_x_id;
		int32_t L_46;
		L_46 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_46)
		{
			G_B12_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
			G_B12_1 = L_38;
			G_B12_2 = __this;
			goto IL_00e1;
		}
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
		G_B11_1 = L_38;
		G_B11_2 = __this;
	}
	{
		int32_t L_47 = ___1_x_id;
		int32_t L_48;
		L_48 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_49;
		L_49 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B13_0 = L_49;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00e2:
	{
		NullCheck(G_B13_3);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(G_B13_3, G_B13_2, ((int32_t)il2cpp_codegen_add(G_B13_1, G_B13_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_00e8:
	{
		int32_t L_50 = V_0;
		if (!L_50)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_0;
		int32_t L_53;
		L_53 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_54;
		L_54 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_55 = V_0;
		int32_t L_56;
		L_56 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_57;
		L_57 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_59)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
			G_B17_1 = L_51;
			G_B17_2 = __this;
			goto IL_0120;
		}
		G_B16_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
		G_B16_1 = L_51;
		G_B16_2 = __this;
	}
	{
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_62;
		L_62 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_61, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B18_0 = L_62;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_0121;
	}

IL_0120:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_0121:
	{
		NullCheck(G_B18_3);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(G_B18_3, G_B18_2, ((int32_t)il2cpp_codegen_add(G_B18_1, G_B18_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_0127:
	{
		int32_t L_63 = ___0_root_id;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B11_2 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B13_3 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B17_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B18_3 = NULL;
	{
		int32_t L_0 = ___1_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_1;
		int32_t L_2 = ___1_x_id;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_2, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_9 = ___1_x_id;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_13 = ___1_x_id;
		int32_t L_14;
		L_14 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = ___0_root_id;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_16 = V_0;
		__this->___root = L_16;
		goto IL_0099;
	}

IL_0050:
	{
		int32_t L_17 = ___2_mainTreeNode;
		int32_t L_18 = V_0;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_19 = ___2_mainTreeNode;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_19, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		int32_t L_22 = V_0;
		___0_root_id = L_22;
		goto IL_0099;
	}

IL_006b:
	{
		int32_t L_23 = ___1_x_id;
		int32_t L_24 = ___1_x_id;
		int32_t L_25;
		L_25 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_26;
		L_26 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_23) == ((uint32_t)L_26))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_29 = V_0;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0099;
	}

IL_008b:
	{
		int32_t L_30 = ___1_x_id;
		int32_t L_31;
		L_31 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_32 = V_0;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_31, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0099:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___1_x_id;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_35 = ___1_x_id;
		int32_t L_36 = V_0;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_37 = ___1_x_id;
		if (!L_37)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_38 = ___1_x_id;
		int32_t L_39 = ___1_x_id;
		int32_t L_40;
		L_40 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_41;
		L_41 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_42 = ___1_x_id;
		int32_t L_43;
		L_43 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_44;
		L_44 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_45 = ___1_x_id;
		int32_t L_46;
		L_46 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_46)
		{
			G_B12_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
			G_B12_1 = L_38;
			G_B12_2 = __this;
			goto IL_00e1;
		}
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
		G_B11_1 = L_38;
		G_B11_2 = __this;
	}
	{
		int32_t L_47 = ___1_x_id;
		int32_t L_48;
		L_48 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_49;
		L_49 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B13_0 = L_49;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00e2:
	{
		NullCheck(G_B13_3);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(G_B13_3, G_B13_2, ((int32_t)il2cpp_codegen_add(G_B13_1, G_B13_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_00e8:
	{
		int32_t L_50 = V_0;
		if (!L_50)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_0;
		int32_t L_53;
		L_53 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_54;
		L_54 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_55 = V_0;
		int32_t L_56;
		L_56 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_57;
		L_57 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_59)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
			G_B17_1 = L_51;
			G_B17_2 = __this;
			goto IL_0120;
		}
		G_B16_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
		G_B16_1 = L_51;
		G_B16_2 = __this;
	}
	{
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_62;
		L_62 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_61, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B18_0 = L_62;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_0121;
	}

IL_0120:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_0121:
	{
		NullCheck(G_B18_3);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(G_B18_3, G_B18_2, ((int32_t)il2cpp_codegen_add(G_B18_1, G_B18_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_0127:
	{
		int32_t L_63 = ___0_root_id;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B54_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		V_0 = 0;
		int32_t L_1 = ___0_root_id;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_root_id;
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		int32_t L_3 = __this->___root;
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_1 = G_B3_0;
		int32_t L_4 = __this->____accessMethod;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_01f8;
		}
	}
	{
		bool L_5 = ___4_append;
		if (L_5)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_01f0;
	}

IL_0035:
	{
		int32_t L_6 = V_1;
		RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		int32_t L_7 = V_1;
		V_0 = L_7;
		int32_t L_8 = ___0_root_id;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_9 = ___1_x_id;
		int32_t L_10;
		L_10 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_11 = V_1;
		int32_t L_12;
		L_12 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_13;
		L_13 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, __this, L_10, L_12);
		G_B9_0 = L_13;
		goto IL_006b;
	}

IL_0057:
	{
		int32_t L_14 = ___1_x_id;
		int32_t L_15;
		L_15 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_18;
		L_18 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5, __this, L_15, L_17);
		G_B9_0 = L_18;
	}

IL_006b:
	{
		V_2 = G_B9_0;
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_20 = V_1;
		int32_t L_21;
		L_21 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_1 = L_21;
		goto IL_01f0;
	}

IL_007d:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_1 = L_24;
		goto IL_01f0;
	}

IL_008e:
	{
		int32_t L_25 = ___0_root_id;
		if (!L_25)
		{
			goto IL_0098;
		}
	}
	{
		Exception_t* L_26;
		L_26 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_0098:
	{
		int32_t L_27 = V_1;
		int32_t L_28;
		L_28 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_28)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_29 = V_1;
		int32_t L_30;
		L_30 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_31 = ___1_x_id;
		int32_t L_32 = V_1;
		int32_t L_33;
		L_33 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, L_30, L_31, L_32, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		___0_root_id = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_1;
		int32_t L_36;
		L_36 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_37;
		L_37 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_34, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		goto IL_01ee;
	}

IL_00cd:
	{
		V_3 = 0;
		int32_t L_38 = V_1;
		int32_t L_39;
		L_39 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_40;
		L_40 = RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568(__this, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_3 = L_40;
		int32_t L_41 = __this->____inUseSatelliteTreeCount;
		__this->____inUseSatelliteTreeCount = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_3;
		int32_t L_43 = V_1;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_44 = V_3;
		int32_t L_45 = V_1;
		int32_t L_46;
		L_46 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_44, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_47 = V_3;
		int32_t L_48 = V_1;
		int32_t L_49;
		L_49 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_47, L_49, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_50 = V_3;
		int32_t L_51 = V_1;
		int32_t L_52;
		L_52 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_50, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_53 = V_3;
		int32_t L_54 = V_1;
		int32_t L_55;
		L_55 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_53, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_56 = V_1;
		int32_t L_57;
		L_57 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_58;
		L_58 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_57, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_59 = V_1;
		if ((!(((uint32_t)L_58) == ((uint32_t)L_59))))
		{
			goto IL_014b;
		}
	}
	{
		int32_t L_60 = V_1;
		int32_t L_61;
		L_61 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_62 = V_3;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_61, L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0169;
	}

IL_014b:
	{
		int32_t L_63 = V_1;
		int32_t L_64;
		L_64 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_65;
		L_65 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_64, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_66 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_67 = V_1;
		int32_t L_68;
		L_68 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_69 = V_3;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_68, L_69, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0169:
	{
		int32_t L_70 = V_1;
		int32_t L_71;
		L_71 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_70, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_71)
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_72 = V_1;
		int32_t L_73;
		L_73 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_74 = V_3;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_73, L_74, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0180:
	{
		int32_t L_75 = V_1;
		int32_t L_76;
		L_76 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_76)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_77 = V_1;
		int32_t L_78;
		L_78 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_79 = V_3;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_78, L_79, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0197:
	{
		int32_t L_80 = __this->___root;
		int32_t L_81 = V_1;
		if ((!(((uint32_t)L_80) == ((uint32_t)L_81))))
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_82 = V_3;
		__this->___root = L_82;
	}

IL_01a7:
	{
		int32_t L_83 = V_1;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_83, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_84 = V_1;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_84, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_85 = V_1;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_85, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_86 = V_1;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_86, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_87 = V_1;
		int32_t L_88;
		L_88 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_87, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_4 = L_88;
		int32_t L_89 = V_1;
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(__this, L_89, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_90 = V_1;
		int32_t L_91 = ___1_x_id;
		int32_t L_92 = V_3;
		int32_t L_93;
		L_93 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, L_90, L_91, L_92, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		___0_root_id = L_93;
		int32_t L_94 = V_3;
		int32_t L_95 = V_4;
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(__this, L_94, L_95, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_01ee:
	{
		int32_t L_96 = ___0_root_id;
		return L_96;
	}

IL_01f0:
	{
		int32_t L_97 = V_1;
		if (L_97)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0263;
	}

IL_01f8:
	{
		int32_t L_98 = __this->____accessMethod;
		bool L_99 = ___4_append;
		if (!((int32_t)(((((int32_t)L_98) == ((int32_t)2))? 1 : 0)|(int32_t)L_99)))
		{
			goto IL_025b;
		}
	}
	{
		int32_t L_100 = ___3_position;
		if ((!(((uint32_t)L_100) == ((uint32_t)(-1)))))
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_101 = __this->___root;
		int32_t L_102;
		L_102 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_101, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		___3_position = L_102;
		goto IL_0256;
	}

IL_021b:
	{
		int32_t L_103 = V_1;
		RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8(__this, L_103, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		int32_t L_104 = V_1;
		V_0 = L_104;
		int32_t L_105 = ___3_position;
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_106, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_108;
		L_108 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_107, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_105, L_108));
		int32_t L_109 = V_5;
		if ((((int32_t)L_109) > ((int32_t)0)))
		{
			goto IL_0245;
		}
	}
	{
		int32_t L_110 = V_1;
		int32_t L_111;
		L_111 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_110, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_1 = L_111;
		goto IL_0256;
	}

IL_0245:
	{
		int32_t L_112 = V_1;
		int32_t L_113;
		L_113 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_112, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_1 = L_113;
		int32_t L_114 = V_1;
		if (!L_114)
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_115 = V_5;
		___3_position = ((int32_t)il2cpp_codegen_subtract(L_115, 1));
	}

IL_0256:
	{
		int32_t L_116 = V_1;
		if (L_116)
		{
			goto IL_021b;
		}
	}
	{
		goto IL_0263;
	}

IL_025b:
	{
		Exception_t* L_117;
		L_117 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)15), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, method);
	}

IL_0263:
	{
		int32_t L_118 = ___1_x_id;
		int32_t L_119 = V_0;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_118, L_119, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_120 = V_0;
		if (L_120)
		{
			goto IL_0298;
		}
	}
	{
		int32_t L_121 = ___0_root_id;
		if (L_121)
		{
			goto IL_027d;
		}
	}
	{
		int32_t L_122 = ___1_x_id;
		__this->___root = L_122;
		goto IL_030a;
	}

IL_027d:
	{
		int32_t L_123 = ___2_mainTreeNodeID;
		int32_t L_124 = ___1_x_id;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_123, L_124, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_125 = ___2_mainTreeNodeID;
		int32_t L_126 = ___1_x_id;
		int32_t L_127;
		L_127 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_126, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_125, L_127, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		int32_t L_128 = ___1_x_id;
		___0_root_id = L_128;
		goto IL_030a;
	}

IL_0298:
	{
		V_6 = 0;
		int32_t L_129 = __this->____accessMethod;
		if ((!(((uint32_t)L_129) == ((uint32_t)1))))
		{
			goto IL_02d5;
		}
	}
	{
		int32_t L_130 = ___0_root_id;
		if (!L_130)
		{
			goto IL_02bd;
		}
	}
	{
		int32_t L_131 = ___1_x_id;
		int32_t L_132;
		L_132 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_131, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_133 = V_0;
		int32_t L_134;
		L_134 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_133, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_135;
		L_135 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, __this, L_132, L_134);
		G_B49_0 = L_135;
		goto IL_02d1;
	}

IL_02bd:
	{
		int32_t L_136 = ___1_x_id;
		int32_t L_137;
		L_137 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_136, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_138 = V_0;
		int32_t L_139;
		L_139 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_138, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_140;
		L_140 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5, __this, L_137, L_139);
		G_B49_0 = L_140;
	}

IL_02d1:
	{
		V_6 = G_B49_0;
		goto IL_02f3;
	}

IL_02d5:
	{
		int32_t L_141 = __this->____accessMethod;
		if ((!(((uint32_t)L_141) == ((uint32_t)2))))
		{
			goto IL_02eb;
		}
	}
	{
		int32_t L_142 = ___3_position;
		if ((((int32_t)L_142) <= ((int32_t)0)))
		{
			goto IL_02e6;
		}
	}
	{
		G_B54_0 = 1;
		goto IL_02e7;
	}

IL_02e6:
	{
		G_B54_0 = (-1);
	}

IL_02e7:
	{
		V_6 = G_B54_0;
		goto IL_02f3;
	}

IL_02eb:
	{
		Exception_t* L_143;
		L_143 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)16), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, method);
	}

IL_02f3:
	{
		int32_t L_144 = V_6;
		if ((((int32_t)L_144) >= ((int32_t)0)))
		{
			goto IL_0302;
		}
	}
	{
		int32_t L_145 = V_0;
		int32_t L_146 = ___1_x_id;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_145, L_146, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_030a;
	}

IL_0302:
	{
		int32_t L_147 = V_0;
		int32_t L_148 = ___1_x_id;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_147, L_148, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_030a:
	{
		int32_t L_149 = ___1_x_id;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_149, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_150 = ___1_x_id;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_150, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_151 = ___1_x_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_151, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_152 = ___1_x_id;
		V_1 = L_152;
		goto IL_04ba;
	}

IL_0329:
	{
		int32_t L_153 = ___1_x_id;
		int32_t L_154;
		L_154 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_153, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_155 = ___1_x_id;
		int32_t L_156;
		L_156 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_155, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_157;
		L_157 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_156, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_158;
		L_158 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_157, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_154) == ((uint32_t)L_158))))
		{
			goto IL_0405;
		}
	}
	{
		int32_t L_159 = ___1_x_id;
		int32_t L_160;
		L_160 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_159, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_161;
		L_161 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_160, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_162;
		L_162 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_161, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_162;
		int32_t L_163 = V_0;
		int32_t L_164;
		L_164 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_163, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_164)
		{
			goto IL_03a3;
		}
	}
	{
		int32_t L_165 = ___1_x_id;
		int32_t L_166;
		L_166 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_165, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_166, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_167 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_167, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_168 = ___1_x_id;
		int32_t L_169;
		L_169 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_168, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_170;
		L_170 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_169, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_170, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_171 = ___1_x_id;
		int32_t L_172;
		L_172 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_171, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_173;
		L_173 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_172, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_173;
		goto IL_04ba;
	}

IL_03a3:
	{
		int32_t L_174 = ___1_x_id;
		int32_t L_175 = ___1_x_id;
		int32_t L_176;
		L_176 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_175, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_177;
		L_177 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_176, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((!(((uint32_t)L_174) == ((uint32_t)L_177))))
		{
			goto IL_03c7;
		}
	}
	{
		int32_t L_178 = ___1_x_id;
		int32_t L_179;
		L_179 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_178, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_179;
		int32_t L_180 = ___0_root_id;
		int32_t L_181 = ___1_x_id;
		int32_t L_182 = ___2_mainTreeNodeID;
		int32_t L_183;
		L_183 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_180, L_181, L_182, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_183;
	}

IL_03c7:
	{
		int32_t L_184 = ___1_x_id;
		int32_t L_185;
		L_185 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_184, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_185, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_186 = ___1_x_id;
		int32_t L_187;
		L_187 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_186, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_188;
		L_188 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_187, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_188, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_189 = ___0_root_id;
		int32_t L_190 = ___1_x_id;
		int32_t L_191;
		L_191 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_190, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_192;
		L_192 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_191, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_193 = ___2_mainTreeNodeID;
		int32_t L_194;
		L_194 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_189, L_192, L_193, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_194;
		goto IL_04ba;
	}

IL_0405:
	{
		int32_t L_195 = ___1_x_id;
		int32_t L_196;
		L_196 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_195, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_197;
		L_197 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_196, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_198;
		L_198 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_197, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_198;
		int32_t L_199 = V_0;
		int32_t L_200;
		L_200 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_199, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_200)
		{
			goto IL_045d;
		}
	}
	{
		int32_t L_201 = ___1_x_id;
		int32_t L_202;
		L_202 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_201, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_202, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_203 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_203, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_204 = ___1_x_id;
		int32_t L_205;
		L_205 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_204, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_206;
		L_206 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_205, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_206, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_207 = ___1_x_id;
		int32_t L_208;
		L_208 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_207, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_209;
		L_209 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_208, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_209;
		goto IL_04ba;
	}

IL_045d:
	{
		int32_t L_210 = ___1_x_id;
		int32_t L_211 = ___1_x_id;
		int32_t L_212;
		L_212 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_211, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_213;
		L_213 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_212, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_210) == ((uint32_t)L_213))))
		{
			goto IL_0481;
		}
	}
	{
		int32_t L_214 = ___1_x_id;
		int32_t L_215;
		L_215 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_214, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_215;
		int32_t L_216 = ___0_root_id;
		int32_t L_217 = ___1_x_id;
		int32_t L_218 = ___2_mainTreeNodeID;
		int32_t L_219;
		L_219 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_216, L_217, L_218, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_219;
	}

IL_0481:
	{
		int32_t L_220 = ___1_x_id;
		int32_t L_221;
		L_221 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_220, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_221, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_222 = ___1_x_id;
		int32_t L_223;
		L_223 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_222, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_224;
		L_224 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_223, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_224, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_225 = ___0_root_id;
		int32_t L_226 = ___1_x_id;
		int32_t L_227;
		L_227 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_226, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_228;
		L_228 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_227, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_229 = ___2_mainTreeNodeID;
		int32_t L_230;
		L_230 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_225, L_228, L_229, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_230;
	}

IL_04ba:
	{
		int32_t L_231 = ___1_x_id;
		int32_t L_232;
		L_232 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_231, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_233;
		L_233 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_232, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_233)
		{
			goto IL_0329;
		}
	}
	{
		int32_t L_234 = ___0_root_id;
		if (L_234)
		{
			goto IL_04de;
		}
	}
	{
		int32_t L_235 = __this->___root;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_235, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		goto IL_04e6;
	}

IL_04de:
	{
		int32_t L_236 = ___0_root_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_236, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
	}

IL_04e6:
	{
		int32_t L_237 = ___0_root_id;
		return L_237;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_UpdateNodeKey_m90FF8C96E5A0A272D878A6CB88DEE893A34E6830_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_currentKey, int32_t ___1_newKey, const RuntimeMethod* method) 
{
	NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_currentKey;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1;
		L_1 = RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_0 = L_1;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_2 = V_0;
		int32_t L_3 = L_2.____nodeID;
		int32_t L_4;
		L_4 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_5 = V_0;
		int32_t L_6 = L_5.____nodeID;
		int32_t L_7 = __this->___root;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0031;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_8 = V_0;
		int32_t L_9 = L_8.____mainTreeNodeID;
		int32_t L_10 = ___1_newKey;
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
	}

IL_0031:
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_11 = V_0;
		int32_t L_12 = L_11.____nodeID;
		int32_t L_13 = ___1_newKey;
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_12, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_i;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1;
		L_1 = RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_0 = L_1;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_2 = V_0;
		int32_t L_3 = L_2.____nodeID;
		int32_t L_4;
		L_4 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_5 = V_0;
		int32_t L_6 = L_5.____nodeID;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_7 = V_0;
		int32_t L_8 = L_7.____mainTreeNodeID;
		int32_t L_9;
		L_9 = RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC(__this, 0, L_6, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDelete_mD650E7F92013005A24CE586C4FC1B71EE3D279C7_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_z_id, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_z_id;
		int32_t L_1;
		L_1 = RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC(__this, 0, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_z_id;
		int32_t L_1;
		L_1 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___1_z_id;
		int32_t L_3;
		L_3 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_4 = ___1_z_id;
		int32_t L_5;
		L_5 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_6 = ___1_z_id;
		int32_t L_7;
		L_7 = RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC(__this, L_3, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_7;
	}

IL_0021:
	{
		V_3 = (bool)0;
		int32_t L_8 = __this->____accessMethod;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = ___1_z_id;
		G_B5_0 = L_9;
		goto IL_0030;
	}

IL_002f:
	{
		int32_t L_10 = ___2_mainTreeNodeID;
		G_B5_0 = L_10;
	}

IL_0030:
	{
		V_4 = G_B5_0;
		int32_t L_11 = V_4;
		int32_t L_12;
		L_12 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_13 = V_4;
		int32_t L_14;
		L_14 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		___0_root_id = L_14;
	}

IL_0046:
	{
		int32_t L_15 = V_4;
		int32_t L_16;
		L_16 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_17;
		L_17 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0073;
	}

IL_005b:
	{
		int32_t L_18 = V_4;
		int32_t L_19;
		L_19 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_20;
		L_20 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Exception_t* L_21;
		L_21 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0073:
	{
		int32_t L_22 = ___1_z_id;
		int32_t L_23;
		L_23 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_23)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_24 = ___1_z_id;
		int32_t L_25;
		L_25 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (L_25)
		{
			goto IL_0089;
		}
	}

IL_0085:
	{
		int32_t L_26 = ___1_z_id;
		V_1 = L_26;
		goto IL_0091;
	}

IL_0089:
	{
		int32_t L_27 = ___1_z_id;
		int32_t L_28;
		L_28 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_28;
	}

IL_0091:
	{
		int32_t L_29 = V_1;
		int32_t L_30;
		L_30 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_30)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_1;
		int32_t L_32;
		L_32 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_32;
		goto IL_00ac;
	}

IL_00a4:
	{
		int32_t L_33 = V_1;
		int32_t L_34;
		L_34 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_34;
	}

IL_00ac:
	{
		int32_t L_35 = V_1;
		int32_t L_36;
		L_36 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_2 = L_36;
		int32_t L_37 = V_0;
		if (!L_37)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_2;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_38, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_00bf:
	{
		int32_t L_40 = V_2;
		if (L_40)
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_41 = ___0_root_id;
		if (L_41)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_42 = V_0;
		__this->___root = L_42;
		goto IL_00ef;
	}

IL_00ce:
	{
		int32_t L_43 = V_0;
		___0_root_id = L_43;
		goto IL_00ef;
	}

IL_00d3:
	{
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		int32_t L_46;
		L_46 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_44) == ((uint32_t)L_46))))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_0;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_47, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_00ef;
	}

IL_00e7:
	{
		int32_t L_49 = V_2;
		int32_t L_50 = V_0;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_49, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_00ef:
	{
		int32_t L_51 = V_1;
		int32_t L_52 = ___1_z_id;
		if ((((int32_t)L_51) == ((int32_t)L_52)))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_53 = ___1_z_id;
		int32_t L_54 = V_1;
		int32_t L_55;
		L_55 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_53, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		int32_t L_56 = ___1_z_id;
		int32_t L_57 = V_1;
		int32_t L_58;
		L_58 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_57, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_56, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
	}

IL_010f:
	{
		int32_t L_59 = V_4;
		int32_t L_60;
		L_60 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_60)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_61 = ___0_root_id;
		if (L_61)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_62 = ___1_z_id;
		int32_t L_63 = V_4;
		if ((((int32_t)L_62) == ((int32_t)L_63)))
		{
			goto IL_0128;
		}
	}
	{
		Exception_t* L_64;
		L_64 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, method);
	}

IL_0128:
	{
		int32_t L_65 = ___0_root_id;
		if (!L_65)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_66 = V_4;
		int32_t L_67 = ___0_root_id;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_66, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_68 = V_4;
		int32_t L_69 = ___0_root_id;
		int32_t L_70;
		L_70 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_69, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_68, L_70, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
	}

IL_0143:
	{
		int32_t L_71 = V_2;
		V_5 = L_71;
		goto IL_015a;
	}

IL_0148:
	{
		int32_t L_72 = V_5;
		RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A(__this, L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		int32_t L_73 = V_5;
		int32_t L_74;
		L_74 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_73, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_5 = L_74;
	}

IL_015a:
	{
		int32_t L_75 = V_5;
		if (L_75)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_76 = ___0_root_id;
		if (!L_76)
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_77 = V_4;
		V_6 = L_77;
		goto IL_0179;
	}

IL_0167:
	{
		int32_t L_78 = V_6;
		RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F(__this, L_78, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		int32_t L_79 = V_6;
		int32_t L_80;
		L_80 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_79, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_6 = L_80;
	}

IL_0179:
	{
		int32_t L_81 = V_6;
		if (L_81)
		{
			goto IL_0167;
		}
	}

IL_017d:
	{
		int32_t L_82 = V_1;
		int32_t L_83;
		L_83 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_82, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0193;
		}
	}
	{
		int32_t L_84 = ___0_root_id;
		int32_t L_85 = V_0;
		int32_t L_86 = V_2;
		int32_t L_87 = ___2_mainTreeNodeID;
		int32_t L_88;
		L_88 = RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89(__this, L_84, L_85, L_86, L_87, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		___0_root_id = L_88;
	}

IL_0193:
	{
		bool L_89 = V_3;
		if (!L_89)
		{
			goto IL_02af;
		}
	}
	{
		int32_t L_90 = V_4;
		if (!L_90)
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_91 = V_4;
		int32_t L_92;
		L_92 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_91, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_93;
		L_93 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_92, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((((int32_t)L_93) == ((int32_t)1)))
		{
			goto IL_01b6;
		}
	}

IL_01ae:
	{
		Exception_t* L_94;
		L_94 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)9), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, method);
	}

IL_01b6:
	{
		int32_t L_95 = __this->____inUseSatelliteTreeCount;
		__this->____inUseSatelliteTreeCount = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		int32_t L_96 = V_4;
		int32_t L_97;
		L_97 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_96, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_7 = L_97;
		int32_t L_98 = V_7;
		int32_t L_99 = V_4;
		int32_t L_100;
		L_100 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_99, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_98, L_100, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_101 = V_7;
		int32_t L_102 = V_4;
		int32_t L_103;
		L_103 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_102, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_101, L_103, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_104 = V_7;
		int32_t L_105 = V_4;
		int32_t L_106;
		L_106 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_105, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(__this, L_104, L_106, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_107 = V_7;
		int32_t L_108 = V_4;
		int32_t L_109;
		L_109 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_108, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_107, L_109, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_110 = V_4;
		int32_t L_111;
		L_111 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_110, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (!L_111)
		{
			goto IL_025c;
		}
	}
	{
		int32_t L_112 = V_7;
		int32_t L_113 = V_4;
		int32_t L_114;
		L_114 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_113, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_112, L_114, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_115 = V_4;
		int32_t L_116;
		L_116 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_115, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_117;
		L_117 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_116, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_118 = V_4;
		if ((!(((uint32_t)L_117) == ((uint32_t)L_118))))
		{
			goto IL_024c;
		}
	}
	{
		int32_t L_119 = V_4;
		int32_t L_120;
		L_120 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_119, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_121 = V_7;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_120, L_121, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_025c;
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		int32_t L_123;
		L_123 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_122, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_124 = V_7;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_123, L_124, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_025c:
	{
		int32_t L_125 = V_4;
		int32_t L_126;
		L_126 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_125, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_126)
		{
			goto IL_0276;
		}
	}
	{
		int32_t L_127 = V_4;
		int32_t L_128;
		L_128 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_127, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_129 = V_7;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_128, L_129, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0276:
	{
		int32_t L_130 = V_4;
		int32_t L_131;
		L_131 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_130, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_131)
		{
			goto IL_0290;
		}
	}
	{
		int32_t L_132 = V_4;
		int32_t L_133;
		L_133 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_132, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_134 = V_7;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_133, L_134, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0290:
	{
		int32_t L_135 = __this->___root;
		int32_t L_136 = V_4;
		if ((!(((uint32_t)L_135) == ((uint32_t)L_136))))
		{
			goto IL_02a2;
		}
	}
	{
		int32_t L_137 = V_7;
		__this->___root = L_137;
	}

IL_02a2:
	{
		int32_t L_138 = V_4;
		RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD(__this, L_138, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_4 = 0;
		goto IL_02e4;
	}

IL_02af:
	{
		int32_t L_139 = V_4;
		int32_t L_140;
		L_140 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_139, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_140)
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_141 = ___0_root_id;
		if (L_141)
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_142 = ___1_z_id;
		int32_t L_143 = V_4;
		if ((((int32_t)L_142) == ((int32_t)L_143)))
		{
			goto IL_02c9;
		}
	}
	{
		Exception_t* L_144;
		L_144 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144, method);
	}

IL_02c9:
	{
		int32_t L_145 = ___0_root_id;
		if (!L_145)
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_146 = V_4;
		int32_t L_147 = ___0_root_id;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_146, L_147, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_148 = V_4;
		int32_t L_149 = ___0_root_id;
		int32_t L_150;
		L_150 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_149, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_148, L_150, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
	}

IL_02e4:
	{
		int32_t L_151 = V_1;
		int32_t L_152 = ___1_z_id;
		if ((((int32_t)L_151) == ((int32_t)L_152)))
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_153 = V_1;
		int32_t L_154 = ___1_z_id;
		int32_t L_155;
		L_155 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_154, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_153, L_155, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_156 = V_1;
		int32_t L_157 = ___1_z_id;
		int32_t L_158;
		L_158 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_157, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_156, L_158, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_159 = V_1;
		int32_t L_160 = ___1_z_id;
		int32_t L_161;
		L_161 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_160, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_159, L_161, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_162 = V_1;
		int32_t L_163 = ___1_z_id;
		int32_t L_164;
		L_164 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_163, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(__this, L_162, L_164, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_165 = ___1_z_id;
		int32_t L_166;
		L_166 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_165, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (!L_166)
		{
			goto IL_036a;
		}
	}
	{
		int32_t L_167 = V_1;
		int32_t L_168 = ___1_z_id;
		int32_t L_169;
		L_169 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_168, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_167, L_169, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_170 = ___1_z_id;
		int32_t L_171;
		L_171 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_170, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_172;
		L_172 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_171, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_173 = ___1_z_id;
		if ((!(((uint32_t)L_172) == ((uint32_t)L_173))))
		{
			goto IL_035a;
		}
	}
	{
		int32_t L_174 = ___1_z_id;
		int32_t L_175;
		L_175 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_174, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_176 = V_1;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_175, L_176, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0372;
	}

IL_035a:
	{
		int32_t L_177 = ___1_z_id;
		int32_t L_178;
		L_178 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_177, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_179 = V_1;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_178, L_179, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		goto IL_0372;
	}

IL_036a:
	{
		int32_t L_180 = V_1;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_180, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0372:
	{
		int32_t L_181 = ___1_z_id;
		int32_t L_182;
		L_182 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_181, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_182)
		{
			goto IL_0389;
		}
	}
	{
		int32_t L_183 = ___1_z_id;
		int32_t L_184;
		L_184 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_183, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_185 = V_1;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_184, L_185, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0389:
	{
		int32_t L_186 = ___1_z_id;
		int32_t L_187;
		L_187 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_186, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_187)
		{
			goto IL_03a0;
		}
	}
	{
		int32_t L_188 = ___1_z_id;
		int32_t L_189;
		L_189 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_188, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_190 = V_1;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_189, L_190, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_03a0:
	{
		int32_t L_191 = __this->___root;
		int32_t L_192 = ___1_z_id;
		if ((!(((uint32_t)L_191) == ((uint32_t)L_192))))
		{
			goto IL_03b2;
		}
	}
	{
		int32_t L_193 = V_1;
		__this->___root = L_193;
		goto IL_03b9;
	}

IL_03b2:
	{
		int32_t L_194 = ___0_root_id;
		int32_t L_195 = ___1_z_id;
		if ((!(((uint32_t)L_194) == ((uint32_t)L_195))))
		{
			goto IL_03b9;
		}
	}
	{
		int32_t L_196 = V_1;
		___0_root_id = L_196;
	}

IL_03b9:
	{
		int32_t L_197 = V_4;
		if (!L_197)
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_198 = V_4;
		int32_t L_199;
		L_199 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_198, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_200 = ___1_z_id;
		if ((!(((uint32_t)L_199) == ((uint32_t)L_200))))
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_201, L_202, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
	}

IL_03d1:
	{
		int32_t L_203 = ___1_z_id;
		RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD(__this, L_203, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		int32_t L_204 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_204, 1));
		int32_t L_205 = ___1_z_id;
		return L_205;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B52_0 = 0;
	int32_t G_B56_0 = 0;
	int32_t G_B60_0 = 0;
	{
		int32_t L_0 = ___1_x_id;
		if (L_0)
		{
			goto IL_0305;
		}
	}
	{
		int32_t L_1 = ___2_px_id;
		if (L_1)
		{
			goto IL_0305;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_2 = ___1_x_id;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___1_x_id;
		int32_t L_4 = ___1_x_id;
		int32_t L_5;
		L_5 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_6;
		L_6 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((((int32_t)L_3) == ((int32_t)L_6)))
		{
			goto IL_0033;
		}
	}

IL_0021:
	{
		int32_t L_7 = ___1_x_id;
		if (L_7)
		{
			goto IL_0168;
		}
	}
	{
		int32_t L_8 = ___2_px_id;
		int32_t L_9;
		L_9 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_9)
		{
			goto IL_0168;
		}
	}

IL_0033:
	{
		int32_t L_10 = ___1_x_id;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_13;
		L_13 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B10_0 = L_13;
		goto IL_004c;
	}

IL_0045:
	{
		int32_t L_14 = ___2_px_id;
		int32_t L_15;
		L_15 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B10_0 = L_15;
	}

IL_004c:
	{
		V_0 = G_B10_0;
		int32_t L_16 = V_0;
		if (L_16)
		{
			goto IL_0058;
		}
	}
	{
		Exception_t* L_17;
		L_17 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)14), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0058:
	{
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_19)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_20 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_20, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_21 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_21, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_22 = ___0_root_id;
		int32_t L_23 = ___2_px_id;
		int32_t L_24 = ___3_mainTreeNodeID;
		int32_t L_25;
		L_25 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_22, L_23, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_25;
		int32_t L_26 = ___1_x_id;
		if (!L_26)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_29;
		L_29 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B16_0 = L_29;
		goto IL_0096;
	}

IL_008f:
	{
		int32_t L_30 = ___2_px_id;
		int32_t L_31;
		L_31 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B16_0 = L_31;
	}

IL_0096:
	{
		V_0 = G_B16_0;
	}

IL_0097:
	{
		int32_t L_32 = V_0;
		int32_t L_33;
		L_33 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_34;
		L_34 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_35 = V_0;
		int32_t L_36;
		L_36 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_37;
		L_37 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_38 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_38, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_39 = ___2_px_id;
		___1_x_id = L_39;
		int32_t L_40 = ___2_px_id;
		int32_t L_41;
		L_41 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_41;
		goto IL_0305;
	}

IL_00d0:
	{
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_44;
		L_44 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_45 = V_0;
		int32_t L_46;
		L_46 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_46, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_47 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_47, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_48 = ___0_root_id;
		int32_t L_49 = V_0;
		int32_t L_50 = ___3_mainTreeNodeID;
		int32_t L_51;
		L_51 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_48, L_49, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_51;
		int32_t L_52 = ___1_x_id;
		if (!L_52)
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_53 = ___1_x_id;
		int32_t L_54;
		L_54 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_55;
		L_55 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B24_0 = L_55;
		goto IL_011b;
	}

IL_0114:
	{
		int32_t L_56 = ___2_px_id;
		int32_t L_57;
		L_57 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B24_0 = L_57;
	}

IL_011b:
	{
		V_0 = G_B24_0;
	}

IL_011c:
	{
		int32_t L_58 = V_0;
		int32_t L_59 = ___2_px_id;
		int32_t L_60;
		L_60 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_58, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_61 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_61, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_62 = V_0;
		int32_t L_63;
		L_63 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_63, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_64 = ___0_root_id;
		int32_t L_65 = ___2_px_id;
		int32_t L_66 = ___3_mainTreeNodeID;
		int32_t L_67;
		L_67 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_64, L_65, L_66, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_67;
		int32_t L_68 = ___0_root_id;
		if (!L_68)
		{
			goto IL_0152;
		}
	}
	{
		int32_t L_69 = ___0_root_id;
		G_B28_0 = L_69;
		goto IL_0158;
	}

IL_0152:
	{
		int32_t L_70 = __this->___root;
		G_B28_0 = L_70;
	}

IL_0158:
	{
		___1_x_id = G_B28_0;
		int32_t L_71 = ___1_x_id;
		int32_t L_72;
		L_72 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_72;
		goto IL_0305;
	}

IL_0168:
	{
		int32_t L_73 = ___2_px_id;
		int32_t L_74;
		L_74 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_73, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_74;
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_76)
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_77 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_77, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_78 = ___1_x_id;
		if (!L_78)
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_79 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_79, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_80 = ___0_root_id;
		int32_t L_81 = ___2_px_id;
		int32_t L_82 = ___3_mainTreeNodeID;
		int32_t L_83;
		L_83 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_80, L_81, L_82, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_83;
		int32_t L_84 = ___1_x_id;
		if (!L_84)
		{
			goto IL_01aa;
		}
	}
	{
		int32_t L_85 = ___1_x_id;
		int32_t L_86;
		L_86 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_85, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_87;
		L_87 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_86, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B34_0 = L_87;
		goto IL_01b1;
	}

IL_01aa:
	{
		int32_t L_88 = ___2_px_id;
		int32_t L_89;
		L_89 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_88, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B34_0 = L_89;
	}

IL_01b1:
	{
		V_0 = G_B34_0;
		goto IL_01ed;
	}

IL_01b4:
	{
		int32_t L_90 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_90, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_91 = ___0_root_id;
		int32_t L_92 = ___2_px_id;
		int32_t L_93 = ___3_mainTreeNodeID;
		int32_t L_94;
		L_94 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_91, L_92, L_93, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_94;
		int32_t L_95 = ___1_x_id;
		if (!L_95)
		{
			goto IL_01da;
		}
	}
	{
		int32_t L_96 = ___1_x_id;
		int32_t L_97;
		L_97 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_96, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_98;
		L_98 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_97, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B38_0 = L_98;
		goto IL_01e1;
	}

IL_01da:
	{
		int32_t L_99 = ___2_px_id;
		int32_t L_100;
		L_100 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_99, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B38_0 = L_100;
	}

IL_01e1:
	{
		V_0 = G_B38_0;
		int32_t L_101 = V_0;
		if (L_101)
		{
			goto IL_01ed;
		}
	}
	{
		Exception_t* L_102;
		L_102 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)11), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_102, method);
	}

IL_01ed:
	{
		int32_t L_103 = V_0;
		int32_t L_104;
		L_104 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_103, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_105;
		L_105 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_104, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_105) == ((uint32_t)1))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_106, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_108;
		L_108 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_107, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_108) == ((uint32_t)1))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_109 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_109, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_110 = ___2_px_id;
		___1_x_id = L_110;
		int32_t L_111 = ___2_px_id;
		int32_t L_112;
		L_112 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_111, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_112;
		goto IL_0305;
	}

IL_0226:
	{
		int32_t L_113 = V_0;
		int32_t L_114;
		L_114 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_113, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_115;
		L_115 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_114, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_115) == ((uint32_t)1))))
		{
			goto IL_0272;
		}
	}
	{
		int32_t L_116 = V_0;
		int32_t L_117;
		L_117 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_116, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_117, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_118 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_118, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_119 = ___0_root_id;
		int32_t L_120 = V_0;
		int32_t L_121 = ___3_mainTreeNodeID;
		int32_t L_122;
		L_122 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_119, L_120, L_121, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_122;
		int32_t L_123 = ___1_x_id;
		if (!L_123)
		{
			goto IL_026a;
		}
	}
	{
		int32_t L_124 = ___1_x_id;
		int32_t L_125;
		L_125 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_124, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_126;
		L_126 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_125, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B47_0 = L_126;
		goto IL_0271;
	}

IL_026a:
	{
		int32_t L_127 = ___2_px_id;
		int32_t L_128;
		L_128 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_127, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B47_0 = L_128;
	}

IL_0271:
	{
		V_0 = G_B47_0;
	}

IL_0272:
	{
		int32_t L_129 = ___1_x_id;
		if (!L_129)
		{
			goto IL_02be;
		}
	}
	{
		int32_t L_130 = V_0;
		int32_t L_131 = ___2_px_id;
		int32_t L_132;
		L_132 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_131, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_130, L_132, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_133 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_133, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_134 = V_0;
		int32_t L_135;
		L_135 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_134, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_135, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_136 = ___0_root_id;
		int32_t L_137 = ___2_px_id;
		int32_t L_138 = ___3_mainTreeNodeID;
		int32_t L_139;
		L_139 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_136, L_137, L_138, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_139;
		int32_t L_140 = ___0_root_id;
		if (!L_140)
		{
			goto IL_02ab;
		}
	}
	{
		int32_t L_141 = ___0_root_id;
		G_B52_0 = L_141;
		goto IL_02b1;
	}

IL_02ab:
	{
		int32_t L_142 = __this->___root;
		G_B52_0 = L_142;
	}

IL_02b1:
	{
		___1_x_id = G_B52_0;
		int32_t L_143 = ___1_x_id;
		int32_t L_144;
		L_144 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_143, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_144;
		goto IL_0305;
	}

IL_02be:
	{
		int32_t L_145 = V_0;
		int32_t L_146 = ___2_px_id;
		int32_t L_147;
		L_147 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_146, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_145, L_147, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_148 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_148, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_149 = V_0;
		int32_t L_150;
		L_150 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_149, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_150, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_151 = ___0_root_id;
		int32_t L_152 = ___2_px_id;
		int32_t L_153 = ___3_mainTreeNodeID;
		int32_t L_154;
		L_154 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_151, L_152, L_153, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_154;
		int32_t L_155 = ___0_root_id;
		if (!L_155)
		{
			goto IL_02f4;
		}
	}
	{
		int32_t L_156 = ___0_root_id;
		G_B56_0 = L_156;
		goto IL_02fa;
	}

IL_02f4:
	{
		int32_t L_157 = __this->___root;
		G_B56_0 = L_157;
	}

IL_02fa:
	{
		___1_x_id = G_B56_0;
		int32_t L_158 = ___1_x_id;
		int32_t L_159;
		L_159 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_158, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_159;
	}

IL_0305:
	{
		int32_t L_160 = ___0_root_id;
		if (!L_160)
		{
			goto IL_030b;
		}
	}
	{
		int32_t L_161 = ___0_root_id;
		G_B60_0 = L_161;
		goto IL_0311;
	}

IL_030b:
	{
		int32_t L_162 = __this->___root;
		G_B60_0 = L_162;
	}

IL_0311:
	{
		int32_t L_163 = ___1_x_id;
		if ((((int32_t)G_B60_0) == ((int32_t)L_163)))
		{
			goto IL_0321;
		}
	}
	{
		int32_t L_164 = ___1_x_id;
		int32_t L_165;
		L_165 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_164, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((((int32_t)L_165) == ((int32_t)1)))
		{
			goto IL_000e;
		}
	}

IL_0321:
	{
		int32_t L_166 = ___1_x_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_166, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_167 = ___0_root_id;
		return L_167;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = ___0_root_id;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->____accessMethod;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		Exception_t* L_2;
		L_2 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)17), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_root_id;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = ___0_root_id;
		G_B6_0 = L_4;
		goto IL_0020;
	}

IL_001a:
	{
		int32_t L_5 = __this->___root;
		G_B6_0 = L_5;
	}

IL_0020:
	{
		V_0 = G_B6_0;
		goto IL_005e;
	}

IL_0023:
	{
		int32_t L_6 = ___0_root_id;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___1_key;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_10;
		L_10 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, __this, L_7, L_9);
		G_B10_0 = L_10;
		goto IL_0044;
	}

IL_0036:
	{
		int32_t L_11 = ___1_key;
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_14;
		L_14 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5, __this, L_11, L_13);
		G_B10_0 = L_14;
	}

IL_0044:
	{
		V_1 = G_B10_0;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_17 = V_0;
		int32_t L_18;
		L_18 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_18;
		goto IL_005e;
	}

IL_0056:
	{
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_20;
	}

IL_005e:
	{
		int32_t L_21 = V_0;
		if (L_21)
		{
			goto IL_0023;
		}
	}

IL_0061:
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_get_Item_m6CB743851EBBBD1D9007D28700324EA0002F3107_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1;
		L_1 = RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_2 = L_1.____nodeID;
		int32_t L_3;
		L_3 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_6 = ___0_key;
		int32_t L_7;
		L_7 = RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2(__this, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		int32_t L_8 = V_0;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3((&L_9), L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_9;
	}

IL_0027:
	{
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_1 = L_11;
		int32_t L_12 = ___0_key;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), &L_13);
		bool L_15;
		L_15 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B((&V_1), L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		if (L_15)
		{
			goto IL_0046;
		}
	}
	{
		V_0 = 0;
	}

IL_0046:
	{
		int32_t L_16 = V_0;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_17;
		memset((&L_17), 0, sizeof(L_17));
		NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3((&L_17), L_16, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByKey_mB3893DE20533883A9097426F8B65C6548CE78176_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (-1);
		int32_t L_0 = ___0_key;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1;
		L_1 = RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_1 = L_1;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_2 = V_1;
		int32_t L_3 = L_2.____nodeID;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_4 = V_1;
		int32_t L_5;
		L_5 = RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		V_0 = L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_node, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___0_node;
		int32_t L_2;
		L_2 = RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___0_node;
		int32_t L_4;
		L_4 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = ___0_node;
		int32_t L_6;
		L_6 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_6;
	}

IL_0021:
	{
		int32_t L_7 = ___0_node;
		int32_t L_8;
		L_8 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_9;
		L_9 = RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2(__this, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_0 = L_9;
		int32_t L_10 = V_0;
		int32_t L_11 = ___0_node;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_12 = ___0_node;
		int32_t L_13;
		L_13 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_13;
	}

IL_003c:
	{
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		int32_t L_16 = ___0_node;
		int32_t L_17;
		L_17 = RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return ((int32_t)il2cpp_codegen_add(L_15, L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 ___0_path, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1 = ___0_path;
		int32_t L_2 = L_1.____nodeID;
		int32_t L_3;
		L_3 = RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return L_3;
	}

IL_0015:
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_4 = ___0_path;
		int32_t L_5 = L_4.____mainTreeNodeID;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_6 = ___0_path;
		int32_t L_7 = L_6.____nodeID;
		int32_t L_8;
		L_8 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_8;
	}

IL_002a:
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_9 = ___0_path;
		int32_t L_10 = L_9.____mainTreeNodeID;
		int32_t L_11;
		L_11 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_12 = ___0_path;
		int32_t L_13 = L_12.____nodeID;
		int32_t L_14;
		L_14 = RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return ((int32_t)il2cpp_codegen_add(L_11, L_14));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_2;
		goto IL_0037;
	}

IL_0010:
	{
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_1 = L_4;
		int32_t L_5 = ___0_nodeId;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_11;
		L_11 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_add(L_11, 1))));
	}

IL_0034:
	{
		int32_t L_12 = V_1;
		___0_nodeId = L_12;
	}

IL_0037:
	{
		int32_t L_13 = ___0_nodeId;
		if (L_13)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_2;
		goto IL_004f;
	}

IL_0010:
	{
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_1 = L_4;
		int32_t L_5 = ___0_nodeId;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_11;
		L_11 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_13)
		{
			G_B4_0 = L_11;
			G_B4_1 = L_8;
			goto IL_0048;
		}
		G_B3_0 = L_11;
		G_B3_1 = L_8;
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_16;
		L_16 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B5_0 = L_16;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0049;
	}

IL_0048:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0049:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B5_2, ((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0))));
	}

IL_004c:
	{
		int32_t L_17 = V_1;
		___0_nodeId = L_17;
	}

IL_004f:
	{
		int32_t L_18 = ___0_nodeId;
		if (L_18)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_userIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->___root;
		int32_t L_2 = ___0_userIndex;
		int32_t L_3;
		L_3 = RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064(__this, L_1, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		V_0 = L_3;
		V_1 = 0;
		goto IL_0026;
	}

IL_001c:
	{
		int32_t L_4 = ___0_userIndex;
		int32_t L_5;
		L_5 = RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751(__this, L_4, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_5;
	}

IL_0026:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_7 = __this->____accessMethod;
		if ((!(((uint32_t)2) == ((uint32_t)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___0_userIndex;
		Exception_t* L_9;
		L_9 = ExceptionBuilder_RowOutOfRange_m2F6883E5D2F9AF63A3F9DC5521799A7E270F1054(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0039:
	{
		Exception_t* L_10;
		L_10 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3((&L_13), L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t* L_1 = ___1_satelliteRootId;
		*((int32_t*)L_1) = (int32_t)0;
		int32_t L_2 = __this->___root;
		V_0 = L_2;
		V_1 = (-1);
		goto IL_0088;
	}

IL_0013:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_6;
		goto IL_0088;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14;
		L_14 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_15;
		L_15 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((((int32_t)L_11) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_12, L_15)), 1)))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_16 = ___1_satelliteRootId;
		int32_t L_17 = V_0;
		*((int32_t*)L_16) = (int32_t)L_17;
		int32_t L_18 = ___0_index;
		int32_t L_19 = V_1;
		___0_index = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), 1));
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_22 = ___0_index;
		int32_t L_23;
		L_23 = RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064(__this, L_21, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return L_23;
	}

IL_005b:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (L_25)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_26 = ___0_index;
		int32_t L_27 = V_1;
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_26, L_27));
		goto IL_0080;
	}

IL_006b:
	{
		int32_t L_28 = ___0_index;
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_32;
		L_32 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_32)), 1))));
	}

IL_0080:
	{
		int32_t L_33 = V_0;
		int32_t L_34;
		L_34 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_34;
	}

IL_0088:
	{
		int32_t L_35 = V_0;
		if (!L_35)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_38;
		L_38 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		V_1 = L_39;
		int32_t L_40 = ___0_index;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_41 = V_0;
		int32_t L_42;
		L_42 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (L_42)
		{
			goto IL_0013;
		}
	}

IL_00ae:
	{
		int32_t L_43 = V_0;
		return L_43;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_002f;
	}

IL_0002:
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = ___1_index;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_6 = V_0;
		___0_x_id = L_6;
		goto IL_002f;
	}

IL_001d:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_9 = ___0_x_id;
		int32_t L_10;
		L_10 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		___0_x_id = L_10;
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_1;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
	}

IL_002f:
	{
		int32_t L_13 = ___0_x_id;
		if (L_13)
		{
			goto IL_0002;
		}
	}

IL_0032:
	{
		int32_t L_14 = ___0_x_id;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Insert_m42434109EC7D9962C6C5C151208BB39B7F503419_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, 0, L_2, 0, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Add_m89D1F5C6465A94C01A47855B3966C06B69E55969_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, 0, L_2, 0, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTree_1_GetEnumerator_m69FD7C9F88127D1B135BFEA11640F79995101010_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) 
{
	{
		RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115 L_0;
		memset((&L_0), 0, sizeof(L_0));
		RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 60), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		int32_t L_0 = ___0_nodeId;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1 = ___0_nodeId;
		int32_t L_2;
		L_2 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), &L_3);
		int32_t L_5 = ___1_item;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), &L_6);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)L_7))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_8 = ___0_nodeId;
		int32_t L_9;
		L_9 = RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_9;
	}

IL_0021:
	{
		int32_t L_10 = ___0_nodeId;
		int32_t L_11;
		L_11 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_12 = ___1_item;
		int32_t L_13;
		L_13 = RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74(__this, L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		int32_t L_14 = L_13;
		V_0 = L_14;
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}

IL_0036:
	{
		int32_t L_16 = ___0_nodeId;
		int32_t L_17;
		L_17 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_18 = ___1_item;
		int32_t L_19;
		L_19 = RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74(__this, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		int32_t L_20 = L_19;
		V_0 = L_20;
		int32_t L_21 = V_0;
		return L_21;
	}

IL_004b:
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Insert_m0A0F524F3BD046708BD7A5DB13A4AA939D96D31C_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_position;
		int32_t L_1 = ___1_item;
		int32_t L_2;
		L_2 = RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F(__this, L_0, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, int32_t ___1_item, bool ___2_append, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___0_position;
		bool L_4 = ___2_append;
		int32_t L_5;
		L_5 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, 0, L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RemoveAt_m08FF17CF03AA93867AE42791691F967386AFB716_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_position;
		int32_t L_1;
		L_1 = RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_Clear_m2FC29230F5DF876A67B0ABDCA2D2DE205166C385_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) 
{
	{
		RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_CopyTo_m8A396AD86818911F4C70E42BB8969FC6584093A3_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		int32_t L_4;
		L_4 = RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		V_0 = L_4;
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_5, NULL);
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003a;
		}
	}
	{
		Exception_t* L_9;
		L_9 = ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_003a:
	{
		int32_t L_10 = __this->___root;
		int32_t L_11;
		L_11 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_11;
		V_2 = 0;
		goto IL_006c;
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), &L_15);
		int32_t L_17 = ___1_index;
		int32_t L_18 = V_2;
		NullCheck(L_12);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_12, L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), NULL);
		int32_t L_19 = V_1;
		int32_t L_20;
		L_20 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_006c:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_CopyTo_mF41FDE1C3EB16CBA24B3F43FB7590B27E8612500_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		int32_t L_4;
		L_4 = RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		V_0 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		Exception_t* L_8;
		L_8 = ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		int32_t L_9 = __this->___root;
		int32_t L_10;
		L_10 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_10;
		V_2 = 0;
		goto IL_0064;
	}

IL_0048:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_13))), (int32_t)L_15);
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_17;
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0064:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0048;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_rightNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____rightId = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_leftNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____leftId = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_parentNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____parentId = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_color;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nodeColor = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_key, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_key;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____keyOfNode = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_nextNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nextId = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_size;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t* L_6 = (int32_t*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize);
		int32_t* L_7 = L_6;
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_5;
		L_5 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_6 = ___0_nodeId;
		int32_t L_7;
		L_7 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_7)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
			goto IL_0033;
		}
		G_B1_0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
	}
	{
		int32_t L_8 = ___0_nodeId;
		int32_t L_9;
		L_9 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_10;
		L_10 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_11 = __this->____pageTable;
		int32_t L_12 = ___0_nodeId;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)(L_12>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_15 = L_14->____slots;
		int32_t L_16 = ___0_nodeId;
		NullCheck(L_15);
		int32_t L_17 = V_0;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_16&((int32_t)65535))))))->____subTreeSize = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t* L_6 = (int32_t*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize);
		int32_t* L_7 = L_6;
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____rightId;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____leftId;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____parentId;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nodeColor;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nextId;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____keyOfNode;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1__ctor_mDC88A4A9DD7DB95610C5C15AEC21E614AB37D778_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_accessMethod, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_accessMethod;
		__this->____accessMethod = L_0;
		RBTree_1_InitTree_mF38DBB7EC2C944A42C6E22B0EE84ABAC77882781(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_InitTree_mF38DBB7EC2C944A42C6E22B0EE84ABAC77882781_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___root = 0;
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = (TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB*)(TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)32));
		__this->____pageTable = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTable), (void*)L_0);
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_1 = __this->____pageTable;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_1)->max_length)), ((int32_t)32))), 1))/((int32_t)32))));
		__this->____pageTableMap = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTableMap), (void*)L_2);
		__this->____inUsePageCount = 0;
		__this->____nextFreePageLine = 0;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3;
		L_3 = RBTree_1_AllocPage_m215B88622A11B25D550D9105F141689D4EB4A839(__this, ((int32_t)32), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_4 = __this->____pageTable;
		NullCheck(L_4);
		int32_t L_5 = 0;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_7 = L_6->____slots;
		NullCheck(L_7);
		((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->____nodeColor = (int32_t)1;
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_8 = __this->____pageTable;
		NullCheck(L_8);
		int32_t L_9 = 0;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->____slotMap;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_12 = __this->____pageTable;
		NullCheck(L_12);
		int32_t L_13 = 0;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		TreePage_set_InUseCount_m8E1B3603F6197A4CC81CE5F9FEC441342EA079DD_inline(L_14, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->____inUseNodeCount = 1;
		__this->____inUseSatelliteTreeCount = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreePage_mD851F770281DBDCB21B4DA2CB84909655F0FA687_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* ___0_page, const RuntimeMethod* method) 
{
	{
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_0 = ___0_page;
		RBTree_1_MarkPageFree_m1D298F02A27F4FBB8095CC09DDC73419066BED45(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_1 = __this->____pageTable;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_2 = ___0_page;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TreePage_get_PageId_mAB3203DD4C550C1E6CDC4DF4367B61A00DC0A367_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, NULL);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*)NULL);
		int32_t L_4 = __this->____inUsePageCount;
		__this->____inUsePageCount = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* RBTree_1_AllocPage_m215B88622A11B25D550D9105F141689D4EB4A839_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = RBTree_1_GetIndexOfPageWithFreeSlot_mB207A5B63C61CA6BA078E59E1E995360C81C43E7(__this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_2 = __this->____pageTable;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_size;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_5 = (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		TreePage__ctor_m6DC52E242F1727514B983F48EF264E12E82574EB(L_5, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*)L_5);
		int32_t L_6 = V_0;
		__this->____nextFreePageLine = ((int32_t)(L_6/((int32_t)32)));
		goto IL_00a9;
	}

IL_0029:
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_7 = __this->____pageTable;
		NullCheck(L_7);
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_8 = (TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB*)(TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_7)->max_length)), 2)));
		V_1 = L_8;
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_9 = __this->____pageTable;
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_10 = V_1;
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_11 = __this->____pageTable;
		NullCheck(L_11);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_12 = V_1;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_12)->max_length)), ((int32_t)32))), 1))/((int32_t)32))));
		V_2 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____pageTableMap;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____pageTableMap;
		NullCheck(L_16);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, 0, ((int32_t)(((RuntimeArray*)L_16)->max_length)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____pageTableMap;
		NullCheck(L_17);
		__this->____nextFreePageLine = ((int32_t)(((RuntimeArray*)L_17)->max_length));
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_18 = __this->____pageTable;
		NullCheck(L_18);
		V_0 = ((int32_t)(((RuntimeArray*)L_18)->max_length));
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_19 = V_1;
		__this->____pageTable = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTable), (void*)L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		__this->____pageTableMap = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTableMap), (void*)L_20);
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_21 = __this->____pageTable;
		int32_t L_22 = V_0;
		int32_t L_23 = ___0_size;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_24 = (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		TreePage__ctor_m6DC52E242F1727514B983F48EF264E12E82574EB(L_24, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*)L_24);
	}

IL_00a9:
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_25 = __this->____pageTable;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = V_0;
		NullCheck(L_28);
		TreePage_set_PageId_m4637CDAE893DECB44B1201D9DFEF3C18C0DB5257_inline(L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_30 = __this->____inUsePageCount;
		__this->____inUsePageCount = ((int32_t)il2cpp_codegen_add(L_30, 1));
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_31 = __this->____pageTable;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFull_mBC83115259A90BB0E08BF9B0C7991D7C82CD6471_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* ___0_page, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____pageTableMap;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_1 = ___0_page;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TreePage_get_PageId_mAB3203DD4C550C1E6CDC4DF4367B61A00DC0A367_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_0);
		int32_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_2/((int32_t)32))))));
		int32_t L_4 = *((int32_t*)L_3);
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_5 = ___0_page;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TreePage_get_PageId_mAB3203DD4C550C1E6CDC4DF4367B61A00DC0A367_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4|((int32_t)(1<<((int32_t)(((int32_t)(L_6%((int32_t)32)))&((int32_t)31)))))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFree_m1D298F02A27F4FBB8095CC09DDC73419066BED45_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* ___0_page, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____pageTableMap;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_1 = ___0_page;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TreePage_get_PageId_mAB3203DD4C550C1E6CDC4DF4367B61A00DC0A367_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_0);
		int32_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_2/((int32_t)32))))));
		int32_t L_4 = *((int32_t*)L_3);
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_5 = ___0_page;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TreePage_get_PageId_mAB3203DD4C550C1E6CDC4DF4367B61A00DC0A367_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4&((~((int32_t)(1<<((int32_t)(((int32_t)(L_6%((int32_t)32)))&((int32_t)31)))))))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIntValueFromBitMap_mDB63445CC664F05D6EEF8AB921EE44CD858E8F45_gshared (uint32_t ___0_bitMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		uint32_t L_0 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_0&((int32_t)-65536))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)16)));
		uint32_t L_2 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_2>>((int32_t)16)));
	}

IL_0016:
	{
		uint32_t L_3 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_3&((int32_t)65280))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 8));
		uint32_t L_5 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_5>>8));
	}

IL_0028:
	{
		uint32_t L_6 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_6&((int32_t)240))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 4));
		uint32_t L_8 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_8>>4));
	}

IL_003a:
	{
		uint32_t L_9 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_9&((int32_t)12))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 2));
		uint32_t L_11 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_11>>2));
	}

IL_0049:
	{
		uint32_t L_12 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_12&2)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreeNode_m2284FBA53D1081B794CEC801EE442A646B7C0AA8_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = ___0_nodeId;
		V_1 = ((int32_t)(L_4&((int32_t)65535)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_5 = V_0;
		NullCheck(L_5);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_6 = L_5->____slots;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_initobj(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), sizeof(Node_t39E89F54A46CA848B0AED9F5454D71E99D318FDB));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_8 = V_0;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____slotMap;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/((int32_t)32))))));
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13 = V_1;
		*((int32_t*)L_11) = (int32_t)((int32_t)(L_12&((~((int32_t)(1<<((int32_t)(((int32_t)(L_13%((int32_t)32)))&((int32_t)31)))))))));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_14 = V_0;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = TreePage_get_InUseCount_m51D4FB92286C827692E858691E4E1F47FCBCD2B1_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_2 = L_16;
		int32_t L_17 = V_2;
		NullCheck(L_15);
		TreePage_set_InUseCount_m8E1B3603F6197A4CC81CE5F9FEC441342EA079DD_inline(L_15, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_18 = __this->____inUseNodeCount;
		__this->____inUseNodeCount = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = TreePage_get_InUseCount_m51D4FB92286C827692E858691E4E1F47FCBCD2B1_inline(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_20)
		{
			goto IL_0071;
		}
	}
	{
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_21 = V_0;
		RBTree_1_FreePage_mD851F770281DBDCB21B4DA2CB84909655F0FA687(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}

IL_0071:
	{
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = TreePage_get_InUseCount_m51D4FB92286C827692E858691E4E1F47FCBCD2B1_inline(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_24 = V_0;
		NullCheck(L_24);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_25 = L_24->____slots;
		NullCheck(L_25);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_25)->max_length)), 1))))))
		{
			goto IL_008a;
		}
	}
	{
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_26 = V_0;
		RBTree_1_MarkPageFree_m1D298F02A27F4FBB8095CC09DDC73419066BED45(__this, L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_008a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexOfPageWithFreeSlot_mB207A5B63C61CA6BA078E59E1E995360C81C43E7_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, bool ___0_allocatedPage, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		int32_t L_0 = __this->____nextFreePageLine;
		V_0 = L_0;
		V_1 = (-1);
		goto IL_0073;
	}

IL_000b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____pageTableMap;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint32_t)L_4) < ((uint32_t)(-1)))))
		{
			goto IL_006f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____pageTableMap;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = (uint32_t)L_8;
		goto IL_006a;
	}

IL_0021:
	{
		uint32_t L_9 = V_2;
		uint32_t L_10 = V_2;
		V_3 = (uint32_t)((int32_t)(((~((int32_t)L_9)))&((int32_t)il2cpp_codegen_add((int32_t)L_10, 1))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____pageTableMap;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		uint32_t L_15 = V_3;
		if (!((int64_t)(((int64_t)L_14)&((int64_t)(uint64_t)L_15))))
		{
			goto IL_003d;
		}
	}
	{
		Exception_t* L_16;
		L_16 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_003d:
	{
		int32_t L_17 = V_0;
		uint32_t L_18 = V_3;
		int32_t L_19;
		L_19 = RBTree_1_GetIntValueFromBitMap_mDB63445CC664F05D6EEF8AB921EE44CD858E8F45(L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)32))), L_19));
		bool L_20 = ___0_allocatedPage;
		if (!L_20)
		{
			goto IL_0058;
		}
	}
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_21 = __this->____pageTable;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (!L_24)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_25 = V_1;
		return L_25;
	}

IL_0058:
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_26 = __this->____pageTable;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if (L_29)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_30 = V_1;
		return L_30;
	}

IL_0064:
	{
		V_1 = (-1);
		uint32_t L_31 = V_2;
		uint32_t L_32 = V_3;
		V_2 = (uint32_t)((int32_t)((int32_t)L_31|(int32_t)L_32));
	}

IL_006a:
	{
		uint32_t L_33 = V_2;
		if (((int32_t)((int32_t)L_33^(-1))))
		{
			goto IL_0021;
		}
	}

IL_006f:
	{
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0073:
	{
		int32_t L_35 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____pageTableMap;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_37 = __this->____nextFreePageLine;
		if (!L_37)
		{
			goto IL_0095;
		}
	}
	{
		__this->____nextFreePageLine = 0;
		bool L_38 = ___0_allocatedPage;
		int32_t L_39;
		L_39 = RBTree_1_GetIndexOfPageWithFreeSlot_mB207A5B63C61CA6BA078E59E1E995360C81C43E7(__this, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_1 = L_39;
	}

IL_0095:
	{
		int32_t L_40 = V_1;
		return L_40;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_get_Count_m1F1E9F00D8DEEB51D299E897DDAD8F4903E2FA9B_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseNodeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_get_HasDuplicates_m9A29A98C3C392FFD5A3DD5E19BFF0BFB561DD7E1_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetNewNode_mCD240B40D292EF9307F03939556ACA325503DA73_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08*)NULL;
		int32_t L_0;
		L_0 = RBTree_1_GetIndexOfPageWithFreeSlot_mB207A5B63C61CA6BA078E59E1E995360C81C43E7(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_001c;
		}
	}
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_2 = __this->____pageTable;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		goto IL_00a5;
	}

IL_001c:
	{
		int32_t L_6 = __this->____inUsePageCount;
		if ((((int32_t)L_6) >= ((int32_t)4)))
		{
			goto IL_0030;
		}
	}
	{
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_7;
		L_7 = RBTree_1_AllocPage_m215B88622A11B25D550D9105F141689D4EB4A839(__this, ((int32_t)32), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_7;
		goto IL_00a5;
	}

IL_0030:
	{
		int32_t L_8 = __this->____inUsePageCount;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0048;
		}
	}
	{
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_9;
		L_9 = RBTree_1_AllocPage_m215B88622A11B25D550D9105F141689D4EB4A839(__this, ((int32_t)256), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_9;
		goto IL_00a5;
	}

IL_0048:
	{
		int32_t L_10 = __this->____inUsePageCount;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0063;
		}
	}
	{
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_11;
		L_11 = RBTree_1_AllocPage_m215B88622A11B25D550D9105F141689D4EB4A839(__this, ((int32_t)1024), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_11;
		goto IL_00a5;
	}

IL_0063:
	{
		int32_t L_12 = __this->____inUsePageCount;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)4096))))
		{
			goto IL_007e;
		}
	}
	{
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_13;
		L_13 = RBTree_1_AllocPage_m215B88622A11B25D550D9105F141689D4EB4A839(__this, ((int32_t)4096), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_13;
		goto IL_00a5;
	}

IL_007e:
	{
		int32_t L_14 = __this->____inUsePageCount;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)32768))))
		{
			goto IL_0099;
		}
	}
	{
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_15;
		L_15 = RBTree_1_AllocPage_m215B88622A11B25D550D9105F141689D4EB4A839(__this, ((int32_t)8192), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_15;
		goto IL_00a5;
	}

IL_0099:
	{
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_16;
		L_16 = RBTree_1_AllocPage_m215B88622A11B25D550D9105F141689D4EB4A839(__this, ((int32_t)65536), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_16;
	}

IL_00a5:
	{
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = TreePage_AllocSlot_mEB4D7879BFA8750667B1902CA20FBF28279E1B52(L_17, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_2 = L_18;
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_00b8;
		}
	}
	{
		Exception_t* L_20;
		L_20 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_00b8:
	{
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_21 = V_0;
		NullCheck(L_21);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_22 = L_21->____slots;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = TreePage_get_PageId_mAB3203DD4C550C1E6CDC4DF4367B61A00DC0A367_inline(L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_26 = V_2;
		((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->____selfId = ((int32_t)(((int32_t)(L_25<<((int32_t)16)))|L_26));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_27 = V_0;
		NullCheck(L_27);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_28 = L_27->____slots;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->____subTreeSize = 1;
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_30 = V_0;
		NullCheck(L_30);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_31 = L_30->____slots;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___0_key;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->____keyOfNode = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->____keyOfNode), (void*)L_33);
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_34 = V_0;
		NullCheck(L_34);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_35 = L_34->____slots;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->____selfId;
		return L_37;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Successor_mBC120AD827A51511A7C816DDE34B411DCB52E9B0_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_x_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___0_x_id;
		int32_t L_3;
		L_3 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_4;
		L_4 = RBTree_1_Minimum_m04A2B22ED80334294DFDB982AF71368FF96175C1(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_4;
	}

IL_0017:
	{
		int32_t L_5 = ___0_x_id;
		int32_t L_6;
		L_6 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_6;
		goto IL_002c;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		___0_x_id = L_7;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_9;
	}

IL_002c:
	{
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_11 = ___0_x_id;
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0021;
		}
	}

IL_0039:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_Successor_m89C5DC61DF69FB7B614F570A01A91F8D4555D74A_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_nodeId;
		int32_t L_1 = *((int32_t*)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t* L_2 = ___0_nodeId;
		int32_t* L_3 = ___1_mainTreeNodeId;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5;
		L_5 = RBTree_1_Minimum_m04A2B22ED80334294DFDB982AF71368FF96175C1(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		*((int32_t*)L_2) = (int32_t)L_5;
		int32_t* L_6 = ___1_mainTreeNodeId;
		*((int32_t*)L_6) = (int32_t)0;
		goto IL_0032;
	}

IL_0013:
	{
		int32_t* L_7 = ___0_nodeId;
		int32_t* L_8 = ___0_nodeId;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10;
		L_10 = RBTree_1_Successor_mBC120AD827A51511A7C816DDE34B411DCB52E9B0(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		*((int32_t*)L_7) = (int32_t)L_10;
		int32_t* L_11 = ___0_nodeId;
		int32_t L_12 = *((int32_t*)L_11);
		if (L_12)
		{
			goto IL_0032;
		}
	}
	{
		int32_t* L_13 = ___1_mainTreeNodeId;
		int32_t L_14 = *((int32_t*)L_13);
		if (!L_14)
		{
			goto IL_0032;
		}
	}
	{
		int32_t* L_15 = ___0_nodeId;
		int32_t* L_16 = ___1_mainTreeNodeId;
		int32_t L_17 = *((int32_t*)L_16);
		int32_t L_18;
		L_18 = RBTree_1_Successor_mBC120AD827A51511A7C816DDE34B411DCB52E9B0(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		*((int32_t*)L_15) = (int32_t)L_18;
		int32_t* L_19 = ___1_mainTreeNodeId;
		*((int32_t*)L_19) = (int32_t)0;
	}

IL_0032:
	{
		int32_t* L_20 = ___0_nodeId;
		int32_t L_21 = *((int32_t*)L_20);
		if (!L_21)
		{
			goto IL_0062;
		}
	}
	{
		int32_t* L_22 = ___0_nodeId;
		int32_t L_23 = *((int32_t*)L_22);
		int32_t L_24;
		L_24 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_24)
		{
			goto IL_0060;
		}
	}
	{
		int32_t* L_25 = ___1_mainTreeNodeId;
		int32_t L_26 = *((int32_t*)L_25);
		if (!L_26)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t* L_27;
		L_27 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)21), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
	}

IL_004c:
	{
		int32_t* L_28 = ___1_mainTreeNodeId;
		int32_t* L_29 = ___0_nodeId;
		int32_t L_30 = *((int32_t*)L_29);
		*((int32_t*)L_28) = (int32_t)L_30;
		int32_t* L_31 = ___0_nodeId;
		int32_t* L_32 = ___0_nodeId;
		int32_t L_33 = *((int32_t*)L_32);
		int32_t L_34;
		L_34 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_35;
		L_35 = RBTree_1_Minimum_m04A2B22ED80334294DFDB982AF71368FF96175C1(__this, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		*((int32_t*)L_31) = (int32_t)L_35;
	}

IL_0060:
	{
		return (bool)1;
	}

IL_0062:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Minimum_m04A2B22ED80334294DFDB982AF71368FF96175C1_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_x_id, const RuntimeMethod* method) 
{
	{
		goto IL_000b;
	}

IL_0002:
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		___0_x_id = L_1;
	}

IL_000b:
	{
		int32_t L_2 = ___0_x_id;
		int32_t L_3;
		L_3 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_3)
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_4 = ___0_x_id;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_LeftRotate_m6FAEDAE5FEA845BB51C6E52F7F3797987043F8A3_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* G_B11_2 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* G_B13_3 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* G_B17_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* G_B18_3 = NULL;
	{
		int32_t L_0 = ___1_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = ___1_x_id;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_2, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_9 = ___1_x_id;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_13 = ___1_x_id;
		int32_t L_14;
		L_14 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = ___0_root_id;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_16 = V_0;
		__this->___root = L_16;
		goto IL_0099;
	}

IL_0050:
	{
		int32_t L_17 = ___2_mainTreeNode;
		int32_t L_18 = V_0;
		RBTree_1_SetNext_mADA41B6665596F49964D1AC259BC1CAEDEB86AC8(__this, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_19 = ___2_mainTreeNode;
		int32_t L_20 = V_0;
		RuntimeObject* L_21;
		L_21 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_mBBCC4BFD81ED932DEF3BAACA07389DAF7017AFF9(__this, L_19, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		int32_t L_22 = V_0;
		___0_root_id = L_22;
		goto IL_0099;
	}

IL_006b:
	{
		int32_t L_23 = ___1_x_id;
		int32_t L_24 = ___1_x_id;
		int32_t L_25;
		L_25 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_26;
		L_26 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_23) == ((uint32_t)L_26))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_29 = V_0;
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0099;
	}

IL_008b:
	{
		int32_t L_30 = ___1_x_id;
		int32_t L_31;
		L_31 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_32 = V_0;
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_31, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0099:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___1_x_id;
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_35 = ___1_x_id;
		int32_t L_36 = V_0;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_37 = ___1_x_id;
		if (!L_37)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_38 = ___1_x_id;
		int32_t L_39 = ___1_x_id;
		int32_t L_40;
		L_40 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_41;
		L_41 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_42 = ___1_x_id;
		int32_t L_43;
		L_43 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_44;
		L_44 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_45 = ___1_x_id;
		int32_t L_46;
		L_46 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_46)
		{
			G_B12_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
			G_B12_1 = L_38;
			G_B12_2 = __this;
			goto IL_00e1;
		}
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
		G_B11_1 = L_38;
		G_B11_2 = __this;
	}
	{
		int32_t L_47 = ___1_x_id;
		int32_t L_48;
		L_48 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_49;
		L_49 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B13_0 = L_49;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00e2:
	{
		NullCheck(G_B13_3);
		RBTree_1_SetSubTreeSize_m0EBB22E8908E7A97007F5BA1CB2F7BE4ED2AB1FD(G_B13_3, G_B13_2, ((int32_t)il2cpp_codegen_add(G_B13_1, G_B13_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_00e8:
	{
		int32_t L_50 = V_0;
		if (!L_50)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_0;
		int32_t L_53;
		L_53 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_54;
		L_54 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_55 = V_0;
		int32_t L_56;
		L_56 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_57;
		L_57 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_59)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
			G_B17_1 = L_51;
			G_B17_2 = __this;
			goto IL_0120;
		}
		G_B16_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
		G_B16_1 = L_51;
		G_B16_2 = __this;
	}
	{
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_62;
		L_62 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_61, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B18_0 = L_62;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_0121;
	}

IL_0120:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_0121:
	{
		NullCheck(G_B18_3);
		RBTree_1_SetSubTreeSize_m0EBB22E8908E7A97007F5BA1CB2F7BE4ED2AB1FD(G_B18_3, G_B18_2, ((int32_t)il2cpp_codegen_add(G_B18_1, G_B18_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_0127:
	{
		int32_t L_63 = ___0_root_id;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RightRotate_m2A33BBCDE144E00B7E1C6C1A17ECF008E2A5660C_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* G_B11_2 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* G_B13_3 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* G_B17_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* G_B18_3 = NULL;
	{
		int32_t L_0 = ___1_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_1;
		int32_t L_2 = ___1_x_id;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_2, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_9 = ___1_x_id;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_13 = ___1_x_id;
		int32_t L_14;
		L_14 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = ___0_root_id;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_16 = V_0;
		__this->___root = L_16;
		goto IL_0099;
	}

IL_0050:
	{
		int32_t L_17 = ___2_mainTreeNode;
		int32_t L_18 = V_0;
		RBTree_1_SetNext_mADA41B6665596F49964D1AC259BC1CAEDEB86AC8(__this, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_19 = ___2_mainTreeNode;
		int32_t L_20 = V_0;
		RuntimeObject* L_21;
		L_21 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_mBBCC4BFD81ED932DEF3BAACA07389DAF7017AFF9(__this, L_19, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		int32_t L_22 = V_0;
		___0_root_id = L_22;
		goto IL_0099;
	}

IL_006b:
	{
		int32_t L_23 = ___1_x_id;
		int32_t L_24 = ___1_x_id;
		int32_t L_25;
		L_25 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_26;
		L_26 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_23) == ((uint32_t)L_26))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_29 = V_0;
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0099;
	}

IL_008b:
	{
		int32_t L_30 = ___1_x_id;
		int32_t L_31;
		L_31 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_32 = V_0;
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_31, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0099:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___1_x_id;
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_35 = ___1_x_id;
		int32_t L_36 = V_0;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_37 = ___1_x_id;
		if (!L_37)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_38 = ___1_x_id;
		int32_t L_39 = ___1_x_id;
		int32_t L_40;
		L_40 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_41;
		L_41 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_42 = ___1_x_id;
		int32_t L_43;
		L_43 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_44;
		L_44 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_45 = ___1_x_id;
		int32_t L_46;
		L_46 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_46)
		{
			G_B12_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
			G_B12_1 = L_38;
			G_B12_2 = __this;
			goto IL_00e1;
		}
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
		G_B11_1 = L_38;
		G_B11_2 = __this;
	}
	{
		int32_t L_47 = ___1_x_id;
		int32_t L_48;
		L_48 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_49;
		L_49 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B13_0 = L_49;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00e2:
	{
		NullCheck(G_B13_3);
		RBTree_1_SetSubTreeSize_m0EBB22E8908E7A97007F5BA1CB2F7BE4ED2AB1FD(G_B13_3, G_B13_2, ((int32_t)il2cpp_codegen_add(G_B13_1, G_B13_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_00e8:
	{
		int32_t L_50 = V_0;
		if (!L_50)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_0;
		int32_t L_53;
		L_53 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_54;
		L_54 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_55 = V_0;
		int32_t L_56;
		L_56 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_57;
		L_57 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_59)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
			G_B17_1 = L_51;
			G_B17_2 = __this;
			goto IL_0120;
		}
		G_B16_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
		G_B16_1 = L_51;
		G_B16_2 = __this;
	}
	{
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_62;
		L_62 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_61, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B18_0 = L_62;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_0121;
	}

IL_0120:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_0121:
	{
		NullCheck(G_B18_3);
		RBTree_1_SetSubTreeSize_m0EBB22E8908E7A97007F5BA1CB2F7BE4ED2AB1FD(G_B18_3, G_B18_2, ((int32_t)il2cpp_codegen_add(G_B18_1, G_B18_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_0127:
	{
		int32_t L_63 = ___0_root_id;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBInsert_m25C1F9B8FA733750F51C334ED01E4EF680C3EBBC_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B54_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		V_0 = 0;
		int32_t L_1 = ___0_root_id;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_root_id;
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		int32_t L_3 = __this->___root;
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_1 = G_B3_0;
		int32_t L_4 = __this->____accessMethod;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_01f8;
		}
	}
	{
		bool L_5 = ___4_append;
		if (L_5)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_01f0;
	}

IL_0035:
	{
		int32_t L_6 = V_1;
		RBTree_1_IncreaseSize_mC7A31D096BC854B6993FED4FE86BE2B2AB33281E(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		int32_t L_7 = V_1;
		V_0 = L_7;
		int32_t L_8 = ___0_root_id;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_9 = ___1_x_id;
		RuntimeObject* L_10;
		L_10 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_11 = V_1;
		RuntimeObject* L_12;
		L_12 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_13;
		L_13 = VirtualFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(6, __this, L_10, L_12);
		G_B9_0 = L_13;
		goto IL_006b;
	}

IL_0057:
	{
		int32_t L_14 = ___1_x_id;
		RuntimeObject* L_15;
		L_15 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_16 = V_1;
		RuntimeObject* L_17;
		L_17 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_18;
		L_18 = VirtualFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(5, __this, L_15, L_17);
		G_B9_0 = L_18;
	}

IL_006b:
	{
		V_2 = G_B9_0;
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_20 = V_1;
		int32_t L_21;
		L_21 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_1 = L_21;
		goto IL_01f0;
	}

IL_007d:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_1 = L_24;
		goto IL_01f0;
	}

IL_008e:
	{
		int32_t L_25 = ___0_root_id;
		if (!L_25)
		{
			goto IL_0098;
		}
	}
	{
		Exception_t* L_26;
		L_26 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_0098:
	{
		int32_t L_27 = V_1;
		int32_t L_28;
		L_28 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_28)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_29 = V_1;
		int32_t L_30;
		L_30 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_31 = ___1_x_id;
		int32_t L_32 = V_1;
		int32_t L_33;
		L_33 = RBTree_1_RBInsert_m25C1F9B8FA733750F51C334ED01E4EF680C3EBBC(__this, L_30, L_31, L_32, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		___0_root_id = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_1;
		int32_t L_36;
		L_36 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		RuntimeObject* L_37;
		L_37 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_mBBCC4BFD81ED932DEF3BAACA07389DAF7017AFF9(__this, L_34, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		goto IL_01ee;
	}

IL_00cd:
	{
		V_3 = 0;
		int32_t L_38 = V_1;
		RuntimeObject* L_39;
		L_39 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_40;
		L_40 = RBTree_1_GetNewNode_mCD240B40D292EF9307F03939556ACA325503DA73(__this, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_3 = L_40;
		int32_t L_41 = __this->____inUseSatelliteTreeCount;
		__this->____inUseSatelliteTreeCount = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_3;
		int32_t L_43 = V_1;
		RBTree_1_SetNext_mADA41B6665596F49964D1AC259BC1CAEDEB86AC8(__this, L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_44 = V_3;
		int32_t L_45 = V_1;
		int32_t L_46;
		L_46 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_44, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_47 = V_3;
		int32_t L_48 = V_1;
		int32_t L_49;
		L_49 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_47, L_49, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_50 = V_3;
		int32_t L_51 = V_1;
		int32_t L_52;
		L_52 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_50, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_53 = V_3;
		int32_t L_54 = V_1;
		int32_t L_55;
		L_55 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_53, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_56 = V_1;
		int32_t L_57;
		L_57 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_58;
		L_58 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_57, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_59 = V_1;
		if ((!(((uint32_t)L_58) == ((uint32_t)L_59))))
		{
			goto IL_014b;
		}
	}
	{
		int32_t L_60 = V_1;
		int32_t L_61;
		L_61 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_62 = V_3;
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_61, L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0169;
	}

IL_014b:
	{
		int32_t L_63 = V_1;
		int32_t L_64;
		L_64 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_65;
		L_65 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_64, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_66 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_67 = V_1;
		int32_t L_68;
		L_68 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_69 = V_3;
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_68, L_69, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0169:
	{
		int32_t L_70 = V_1;
		int32_t L_71;
		L_71 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_70, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_71)
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_72 = V_1;
		int32_t L_73;
		L_73 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_74 = V_3;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_73, L_74, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0180:
	{
		int32_t L_75 = V_1;
		int32_t L_76;
		L_76 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_76)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_77 = V_1;
		int32_t L_78;
		L_78 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_79 = V_3;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_78, L_79, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0197:
	{
		int32_t L_80 = __this->___root;
		int32_t L_81 = V_1;
		if ((!(((uint32_t)L_80) == ((uint32_t)L_81))))
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_82 = V_3;
		__this->___root = L_82;
	}

IL_01a7:
	{
		int32_t L_83 = V_1;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_83, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_84 = V_1;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_84, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_85 = V_1;
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_85, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_86 = V_1;
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_86, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_87 = V_1;
		int32_t L_88;
		L_88 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_87, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_4 = L_88;
		int32_t L_89 = V_1;
		RBTree_1_SetSubTreeSize_m0EBB22E8908E7A97007F5BA1CB2F7BE4ED2AB1FD(__this, L_89, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_90 = V_1;
		int32_t L_91 = ___1_x_id;
		int32_t L_92 = V_3;
		int32_t L_93;
		L_93 = RBTree_1_RBInsert_m25C1F9B8FA733750F51C334ED01E4EF680C3EBBC(__this, L_90, L_91, L_92, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		___0_root_id = L_93;
		int32_t L_94 = V_3;
		int32_t L_95 = V_4;
		RBTree_1_SetSubTreeSize_m0EBB22E8908E7A97007F5BA1CB2F7BE4ED2AB1FD(__this, L_94, L_95, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_01ee:
	{
		int32_t L_96 = ___0_root_id;
		return L_96;
	}

IL_01f0:
	{
		int32_t L_97 = V_1;
		if (L_97)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0263;
	}

IL_01f8:
	{
		int32_t L_98 = __this->____accessMethod;
		bool L_99 = ___4_append;
		if (!((int32_t)(((((int32_t)L_98) == ((int32_t)2))? 1 : 0)|(int32_t)L_99)))
		{
			goto IL_025b;
		}
	}
	{
		int32_t L_100 = ___3_position;
		if ((!(((uint32_t)L_100) == ((uint32_t)(-1)))))
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_101 = __this->___root;
		int32_t L_102;
		L_102 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_101, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		___3_position = L_102;
		goto IL_0256;
	}

IL_021b:
	{
		int32_t L_103 = V_1;
		RBTree_1_IncreaseSize_mC7A31D096BC854B6993FED4FE86BE2B2AB33281E(__this, L_103, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		int32_t L_104 = V_1;
		V_0 = L_104;
		int32_t L_105 = ___3_position;
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_106, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_108;
		L_108 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_107, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_105, L_108));
		int32_t L_109 = V_5;
		if ((((int32_t)L_109) > ((int32_t)0)))
		{
			goto IL_0245;
		}
	}
	{
		int32_t L_110 = V_1;
		int32_t L_111;
		L_111 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_110, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_1 = L_111;
		goto IL_0256;
	}

IL_0245:
	{
		int32_t L_112 = V_1;
		int32_t L_113;
		L_113 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_112, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_1 = L_113;
		int32_t L_114 = V_1;
		if (!L_114)
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_115 = V_5;
		___3_position = ((int32_t)il2cpp_codegen_subtract(L_115, 1));
	}

IL_0256:
	{
		int32_t L_116 = V_1;
		if (L_116)
		{
			goto IL_021b;
		}
	}
	{
		goto IL_0263;
	}

IL_025b:
	{
		Exception_t* L_117;
		L_117 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)15), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, method);
	}

IL_0263:
	{
		int32_t L_118 = ___1_x_id;
		int32_t L_119 = V_0;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_118, L_119, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_120 = V_0;
		if (L_120)
		{
			goto IL_0298;
		}
	}
	{
		int32_t L_121 = ___0_root_id;
		if (L_121)
		{
			goto IL_027d;
		}
	}
	{
		int32_t L_122 = ___1_x_id;
		__this->___root = L_122;
		goto IL_030a;
	}

IL_027d:
	{
		int32_t L_123 = ___2_mainTreeNodeID;
		int32_t L_124 = ___1_x_id;
		RBTree_1_SetNext_mADA41B6665596F49964D1AC259BC1CAEDEB86AC8(__this, L_123, L_124, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_125 = ___2_mainTreeNodeID;
		int32_t L_126 = ___1_x_id;
		RuntimeObject* L_127;
		L_127 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_126, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_mBBCC4BFD81ED932DEF3BAACA07389DAF7017AFF9(__this, L_125, L_127, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		int32_t L_128 = ___1_x_id;
		___0_root_id = L_128;
		goto IL_030a;
	}

IL_0298:
	{
		V_6 = 0;
		int32_t L_129 = __this->____accessMethod;
		if ((!(((uint32_t)L_129) == ((uint32_t)1))))
		{
			goto IL_02d5;
		}
	}
	{
		int32_t L_130 = ___0_root_id;
		if (!L_130)
		{
			goto IL_02bd;
		}
	}
	{
		int32_t L_131 = ___1_x_id;
		RuntimeObject* L_132;
		L_132 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_131, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_133 = V_0;
		RuntimeObject* L_134;
		L_134 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_133, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_135;
		L_135 = VirtualFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(6, __this, L_132, L_134);
		G_B49_0 = L_135;
		goto IL_02d1;
	}

IL_02bd:
	{
		int32_t L_136 = ___1_x_id;
		RuntimeObject* L_137;
		L_137 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_136, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_138 = V_0;
		RuntimeObject* L_139;
		L_139 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_138, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_140;
		L_140 = VirtualFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(5, __this, L_137, L_139);
		G_B49_0 = L_140;
	}

IL_02d1:
	{
		V_6 = G_B49_0;
		goto IL_02f3;
	}

IL_02d5:
	{
		int32_t L_141 = __this->____accessMethod;
		if ((!(((uint32_t)L_141) == ((uint32_t)2))))
		{
			goto IL_02eb;
		}
	}
	{
		int32_t L_142 = ___3_position;
		if ((((int32_t)L_142) <= ((int32_t)0)))
		{
			goto IL_02e6;
		}
	}
	{
		G_B54_0 = 1;
		goto IL_02e7;
	}

IL_02e6:
	{
		G_B54_0 = (-1);
	}

IL_02e7:
	{
		V_6 = G_B54_0;
		goto IL_02f3;
	}

IL_02eb:
	{
		Exception_t* L_143;
		L_143 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)16), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, method);
	}

IL_02f3:
	{
		int32_t L_144 = V_6;
		if ((((int32_t)L_144) >= ((int32_t)0)))
		{
			goto IL_0302;
		}
	}
	{
		int32_t L_145 = V_0;
		int32_t L_146 = ___1_x_id;
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_145, L_146, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_030a;
	}

IL_0302:
	{
		int32_t L_147 = V_0;
		int32_t L_148 = ___1_x_id;
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_147, L_148, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_030a:
	{
		int32_t L_149 = ___1_x_id;
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_149, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_150 = ___1_x_id;
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_150, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_151 = ___1_x_id;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_151, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_152 = ___1_x_id;
		V_1 = L_152;
		goto IL_04ba;
	}

IL_0329:
	{
		int32_t L_153 = ___1_x_id;
		int32_t L_154;
		L_154 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_153, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_155 = ___1_x_id;
		int32_t L_156;
		L_156 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_155, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_157;
		L_157 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_156, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_158;
		L_158 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_157, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_154) == ((uint32_t)L_158))))
		{
			goto IL_0405;
		}
	}
	{
		int32_t L_159 = ___1_x_id;
		int32_t L_160;
		L_160 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_159, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_161;
		L_161 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_160, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_162;
		L_162 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_161, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_162;
		int32_t L_163 = V_0;
		int32_t L_164;
		L_164 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_163, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_164)
		{
			goto IL_03a3;
		}
	}
	{
		int32_t L_165 = ___1_x_id;
		int32_t L_166;
		L_166 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_165, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_166, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_167 = V_0;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_167, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_168 = ___1_x_id;
		int32_t L_169;
		L_169 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_168, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_170;
		L_170 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_169, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_170, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_171 = ___1_x_id;
		int32_t L_172;
		L_172 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_171, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_173;
		L_173 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_172, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_173;
		goto IL_04ba;
	}

IL_03a3:
	{
		int32_t L_174 = ___1_x_id;
		int32_t L_175 = ___1_x_id;
		int32_t L_176;
		L_176 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_175, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_177;
		L_177 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_176, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((!(((uint32_t)L_174) == ((uint32_t)L_177))))
		{
			goto IL_03c7;
		}
	}
	{
		int32_t L_178 = ___1_x_id;
		int32_t L_179;
		L_179 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_178, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_179;
		int32_t L_180 = ___0_root_id;
		int32_t L_181 = ___1_x_id;
		int32_t L_182 = ___2_mainTreeNodeID;
		int32_t L_183;
		L_183 = RBTree_1_LeftRotate_m6FAEDAE5FEA845BB51C6E52F7F3797987043F8A3(__this, L_180, L_181, L_182, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_183;
	}

IL_03c7:
	{
		int32_t L_184 = ___1_x_id;
		int32_t L_185;
		L_185 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_184, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_185, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_186 = ___1_x_id;
		int32_t L_187;
		L_187 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_186, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_188;
		L_188 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_187, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_188, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_189 = ___0_root_id;
		int32_t L_190 = ___1_x_id;
		int32_t L_191;
		L_191 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_190, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_192;
		L_192 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_191, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_193 = ___2_mainTreeNodeID;
		int32_t L_194;
		L_194 = RBTree_1_RightRotate_m2A33BBCDE144E00B7E1C6C1A17ECF008E2A5660C(__this, L_189, L_192, L_193, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_194;
		goto IL_04ba;
	}

IL_0405:
	{
		int32_t L_195 = ___1_x_id;
		int32_t L_196;
		L_196 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_195, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_197;
		L_197 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_196, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_198;
		L_198 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_197, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_198;
		int32_t L_199 = V_0;
		int32_t L_200;
		L_200 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_199, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_200)
		{
			goto IL_045d;
		}
	}
	{
		int32_t L_201 = ___1_x_id;
		int32_t L_202;
		L_202 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_201, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_202, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_203 = V_0;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_203, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_204 = ___1_x_id;
		int32_t L_205;
		L_205 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_204, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_206;
		L_206 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_205, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_206, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_207 = ___1_x_id;
		int32_t L_208;
		L_208 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_207, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_209;
		L_209 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_208, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_209;
		goto IL_04ba;
	}

IL_045d:
	{
		int32_t L_210 = ___1_x_id;
		int32_t L_211 = ___1_x_id;
		int32_t L_212;
		L_212 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_211, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_213;
		L_213 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_212, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_210) == ((uint32_t)L_213))))
		{
			goto IL_0481;
		}
	}
	{
		int32_t L_214 = ___1_x_id;
		int32_t L_215;
		L_215 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_214, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_215;
		int32_t L_216 = ___0_root_id;
		int32_t L_217 = ___1_x_id;
		int32_t L_218 = ___2_mainTreeNodeID;
		int32_t L_219;
		L_219 = RBTree_1_RightRotate_m2A33BBCDE144E00B7E1C6C1A17ECF008E2A5660C(__this, L_216, L_217, L_218, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_219;
	}

IL_0481:
	{
		int32_t L_220 = ___1_x_id;
		int32_t L_221;
		L_221 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_220, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_221, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_222 = ___1_x_id;
		int32_t L_223;
		L_223 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_222, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_224;
		L_224 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_223, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_224, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_225 = ___0_root_id;
		int32_t L_226 = ___1_x_id;
		int32_t L_227;
		L_227 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_226, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_228;
		L_228 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_227, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_229 = ___2_mainTreeNodeID;
		int32_t L_230;
		L_230 = RBTree_1_LeftRotate_m6FAEDAE5FEA845BB51C6E52F7F3797987043F8A3(__this, L_225, L_228, L_229, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_230;
	}

IL_04ba:
	{
		int32_t L_231 = ___1_x_id;
		int32_t L_232;
		L_232 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_231, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_233;
		L_233 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_232, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_233)
		{
			goto IL_0329;
		}
	}
	{
		int32_t L_234 = ___0_root_id;
		if (L_234)
		{
			goto IL_04de;
		}
	}
	{
		int32_t L_235 = __this->___root;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_235, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		goto IL_04e6;
	}

IL_04de:
	{
		int32_t L_236 = ___0_root_id;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_236, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
	}

IL_04e6:
	{
		int32_t L_237 = ___0_root_id;
		return L_237;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_UpdateNodeKey_m1D17263A43DA1E8A0CDCFFE7513A207930104402_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, RuntimeObject* ___0_currentKey, RuntimeObject* ___1_newKey, const RuntimeMethod* method) 
{
	NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_currentKey;
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_1;
		L_1 = RBTree_1_GetNodeByKey_mF3719F0495F9D5A4339890BE2EB8999ACD068EFA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_0 = L_1;
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_2 = V_0;
		int32_t L_3 = L_2.____nodeID;
		int32_t L_4;
		L_4 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_5 = V_0;
		int32_t L_6 = L_5.____nodeID;
		int32_t L_7 = __this->___root;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0031;
		}
	}
	{
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_8 = V_0;
		int32_t L_9 = L_8.____mainTreeNodeID;
		RuntimeObject* L_10 = ___1_newKey;
		RBTree_1_SetKey_mBBCC4BFD81ED932DEF3BAACA07389DAF7017AFF9(__this, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
	}

IL_0031:
	{
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_11 = V_0;
		int32_t L_12 = L_11.____nodeID;
		RuntimeObject* L_13 = ___1_newKey;
		RBTree_1_SetKey_mBBCC4BFD81ED932DEF3BAACA07389DAF7017AFF9(__this, L_12, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTree_1_DeleteByIndex_m77EB3F96268C89DEA1218BA5DB3CB1A8EEC073F6_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_i;
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_1;
		L_1 = RBTree_1_GetNodeByIndex_m948B6DED575DEAF9BC7735B1CD602A208058485C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_0 = L_1;
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_2 = V_0;
		int32_t L_3 = L_2.____nodeID;
		RuntimeObject* L_4;
		L_4 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_5 = V_0;
		int32_t L_6 = L_5.____nodeID;
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_7 = V_0;
		int32_t L_8 = L_7.____mainTreeNodeID;
		int32_t L_9;
		L_9 = RBTree_1_RBDeleteX_m61010CD7CB4B2C5EA027848024A26D252CCE530C(__this, 0, L_6, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDelete_m6F0CAA42CFE58D5FFBBC866711871E2528CE5AD2_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_z_id, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_z_id;
		int32_t L_1;
		L_1 = RBTree_1_RBDeleteX_m61010CD7CB4B2C5EA027848024A26D252CCE530C(__this, 0, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteX_m61010CD7CB4B2C5EA027848024A26D252CCE530C_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_z_id;
		int32_t L_1;
		L_1 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___1_z_id;
		int32_t L_3;
		L_3 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_4 = ___1_z_id;
		int32_t L_5;
		L_5 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_6 = ___1_z_id;
		int32_t L_7;
		L_7 = RBTree_1_RBDeleteX_m61010CD7CB4B2C5EA027848024A26D252CCE530C(__this, L_3, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_7;
	}

IL_0021:
	{
		V_3 = (bool)0;
		int32_t L_8 = __this->____accessMethod;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = ___1_z_id;
		G_B5_0 = L_9;
		goto IL_0030;
	}

IL_002f:
	{
		int32_t L_10 = ___2_mainTreeNodeID;
		G_B5_0 = L_10;
	}

IL_0030:
	{
		V_4 = G_B5_0;
		int32_t L_11 = V_4;
		int32_t L_12;
		L_12 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_13 = V_4;
		int32_t L_14;
		L_14 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		___0_root_id = L_14;
	}

IL_0046:
	{
		int32_t L_15 = V_4;
		int32_t L_16;
		L_16 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_17;
		L_17 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0073;
	}

IL_005b:
	{
		int32_t L_18 = V_4;
		int32_t L_19;
		L_19 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_20;
		L_20 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Exception_t* L_21;
		L_21 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0073:
	{
		int32_t L_22 = ___1_z_id;
		int32_t L_23;
		L_23 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_23)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_24 = ___1_z_id;
		int32_t L_25;
		L_25 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (L_25)
		{
			goto IL_0089;
		}
	}

IL_0085:
	{
		int32_t L_26 = ___1_z_id;
		V_1 = L_26;
		goto IL_0091;
	}

IL_0089:
	{
		int32_t L_27 = ___1_z_id;
		int32_t L_28;
		L_28 = RBTree_1_Successor_mBC120AD827A51511A7C816DDE34B411DCB52E9B0(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_28;
	}

IL_0091:
	{
		int32_t L_29 = V_1;
		int32_t L_30;
		L_30 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_30)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_1;
		int32_t L_32;
		L_32 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_32;
		goto IL_00ac;
	}

IL_00a4:
	{
		int32_t L_33 = V_1;
		int32_t L_34;
		L_34 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_34;
	}

IL_00ac:
	{
		int32_t L_35 = V_1;
		int32_t L_36;
		L_36 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_2 = L_36;
		int32_t L_37 = V_0;
		if (!L_37)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_2;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_38, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_00bf:
	{
		int32_t L_40 = V_2;
		if (L_40)
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_41 = ___0_root_id;
		if (L_41)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_42 = V_0;
		__this->___root = L_42;
		goto IL_00ef;
	}

IL_00ce:
	{
		int32_t L_43 = V_0;
		___0_root_id = L_43;
		goto IL_00ef;
	}

IL_00d3:
	{
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		int32_t L_46;
		L_46 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_44) == ((uint32_t)L_46))))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_0;
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_47, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_00ef;
	}

IL_00e7:
	{
		int32_t L_49 = V_2;
		int32_t L_50 = V_0;
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_49, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_00ef:
	{
		int32_t L_51 = V_1;
		int32_t L_52 = ___1_z_id;
		if ((((int32_t)L_51) == ((int32_t)L_52)))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_53 = ___1_z_id;
		int32_t L_54 = V_1;
		RuntimeObject* L_55;
		L_55 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_mBBCC4BFD81ED932DEF3BAACA07389DAF7017AFF9(__this, L_53, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		int32_t L_56 = ___1_z_id;
		int32_t L_57 = V_1;
		int32_t L_58;
		L_58 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_57, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		RBTree_1_SetNext_mADA41B6665596F49964D1AC259BC1CAEDEB86AC8(__this, L_56, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
	}

IL_010f:
	{
		int32_t L_59 = V_4;
		int32_t L_60;
		L_60 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_60)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_61 = ___0_root_id;
		if (L_61)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_62 = ___1_z_id;
		int32_t L_63 = V_4;
		if ((((int32_t)L_62) == ((int32_t)L_63)))
		{
			goto IL_0128;
		}
	}
	{
		Exception_t* L_64;
		L_64 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, method);
	}

IL_0128:
	{
		int32_t L_65 = ___0_root_id;
		if (!L_65)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_66 = V_4;
		int32_t L_67 = ___0_root_id;
		RBTree_1_SetNext_mADA41B6665596F49964D1AC259BC1CAEDEB86AC8(__this, L_66, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_68 = V_4;
		int32_t L_69 = ___0_root_id;
		RuntimeObject* L_70;
		L_70 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_69, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_mBBCC4BFD81ED932DEF3BAACA07389DAF7017AFF9(__this, L_68, L_70, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
	}

IL_0143:
	{
		int32_t L_71 = V_2;
		V_5 = L_71;
		goto IL_015a;
	}

IL_0148:
	{
		int32_t L_72 = V_5;
		RBTree_1_RecomputeSize_m5B049EA2694E6343E2D30EDCDB34CC4C44A0FD08(__this, L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		int32_t L_73 = V_5;
		int32_t L_74;
		L_74 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_73, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_5 = L_74;
	}

IL_015a:
	{
		int32_t L_75 = V_5;
		if (L_75)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_76 = ___0_root_id;
		if (!L_76)
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_77 = V_4;
		V_6 = L_77;
		goto IL_0179;
	}

IL_0167:
	{
		int32_t L_78 = V_6;
		RBTree_1_DecreaseSize_m63463D3F02F9E581B66DAC4F5311669F2284C603(__this, L_78, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		int32_t L_79 = V_6;
		int32_t L_80;
		L_80 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_79, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_6 = L_80;
	}

IL_0179:
	{
		int32_t L_81 = V_6;
		if (L_81)
		{
			goto IL_0167;
		}
	}

IL_017d:
	{
		int32_t L_82 = V_1;
		int32_t L_83;
		L_83 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_82, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0193;
		}
	}
	{
		int32_t L_84 = ___0_root_id;
		int32_t L_85 = V_0;
		int32_t L_86 = V_2;
		int32_t L_87 = ___2_mainTreeNodeID;
		int32_t L_88;
		L_88 = RBTree_1_RBDeleteFixup_m7FD4570F1436DF16B372F9317522C5D1CDB8B597(__this, L_84, L_85, L_86, L_87, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		___0_root_id = L_88;
	}

IL_0193:
	{
		bool L_89 = V_3;
		if (!L_89)
		{
			goto IL_02af;
		}
	}
	{
		int32_t L_90 = V_4;
		if (!L_90)
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_91 = V_4;
		int32_t L_92;
		L_92 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_91, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_93;
		L_93 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_92, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((((int32_t)L_93) == ((int32_t)1)))
		{
			goto IL_01b6;
		}
	}

IL_01ae:
	{
		Exception_t* L_94;
		L_94 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)9), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, method);
	}

IL_01b6:
	{
		int32_t L_95 = __this->____inUseSatelliteTreeCount;
		__this->____inUseSatelliteTreeCount = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		int32_t L_96 = V_4;
		int32_t L_97;
		L_97 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_96, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_7 = L_97;
		int32_t L_98 = V_7;
		int32_t L_99 = V_4;
		int32_t L_100;
		L_100 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_99, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_98, L_100, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_101 = V_7;
		int32_t L_102 = V_4;
		int32_t L_103;
		L_103 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_102, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_101, L_103, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_104 = V_7;
		int32_t L_105 = V_4;
		int32_t L_106;
		L_106 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_105, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		RBTree_1_SetSubTreeSize_m0EBB22E8908E7A97007F5BA1CB2F7BE4ED2AB1FD(__this, L_104, L_106, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_107 = V_7;
		int32_t L_108 = V_4;
		int32_t L_109;
		L_109 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_108, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_107, L_109, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_110 = V_4;
		int32_t L_111;
		L_111 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_110, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (!L_111)
		{
			goto IL_025c;
		}
	}
	{
		int32_t L_112 = V_7;
		int32_t L_113 = V_4;
		int32_t L_114;
		L_114 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_113, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_112, L_114, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_115 = V_4;
		int32_t L_116;
		L_116 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_115, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_117;
		L_117 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_116, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_118 = V_4;
		if ((!(((uint32_t)L_117) == ((uint32_t)L_118))))
		{
			goto IL_024c;
		}
	}
	{
		int32_t L_119 = V_4;
		int32_t L_120;
		L_120 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_119, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_121 = V_7;
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_120, L_121, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_025c;
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		int32_t L_123;
		L_123 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_122, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_124 = V_7;
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_123, L_124, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_025c:
	{
		int32_t L_125 = V_4;
		int32_t L_126;
		L_126 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_125, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_126)
		{
			goto IL_0276;
		}
	}
	{
		int32_t L_127 = V_4;
		int32_t L_128;
		L_128 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_127, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_129 = V_7;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_128, L_129, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0276:
	{
		int32_t L_130 = V_4;
		int32_t L_131;
		L_131 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_130, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_131)
		{
			goto IL_0290;
		}
	}
	{
		int32_t L_132 = V_4;
		int32_t L_133;
		L_133 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_132, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_134 = V_7;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_133, L_134, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0290:
	{
		int32_t L_135 = __this->___root;
		int32_t L_136 = V_4;
		if ((!(((uint32_t)L_135) == ((uint32_t)L_136))))
		{
			goto IL_02a2;
		}
	}
	{
		int32_t L_137 = V_7;
		__this->___root = L_137;
	}

IL_02a2:
	{
		int32_t L_138 = V_4;
		RBTree_1_FreeNode_m2284FBA53D1081B794CEC801EE442A646B7C0AA8(__this, L_138, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_4 = 0;
		goto IL_02e4;
	}

IL_02af:
	{
		int32_t L_139 = V_4;
		int32_t L_140;
		L_140 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_139, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_140)
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_141 = ___0_root_id;
		if (L_141)
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_142 = ___1_z_id;
		int32_t L_143 = V_4;
		if ((((int32_t)L_142) == ((int32_t)L_143)))
		{
			goto IL_02c9;
		}
	}
	{
		Exception_t* L_144;
		L_144 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144, method);
	}

IL_02c9:
	{
		int32_t L_145 = ___0_root_id;
		if (!L_145)
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_146 = V_4;
		int32_t L_147 = ___0_root_id;
		RBTree_1_SetNext_mADA41B6665596F49964D1AC259BC1CAEDEB86AC8(__this, L_146, L_147, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_148 = V_4;
		int32_t L_149 = ___0_root_id;
		RuntimeObject* L_150;
		L_150 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_149, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_mBBCC4BFD81ED932DEF3BAACA07389DAF7017AFF9(__this, L_148, L_150, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
	}

IL_02e4:
	{
		int32_t L_151 = V_1;
		int32_t L_152 = ___1_z_id;
		if ((((int32_t)L_151) == ((int32_t)L_152)))
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_153 = V_1;
		int32_t L_154 = ___1_z_id;
		int32_t L_155;
		L_155 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_154, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_153, L_155, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_156 = V_1;
		int32_t L_157 = ___1_z_id;
		int32_t L_158;
		L_158 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_157, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_156, L_158, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_159 = V_1;
		int32_t L_160 = ___1_z_id;
		int32_t L_161;
		L_161 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_160, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_159, L_161, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_162 = V_1;
		int32_t L_163 = ___1_z_id;
		int32_t L_164;
		L_164 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_163, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		RBTree_1_SetSubTreeSize_m0EBB22E8908E7A97007F5BA1CB2F7BE4ED2AB1FD(__this, L_162, L_164, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_165 = ___1_z_id;
		int32_t L_166;
		L_166 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_165, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (!L_166)
		{
			goto IL_036a;
		}
	}
	{
		int32_t L_167 = V_1;
		int32_t L_168 = ___1_z_id;
		int32_t L_169;
		L_169 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_168, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_167, L_169, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_170 = ___1_z_id;
		int32_t L_171;
		L_171 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_170, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_172;
		L_172 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_171, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_173 = ___1_z_id;
		if ((!(((uint32_t)L_172) == ((uint32_t)L_173))))
		{
			goto IL_035a;
		}
	}
	{
		int32_t L_174 = ___1_z_id;
		int32_t L_175;
		L_175 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_174, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_176 = V_1;
		RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052(__this, L_175, L_176, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0372;
	}

IL_035a:
	{
		int32_t L_177 = ___1_z_id;
		int32_t L_178;
		L_178 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_177, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_179 = V_1;
		RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4(__this, L_178, L_179, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		goto IL_0372;
	}

IL_036a:
	{
		int32_t L_180 = V_1;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_180, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0372:
	{
		int32_t L_181 = ___1_z_id;
		int32_t L_182;
		L_182 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_181, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_182)
		{
			goto IL_0389;
		}
	}
	{
		int32_t L_183 = ___1_z_id;
		int32_t L_184;
		L_184 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_183, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_185 = V_1;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_184, L_185, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0389:
	{
		int32_t L_186 = ___1_z_id;
		int32_t L_187;
		L_187 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_186, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_187)
		{
			goto IL_03a0;
		}
	}
	{
		int32_t L_188 = ___1_z_id;
		int32_t L_189;
		L_189 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_188, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_190 = V_1;
		RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493(__this, L_189, L_190, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_03a0:
	{
		int32_t L_191 = __this->___root;
		int32_t L_192 = ___1_z_id;
		if ((!(((uint32_t)L_191) == ((uint32_t)L_192))))
		{
			goto IL_03b2;
		}
	}
	{
		int32_t L_193 = V_1;
		__this->___root = L_193;
		goto IL_03b9;
	}

IL_03b2:
	{
		int32_t L_194 = ___0_root_id;
		int32_t L_195 = ___1_z_id;
		if ((!(((uint32_t)L_194) == ((uint32_t)L_195))))
		{
			goto IL_03b9;
		}
	}
	{
		int32_t L_196 = V_1;
		___0_root_id = L_196;
	}

IL_03b9:
	{
		int32_t L_197 = V_4;
		if (!L_197)
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_198 = V_4;
		int32_t L_199;
		L_199 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_198, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_200 = ___1_z_id;
		if ((!(((uint32_t)L_199) == ((uint32_t)L_200))))
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		RBTree_1_SetNext_mADA41B6665596F49964D1AC259BC1CAEDEB86AC8(__this, L_201, L_202, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
	}

IL_03d1:
	{
		int32_t L_203 = ___1_z_id;
		RBTree_1_FreeNode_m2284FBA53D1081B794CEC801EE442A646B7C0AA8(__this, L_203, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		int32_t L_204 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_204, 1));
		int32_t L_205 = ___1_z_id;
		return L_205;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteFixup_m7FD4570F1436DF16B372F9317522C5D1CDB8B597_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B52_0 = 0;
	int32_t G_B56_0 = 0;
	int32_t G_B60_0 = 0;
	{
		int32_t L_0 = ___1_x_id;
		if (L_0)
		{
			goto IL_0305;
		}
	}
	{
		int32_t L_1 = ___2_px_id;
		if (L_1)
		{
			goto IL_0305;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_2 = ___1_x_id;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___1_x_id;
		int32_t L_4 = ___1_x_id;
		int32_t L_5;
		L_5 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_6;
		L_6 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((((int32_t)L_3) == ((int32_t)L_6)))
		{
			goto IL_0033;
		}
	}

IL_0021:
	{
		int32_t L_7 = ___1_x_id;
		if (L_7)
		{
			goto IL_0168;
		}
	}
	{
		int32_t L_8 = ___2_px_id;
		int32_t L_9;
		L_9 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_9)
		{
			goto IL_0168;
		}
	}

IL_0033:
	{
		int32_t L_10 = ___1_x_id;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_13;
		L_13 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B10_0 = L_13;
		goto IL_004c;
	}

IL_0045:
	{
		int32_t L_14 = ___2_px_id;
		int32_t L_15;
		L_15 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B10_0 = L_15;
	}

IL_004c:
	{
		V_0 = G_B10_0;
		int32_t L_16 = V_0;
		if (L_16)
		{
			goto IL_0058;
		}
	}
	{
		Exception_t* L_17;
		L_17 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)14), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0058:
	{
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_19)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_20 = V_0;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_20, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_21 = ___2_px_id;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_21, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_22 = ___0_root_id;
		int32_t L_23 = ___2_px_id;
		int32_t L_24 = ___3_mainTreeNodeID;
		int32_t L_25;
		L_25 = RBTree_1_LeftRotate_m6FAEDAE5FEA845BB51C6E52F7F3797987043F8A3(__this, L_22, L_23, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_25;
		int32_t L_26 = ___1_x_id;
		if (!L_26)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_29;
		L_29 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B16_0 = L_29;
		goto IL_0096;
	}

IL_008f:
	{
		int32_t L_30 = ___2_px_id;
		int32_t L_31;
		L_31 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B16_0 = L_31;
	}

IL_0096:
	{
		V_0 = G_B16_0;
	}

IL_0097:
	{
		int32_t L_32 = V_0;
		int32_t L_33;
		L_33 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_34;
		L_34 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_35 = V_0;
		int32_t L_36;
		L_36 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_37;
		L_37 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_38 = V_0;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_38, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_39 = ___2_px_id;
		___1_x_id = L_39;
		int32_t L_40 = ___2_px_id;
		int32_t L_41;
		L_41 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_41;
		goto IL_0305;
	}

IL_00d0:
	{
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_44;
		L_44 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_45 = V_0;
		int32_t L_46;
		L_46 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_46, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_47 = V_0;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_47, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_48 = ___0_root_id;
		int32_t L_49 = V_0;
		int32_t L_50 = ___3_mainTreeNodeID;
		int32_t L_51;
		L_51 = RBTree_1_RightRotate_m2A33BBCDE144E00B7E1C6C1A17ECF008E2A5660C(__this, L_48, L_49, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_51;
		int32_t L_52 = ___1_x_id;
		if (!L_52)
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_53 = ___1_x_id;
		int32_t L_54;
		L_54 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_55;
		L_55 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B24_0 = L_55;
		goto IL_011b;
	}

IL_0114:
	{
		int32_t L_56 = ___2_px_id;
		int32_t L_57;
		L_57 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B24_0 = L_57;
	}

IL_011b:
	{
		V_0 = G_B24_0;
	}

IL_011c:
	{
		int32_t L_58 = V_0;
		int32_t L_59 = ___2_px_id;
		int32_t L_60;
		L_60 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_58, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_61 = ___2_px_id;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_61, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_62 = V_0;
		int32_t L_63;
		L_63 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_63, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_64 = ___0_root_id;
		int32_t L_65 = ___2_px_id;
		int32_t L_66 = ___3_mainTreeNodeID;
		int32_t L_67;
		L_67 = RBTree_1_LeftRotate_m6FAEDAE5FEA845BB51C6E52F7F3797987043F8A3(__this, L_64, L_65, L_66, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_67;
		int32_t L_68 = ___0_root_id;
		if (!L_68)
		{
			goto IL_0152;
		}
	}
	{
		int32_t L_69 = ___0_root_id;
		G_B28_0 = L_69;
		goto IL_0158;
	}

IL_0152:
	{
		int32_t L_70 = __this->___root;
		G_B28_0 = L_70;
	}

IL_0158:
	{
		___1_x_id = G_B28_0;
		int32_t L_71 = ___1_x_id;
		int32_t L_72;
		L_72 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_72;
		goto IL_0305;
	}

IL_0168:
	{
		int32_t L_73 = ___2_px_id;
		int32_t L_74;
		L_74 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_73, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_74;
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_76)
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_77 = V_0;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_77, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_78 = ___1_x_id;
		if (!L_78)
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_79 = ___2_px_id;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_79, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_80 = ___0_root_id;
		int32_t L_81 = ___2_px_id;
		int32_t L_82 = ___3_mainTreeNodeID;
		int32_t L_83;
		L_83 = RBTree_1_RightRotate_m2A33BBCDE144E00B7E1C6C1A17ECF008E2A5660C(__this, L_80, L_81, L_82, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_83;
		int32_t L_84 = ___1_x_id;
		if (!L_84)
		{
			goto IL_01aa;
		}
	}
	{
		int32_t L_85 = ___1_x_id;
		int32_t L_86;
		L_86 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_85, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_87;
		L_87 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_86, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B34_0 = L_87;
		goto IL_01b1;
	}

IL_01aa:
	{
		int32_t L_88 = ___2_px_id;
		int32_t L_89;
		L_89 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_88, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B34_0 = L_89;
	}

IL_01b1:
	{
		V_0 = G_B34_0;
		goto IL_01ed;
	}

IL_01b4:
	{
		int32_t L_90 = ___2_px_id;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_90, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_91 = ___0_root_id;
		int32_t L_92 = ___2_px_id;
		int32_t L_93 = ___3_mainTreeNodeID;
		int32_t L_94;
		L_94 = RBTree_1_RightRotate_m2A33BBCDE144E00B7E1C6C1A17ECF008E2A5660C(__this, L_91, L_92, L_93, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_94;
		int32_t L_95 = ___1_x_id;
		if (!L_95)
		{
			goto IL_01da;
		}
	}
	{
		int32_t L_96 = ___1_x_id;
		int32_t L_97;
		L_97 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_96, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_98;
		L_98 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_97, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B38_0 = L_98;
		goto IL_01e1;
	}

IL_01da:
	{
		int32_t L_99 = ___2_px_id;
		int32_t L_100;
		L_100 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_99, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B38_0 = L_100;
	}

IL_01e1:
	{
		V_0 = G_B38_0;
		int32_t L_101 = V_0;
		if (L_101)
		{
			goto IL_01ed;
		}
	}
	{
		Exception_t* L_102;
		L_102 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)11), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_102, method);
	}

IL_01ed:
	{
		int32_t L_103 = V_0;
		int32_t L_104;
		L_104 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_103, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_105;
		L_105 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_104, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_105) == ((uint32_t)1))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_106, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_108;
		L_108 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_107, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_108) == ((uint32_t)1))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_109 = V_0;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_109, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_110 = ___2_px_id;
		___1_x_id = L_110;
		int32_t L_111 = ___2_px_id;
		int32_t L_112;
		L_112 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_111, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_112;
		goto IL_0305;
	}

IL_0226:
	{
		int32_t L_113 = V_0;
		int32_t L_114;
		L_114 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_113, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_115;
		L_115 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_114, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_115) == ((uint32_t)1))))
		{
			goto IL_0272;
		}
	}
	{
		int32_t L_116 = V_0;
		int32_t L_117;
		L_117 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_116, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_117, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_118 = V_0;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_118, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_119 = ___0_root_id;
		int32_t L_120 = V_0;
		int32_t L_121 = ___3_mainTreeNodeID;
		int32_t L_122;
		L_122 = RBTree_1_LeftRotate_m6FAEDAE5FEA845BB51C6E52F7F3797987043F8A3(__this, L_119, L_120, L_121, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_122;
		int32_t L_123 = ___1_x_id;
		if (!L_123)
		{
			goto IL_026a;
		}
	}
	{
		int32_t L_124 = ___1_x_id;
		int32_t L_125;
		L_125 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_124, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_126;
		L_126 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_125, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B47_0 = L_126;
		goto IL_0271;
	}

IL_026a:
	{
		int32_t L_127 = ___2_px_id;
		int32_t L_128;
		L_128 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_127, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B47_0 = L_128;
	}

IL_0271:
	{
		V_0 = G_B47_0;
	}

IL_0272:
	{
		int32_t L_129 = ___1_x_id;
		if (!L_129)
		{
			goto IL_02be;
		}
	}
	{
		int32_t L_130 = V_0;
		int32_t L_131 = ___2_px_id;
		int32_t L_132;
		L_132 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_131, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_130, L_132, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_133 = ___2_px_id;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_133, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_134 = V_0;
		int32_t L_135;
		L_135 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_134, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_135, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_136 = ___0_root_id;
		int32_t L_137 = ___2_px_id;
		int32_t L_138 = ___3_mainTreeNodeID;
		int32_t L_139;
		L_139 = RBTree_1_RightRotate_m2A33BBCDE144E00B7E1C6C1A17ECF008E2A5660C(__this, L_136, L_137, L_138, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_139;
		int32_t L_140 = ___0_root_id;
		if (!L_140)
		{
			goto IL_02ab;
		}
	}
	{
		int32_t L_141 = ___0_root_id;
		G_B52_0 = L_141;
		goto IL_02b1;
	}

IL_02ab:
	{
		int32_t L_142 = __this->___root;
		G_B52_0 = L_142;
	}

IL_02b1:
	{
		___1_x_id = G_B52_0;
		int32_t L_143 = ___1_x_id;
		int32_t L_144;
		L_144 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_143, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_144;
		goto IL_0305;
	}

IL_02be:
	{
		int32_t L_145 = V_0;
		int32_t L_146 = ___2_px_id;
		int32_t L_147;
		L_147 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_146, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_145, L_147, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_148 = ___2_px_id;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_148, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_149 = V_0;
		int32_t L_150;
		L_150 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_149, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_150, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_151 = ___0_root_id;
		int32_t L_152 = ___2_px_id;
		int32_t L_153 = ___3_mainTreeNodeID;
		int32_t L_154;
		L_154 = RBTree_1_RightRotate_m2A33BBCDE144E00B7E1C6C1A17ECF008E2A5660C(__this, L_151, L_152, L_153, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_154;
		int32_t L_155 = ___0_root_id;
		if (!L_155)
		{
			goto IL_02f4;
		}
	}
	{
		int32_t L_156 = ___0_root_id;
		G_B56_0 = L_156;
		goto IL_02fa;
	}

IL_02f4:
	{
		int32_t L_157 = __this->___root;
		G_B56_0 = L_157;
	}

IL_02fa:
	{
		___1_x_id = G_B56_0;
		int32_t L_158 = ___1_x_id;
		int32_t L_159;
		L_159 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_158, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_159;
	}

IL_0305:
	{
		int32_t L_160 = ___0_root_id;
		if (!L_160)
		{
			goto IL_030b;
		}
	}
	{
		int32_t L_161 = ___0_root_id;
		G_B60_0 = L_161;
		goto IL_0311;
	}

IL_030b:
	{
		int32_t L_162 = __this->___root;
		G_B60_0 = L_162;
	}

IL_0311:
	{
		int32_t L_163 = ___1_x_id;
		if ((((int32_t)G_B60_0) == ((int32_t)L_163)))
		{
			goto IL_0321;
		}
	}
	{
		int32_t L_164 = ___1_x_id;
		int32_t L_165;
		L_165 = RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1(__this, L_164, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((((int32_t)L_165) == ((int32_t)1)))
		{
			goto IL_000e;
		}
	}

IL_0321:
	{
		int32_t L_166 = ___1_x_id;
		RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2(__this, L_166, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_167 = ___0_root_id;
		return L_167;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SearchSubTree_m739962F4F45C09FA4CF594B0EBDBE94D778F7549_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_root_id, RuntimeObject* ___1_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = ___0_root_id;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->____accessMethod;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		Exception_t* L_2;
		L_2 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)17), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_root_id;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = ___0_root_id;
		G_B6_0 = L_4;
		goto IL_0020;
	}

IL_001a:
	{
		int32_t L_5 = __this->___root;
		G_B6_0 = L_5;
	}

IL_0020:
	{
		V_0 = G_B6_0;
		goto IL_005e;
	}

IL_0023:
	{
		int32_t L_6 = ___0_root_id;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_7 = ___1_key;
		int32_t L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_10;
		L_10 = VirtualFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(6, __this, L_7, L_9);
		G_B10_0 = L_10;
		goto IL_0044;
	}

IL_0036:
	{
		RuntimeObject* L_11 = ___1_key;
		int32_t L_12 = V_0;
		RuntimeObject* L_13;
		L_13 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_14;
		L_14 = VirtualFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(5, __this, L_11, L_13);
		G_B10_0 = L_14;
	}

IL_0044:
	{
		V_1 = G_B10_0;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_17 = V_0;
		int32_t L_18;
		L_18 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_18;
		goto IL_005e;
	}

IL_0056:
	{
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_20;
	}

IL_005e:
	{
		int32_t L_21 = V_0;
		if (L_21)
		{
			goto IL_0023;
		}
	}

IL_0061:
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTree_1_get_Item_m32AD1E01917C63769D37170692790A4A3A7C2EF9_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_1;
		L_1 = RBTree_1_GetNodeByIndex_m948B6DED575DEAF9BC7735B1CD602A208058485C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_2 = L_1.____nodeID;
		RuntimeObject* L_3;
		L_3 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 RBTree_1_GetNodeByKey_mF3719F0495F9D5A4339890BE2EB8999ACD068EFA_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = RBTree_1_SearchSubTree_m739962F4F45C09FA4CF594B0EBDBE94D778F7549(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		RuntimeObject* L_6 = ___0_key;
		int32_t L_7;
		L_7 = RBTree_1_SearchSubTree_m739962F4F45C09FA4CF594B0EBDBE94D778F7549(__this, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		int32_t L_8 = V_0;
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NodePath__ctor_m78E9206041A7104A8531998AA3DF9EC7DE5E4A45((&L_9), L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_9;
	}

IL_0027:
	{
		int32_t L_10 = V_0;
		RuntimeObject* L_11;
		L_11 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_1 = L_11;
		RuntimeObject* L_12 = ___0_key;
		NullCheck((V_1));
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (V_1), L_12);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		V_0 = 0;
	}

IL_0046:
	{
		int32_t L_14 = V_0;
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		NodePath__ctor_m78E9206041A7104A8531998AA3DF9EC7DE5E4A45((&L_15), L_14, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByKey_m8845F0D85AE0771B0D6FC36F4CDB52BE0F3D43AD_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (-1);
		RuntimeObject* L_0 = ___0_key;
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_1;
		L_1 = RBTree_1_GetNodeByKey_mF3719F0495F9D5A4339890BE2EB8999ACD068EFA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_1 = L_1;
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_2 = V_1;
		int32_t L_3 = L_2.____nodeID;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_4 = V_1;
		int32_t L_5;
		L_5 = RBTree_1_GetIndexByNodePath_mA462180E40EFE84991C0B4E4CA85D960D8655784(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		V_0 = L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNode_m579F0FCDCC9A79BC70EEE156F07CC896029A410B_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_node, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___0_node;
		int32_t L_2;
		L_2 = RBTree_1_ComputeIndexByNode_mBCE98E9CE148E35692561C8E3447BCD0DA72F2F3(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___0_node;
		int32_t L_4;
		L_4 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = ___0_node;
		int32_t L_6;
		L_6 = RBTree_1_ComputeIndexWithSatelliteByNode_m1305DFA6E20E6D34D7496686C6CFFB676A0265F2(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_6;
	}

IL_0021:
	{
		int32_t L_7 = ___0_node;
		RuntimeObject* L_8;
		L_8 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_9;
		L_9 = RBTree_1_SearchSubTree_m739962F4F45C09FA4CF594B0EBDBE94D778F7549(__this, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_0 = L_9;
		int32_t L_10 = V_0;
		int32_t L_11 = ___0_node;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_12 = ___0_node;
		int32_t L_13;
		L_13 = RBTree_1_ComputeIndexWithSatelliteByNode_m1305DFA6E20E6D34D7496686C6CFFB676A0265F2(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_13;
	}

IL_003c:
	{
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = RBTree_1_ComputeIndexWithSatelliteByNode_m1305DFA6E20E6D34D7496686C6CFFB676A0265F2(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		int32_t L_16 = ___0_node;
		int32_t L_17;
		L_17 = RBTree_1_ComputeIndexByNode_mBCE98E9CE148E35692561C8E3447BCD0DA72F2F3(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return ((int32_t)il2cpp_codegen_add(L_15, L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNodePath_mA462180E40EFE84991C0B4E4CA85D960D8655784_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 ___0_path, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_1 = ___0_path;
		int32_t L_2 = L_1.____nodeID;
		int32_t L_3;
		L_3 = RBTree_1_ComputeIndexByNode_mBCE98E9CE148E35692561C8E3447BCD0DA72F2F3(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return L_3;
	}

IL_0015:
	{
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_4 = ___0_path;
		int32_t L_5 = L_4.____mainTreeNodeID;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_6 = ___0_path;
		int32_t L_7 = L_6.____nodeID;
		int32_t L_8;
		L_8 = RBTree_1_ComputeIndexWithSatelliteByNode_m1305DFA6E20E6D34D7496686C6CFFB676A0265F2(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_8;
	}

IL_002a:
	{
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_9 = ___0_path;
		int32_t L_10 = L_9.____mainTreeNodeID;
		int32_t L_11;
		L_11 = RBTree_1_ComputeIndexWithSatelliteByNode_m1305DFA6E20E6D34D7496686C6CFFB676A0265F2(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_12 = ___0_path;
		int32_t L_13 = L_12.____nodeID;
		int32_t L_14;
		L_14 = RBTree_1_ComputeIndexByNode_mBCE98E9CE148E35692561C8E3447BCD0DA72F2F3(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return ((int32_t)il2cpp_codegen_add(L_11, L_14));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexByNode_mBCE98E9CE148E35692561C8E3447BCD0DA72F2F3_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_2;
		goto IL_0037;
	}

IL_0010:
	{
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_1 = L_4;
		int32_t L_5 = ___0_nodeId;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_11;
		L_11 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_add(L_11, 1))));
	}

IL_0034:
	{
		int32_t L_12 = V_1;
		___0_nodeId = L_12;
	}

IL_0037:
	{
		int32_t L_13 = ___0_nodeId;
		if (L_13)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m1305DFA6E20E6D34D7496686C6CFFB676A0265F2_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_2;
		goto IL_004f;
	}

IL_0010:
	{
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_1 = L_4;
		int32_t L_5 = ___0_nodeId;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_11;
		L_11 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_13)
		{
			G_B4_0 = L_11;
			G_B4_1 = L_8;
			goto IL_0048;
		}
		G_B3_0 = L_11;
		G_B3_1 = L_8;
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_16;
		L_16 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B5_0 = L_16;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0049;
	}

IL_0048:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0049:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B5_2, ((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0))));
	}

IL_004c:
	{
		int32_t L_17 = V_1;
		___0_nodeId = L_17;
	}

IL_004f:
	{
		int32_t L_18 = ___0_nodeId;
		if (L_18)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 RBTree_1_GetNodeByIndex_m948B6DED575DEAF9BC7735B1CD602A208058485C_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_userIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->___root;
		int32_t L_2 = ___0_userIndex;
		int32_t L_3;
		L_3 = RBTree_1_ComputeNodeByIndex_m1985EC887852D977760416BBE4644EB35499D6E5(__this, L_1, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		V_0 = L_3;
		V_1 = 0;
		goto IL_0026;
	}

IL_001c:
	{
		int32_t L_4 = ___0_userIndex;
		int32_t L_5;
		L_5 = RBTree_1_ComputeNodeByIndex_m6A133AF17BE38F8B527CD83716760BF90D624007(__this, L_4, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_5;
	}

IL_0026:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_7 = __this->____accessMethod;
		if ((!(((uint32_t)2) == ((uint32_t)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___0_userIndex;
		Exception_t* L_9;
		L_9 = ExceptionBuilder_RowOutOfRange_m2F6883E5D2F9AF63A3F9DC5521799A7E270F1054(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0039:
	{
		Exception_t* L_10;
		L_10 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		NodePath_tA355B40E34B64AADE90850F8BA7180852D3B1BD2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NodePath__ctor_m78E9206041A7104A8531998AA3DF9EC7DE5E4A45((&L_13), L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m6A133AF17BE38F8B527CD83716760BF90D624007_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t* L_1 = ___1_satelliteRootId;
		*((int32_t*)L_1) = (int32_t)0;
		int32_t L_2 = __this->___root;
		V_0 = L_2;
		V_1 = (-1);
		goto IL_0088;
	}

IL_0013:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_6;
		goto IL_0088;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14;
		L_14 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_15;
		L_15 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((((int32_t)L_11) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_12, L_15)), 1)))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_16 = ___1_satelliteRootId;
		int32_t L_17 = V_0;
		*((int32_t*)L_16) = (int32_t)L_17;
		int32_t L_18 = ___0_index;
		int32_t L_19 = V_1;
		___0_index = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), 1));
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_22 = ___0_index;
		int32_t L_23;
		L_23 = RBTree_1_ComputeNodeByIndex_m1985EC887852D977760416BBE4644EB35499D6E5(__this, L_21, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return L_23;
	}

IL_005b:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (L_25)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_26 = ___0_index;
		int32_t L_27 = V_1;
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_26, L_27));
		goto IL_0080;
	}

IL_006b:
	{
		int32_t L_28 = ___0_index;
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_32;
		L_32 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_32)), 1))));
	}

IL_0080:
	{
		int32_t L_33 = V_0;
		int32_t L_34;
		L_34 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_34;
	}

IL_0088:
	{
		int32_t L_35 = V_0;
		if (!L_35)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_38;
		L_38 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		V_1 = L_39;
		int32_t L_40 = ___0_index;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_41 = V_0;
		int32_t L_42;
		L_42 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (L_42)
		{
			goto IL_0013;
		}
	}

IL_00ae:
	{
		int32_t L_43 = V_0;
		return L_43;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m1985EC887852D977760416BBE4644EB35499D6E5_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_002f;
	}

IL_0002:
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = ___1_index;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_6 = V_0;
		___0_x_id = L_6;
		goto IL_002f;
	}

IL_001d:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_9 = ___0_x_id;
		int32_t L_10;
		L_10 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		___0_x_id = L_10;
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_1;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
	}

IL_002f:
	{
		int32_t L_13 = ___0_x_id;
		if (L_13)
		{
			goto IL_0002;
		}
	}

IL_0032:
	{
		int32_t L_14 = ___0_x_id;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Insert_m35626D9659BB9AE29166EC4E41AB61BD5CD68FBA_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_mCD240B40D292EF9307F03939556ACA325503DA73(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_RBInsert_m25C1F9B8FA733750F51C334ED01E4EF680C3EBBC(__this, 0, L_2, 0, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Add_mECEC8AF0BF9CCB06504739491EA4AAAAF8C88ADE_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_mCD240B40D292EF9307F03939556ACA325503DA73(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_RBInsert_m25C1F9B8FA733750F51C334ED01E4EF680C3EBBC(__this, 0, L_2, 0, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTree_1_GetEnumerator_m2F0E5ABAED8811AF73BCA874B56A03F87908F951_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, const RuntimeMethod* method) 
{
	{
		RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A L_0;
		memset((&L_0), 0, sizeof(L_0));
		RBTreeEnumerator__ctor_m328625AEF6FC9DE908D967C4537628D1B2B61700((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 60), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_IndexOf_mC4650C040FAD95BD3F81362BCD765C733564B53E_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		int32_t L_0 = ___0_nodeId;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1 = ___0_nodeId;
		RuntimeObject* L_2;
		L_2 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RuntimeObject* L_3 = ___1_item;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)L_3))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = ___0_nodeId;
		int32_t L_5;
		L_5 = RBTree_1_GetIndexByNode_m579F0FCDCC9A79BC70EEE156F07CC896029A410B(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_5;
	}

IL_0021:
	{
		int32_t L_6 = ___0_nodeId;
		int32_t L_7;
		L_7 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RuntimeObject* L_8 = ___1_item;
		int32_t L_9;
		L_9 = RBTree_1_IndexOf_mC4650C040FAD95BD3F81362BCD765C733564B53E(__this, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		int32_t L_10 = L_9;
		V_0 = L_10;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}

IL_0036:
	{
		int32_t L_12 = ___0_nodeId;
		int32_t L_13;
		L_13 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RuntimeObject* L_14 = ___1_item;
		int32_t L_15;
		L_15 = RBTree_1_IndexOf_mC4650C040FAD95BD3F81362BCD765C733564B53E(__this, L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		int32_t L_16 = L_15;
		V_0 = L_16;
		int32_t L_17 = V_0;
		return L_17;
	}

IL_004b:
	{
		int32_t L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Insert_m2503BCE57A1429AEEEB22C7475C07346E71D6618_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_position, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_position;
		RuntimeObject* L_1 = ___1_item;
		int32_t L_2;
		L_2 = RBTree_1_InsertAt_m55077BF0B4CAA5C5ABD5911CCB68C789D7652B4D(__this, L_0, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_InsertAt_m55077BF0B4CAA5C5ABD5911CCB68C789D7652B4D_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_position, RuntimeObject* ___1_item, bool ___2_append, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___1_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_mCD240B40D292EF9307F03939556ACA325503DA73(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___0_position;
		bool L_4 = ___2_append;
		int32_t L_5;
		L_5 = RBTree_1_RBInsert_m25C1F9B8FA733750F51C334ED01E4EF680C3EBBC(__this, 0, L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RemoveAt_mCD1E524DC3AC069433DE12C7B452DB237E208D21_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_position;
		RuntimeObject* L_1;
		L_1 = RBTree_1_DeleteByIndex_m77EB3F96268C89DEA1218BA5DB3CB1A8EEC073F6(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_Clear_m151E8E1EDCEC1E206685E669A25AB2E7CA40293A_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, const RuntimeMethod* method) 
{
	{
		RBTree_1_InitTree_mF38DBB7EC2C944A42C6E22B0EE84ABAC77882781(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_CopyTo_m121CD9E5230E60651FEDA1684A99BBE78BAB5781_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		int32_t L_4;
		L_4 = RBTree_1_get_Count_m1F1E9F00D8DEEB51D299E897DDAD8F4903E2FA9B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		V_0 = L_4;
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_5, NULL);
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = RBTree_1_get_Count_m1F1E9F00D8DEEB51D299E897DDAD8F4903E2FA9B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003a;
		}
	}
	{
		Exception_t* L_9;
		L_9 = ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_003a:
	{
		int32_t L_10 = __this->___root;
		int32_t L_11;
		L_11 = RBTree_1_Minimum_m04A2B22ED80334294DFDB982AF71368FF96175C1(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_11;
		V_2 = 0;
		goto IL_006c;
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		int32_t L_13 = V_1;
		RuntimeObject* L_14;
		L_14 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_15 = ___1_index;
		int32_t L_16 = V_2;
		NullCheck(L_12);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_12, L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), NULL);
		int32_t L_17 = V_1;
		int32_t L_18;
		L_18 = RBTree_1_Successor_mBC120AD827A51511A7C816DDE34B411DCB52E9B0(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_18;
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006c:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_CopyTo_m6B9054A8EA421231E2399E1217118F8B5E503A57_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		int32_t L_4;
		L_4 = RBTree_1_get_Count_m1F1E9F00D8DEEB51D299E897DDAD8F4903E2FA9B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		V_0 = L_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = RBTree_1_get_Count_m1F1E9F00D8DEEB51D299E897DDAD8F4903E2FA9B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		Exception_t* L_8;
		L_8 = ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		int32_t L_9 = __this->___root;
		int32_t L_10;
		L_10 = RBTree_1_Minimum_m04A2B22ED80334294DFDB982AF71368FF96175C1(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_10;
		V_2 = 0;
		goto IL_0064;
	}

IL_0048:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		RuntimeObject* L_15;
		L_15 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_13))), (RuntimeObject*)L_15);
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = RBTree_1_Successor_mBC120AD827A51511A7C816DDE34B411DCB52E9B0(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_17;
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0064:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0048;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetRight_m120F92D6A66DAEE6286EC44B7815455485D312E4_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_rightNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____rightId = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetLeft_mAE236B89D5ECB3912FB6B88C73A7FF8186FFA052_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_leftNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____leftId = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetParent_mF5DDAE78F573B9633DA88D22C5B3E0BB67411493_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_parentNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____parentId = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetColor_m782DB769F0783E833F7C8327C79E48B53EB74FA2_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_color;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nodeColor = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetKey_mBBCC4BFD81ED932DEF3BAACA07389DAF7017AFF9_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, RuntimeObject* ___1_key, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		RuntimeObject* L_6 = ___1_key;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____keyOfNode = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____keyOfNode), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetNext_mADA41B6665596F49964D1AC259BC1CAEDEB86AC8_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_nextNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nextId = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetSubTreeSize_m0EBB22E8908E7A97007F5BA1CB2F7BE4ED2AB1FD_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_size;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_IncreaseSize_mC7A31D096BC854B6993FED4FE86BE2B2AB33281E_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t* L_6 = (int32_t*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize);
		int32_t* L_7 = L_6;
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RecomputeSize_m5B049EA2694E6343E2D30EDCDB34CC4C44A0FD08_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_5;
		L_5 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_6 = ___0_nodeId;
		int32_t L_7;
		L_7 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_7)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
			goto IL_0033;
		}
		G_B1_0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
	}
	{
		int32_t L_8 = ___0_nodeId;
		int32_t L_9;
		L_9 = RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_10;
		L_10 = RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0));
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_11 = __this->____pageTable;
		int32_t L_12 = ___0_nodeId;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)(L_12>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_15 = L_14->____slots;
		int32_t L_16 = ___0_nodeId;
		NullCheck(L_15);
		int32_t L_17 = V_0;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_16&((int32_t)65535))))))->____subTreeSize = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_DecreaseSize_m63463D3F02F9E581B66DAC4F5311669F2284C603_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t* L_6 = (int32_t*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize);
		int32_t* L_7 = L_6;
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Right_mC2B707153B503CB816DDE1CED80604D16F4680F2_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____rightId;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Left_mFDB3C5ADD048B375B7649866196AA662B34FE7E1_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____leftId;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Parent_mF131D5025BC9BFB6F24F78B608B5B85A7C2B4E25_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____parentId;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_color_mE7FE03FE3DA1675B1AB2EA861D8CE9C0F90506E1_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nodeColor;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Next_m283CA7267B0E07C0F7C86E1A0B9106398E64BE05_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nextId;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SubTreeSize_m7B3B4EC61186E6264F1C32FCE0C28CF982C97A7D_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t0F850FD85FF7F257D5AE177EE5D0F953B15E505D* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____keyOfNode;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1__ctor_mBBF836BB94CC49E8AC0AE2AFC6D8AF48529D56C1_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_accessMethod, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_accessMethod;
		__this->____accessMethod = L_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_InitTree_mBD10E36368D0DE9CEC19E97A64EFAEAD9034E44E_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___root = 0;
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = (TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9*)(TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)32));
		__this->____pageTable = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTable), (void*)L_0);
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_1 = __this->____pageTable;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_1)->max_length)), ((int32_t)32))), 1))/((int32_t)32))));
		__this->____pageTableMap = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTableMap), (void*)L_2);
		__this->____inUsePageCount = 0;
		__this->____nextFreePageLine = 0;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3;
		L_3 = ((  TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, ((int32_t)32), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_4 = __this->____pageTable;
		NullCheck(L_4);
		int32_t L_5 = 0;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_7 = L_6->____slots;
		NullCheck(L_7);
		il2cpp_codegen_write_instance_field_data<int32_t>(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),7), (int32_t)1);
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_8 = __this->____pageTable;
		NullCheck(L_8);
		int32_t L_9 = 0;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->____slotMap;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_12 = __this->____pageTable;
		NullCheck(L_12);
		int32_t L_13 = 0;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		((  void (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_14, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->____inUseNodeCount = 1;
		__this->____inUseSatelliteTreeCount = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreePage_m2957AF16D91742024D780E2EEE66A755BA85BE80_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* ___0_page, const RuntimeMethod* method) 
{
	{
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_0 = ___0_page;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_1 = __this->____pageTable;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_2 = ___0_page;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, NULL);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*)NULL);
		int32_t L_4 = __this->____inUsePageCount;
		__this->____inUsePageCount = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* RBTree_1_AllocPage_mC65889C74FEC664D14316BCBE4C93F0E49D63C14_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_2 = __this->____pageTable;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_size;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_5 = (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		((  void (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_5, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*)L_5);
		int32_t L_6 = V_0;
		__this->____nextFreePageLine = ((int32_t)(L_6/((int32_t)32)));
		goto IL_00a9;
	}

IL_0029:
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_7 = __this->____pageTable;
		NullCheck(L_7);
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_8 = (TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9*)(TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_7)->max_length)), 2)));
		V_1 = L_8;
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_9 = __this->____pageTable;
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_10 = V_1;
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_11 = __this->____pageTable;
		NullCheck(L_11);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_12 = V_1;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_12)->max_length)), ((int32_t)32))), 1))/((int32_t)32))));
		V_2 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____pageTableMap;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____pageTableMap;
		NullCheck(L_16);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, 0, ((int32_t)(((RuntimeArray*)L_16)->max_length)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____pageTableMap;
		NullCheck(L_17);
		__this->____nextFreePageLine = ((int32_t)(((RuntimeArray*)L_17)->max_length));
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_18 = __this->____pageTable;
		NullCheck(L_18);
		V_0 = ((int32_t)(((RuntimeArray*)L_18)->max_length));
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_19 = V_1;
		__this->____pageTable = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTable), (void*)L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		__this->____pageTableMap = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTableMap), (void*)L_20);
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_21 = __this->____pageTable;
		int32_t L_22 = V_0;
		int32_t L_23 = ___0_size;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_24 = (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		((  void (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_24, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*)L_24);
	}

IL_00a9:
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_25 = __this->____pageTable;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = V_0;
		NullCheck(L_28);
		((  void (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_30 = __this->____inUsePageCount;
		__this->____inUsePageCount = ((int32_t)il2cpp_codegen_add(L_30, 1));
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_31 = __this->____pageTable;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFull_mABC21002B886694A5D9EFD5F57FDCC8DDDAD86A9_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* ___0_page, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____pageTableMap;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_1 = ___0_page;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_0);
		int32_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_2/((int32_t)32))))));
		int32_t L_4 = *((int32_t*)L_3);
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_5 = ___0_page;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ((  int32_t (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4|((int32_t)(1<<((int32_t)(((int32_t)(L_6%((int32_t)32)))&((int32_t)31)))))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFree_mDCAF41D22A4AA6CE0F3F553F9E7F5AD0355DBC40_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* ___0_page, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____pageTableMap;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_1 = ___0_page;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_0);
		int32_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_2/((int32_t)32))))));
		int32_t L_4 = *((int32_t*)L_3);
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_5 = ___0_page;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ((  int32_t (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4&((~((int32_t)(1<<((int32_t)(((int32_t)(L_6%((int32_t)32)))&((int32_t)31)))))))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIntValueFromBitMap_m8F0068910A5B84B992C5C54617A5313C2736D58B_gshared (uint32_t ___0_bitMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		uint32_t L_0 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_0&((int32_t)-65536))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)16)));
		uint32_t L_2 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_2>>((int32_t)16)));
	}

IL_0016:
	{
		uint32_t L_3 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_3&((int32_t)65280))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 8));
		uint32_t L_5 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_5>>8));
	}

IL_0028:
	{
		uint32_t L_6 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_6&((int32_t)240))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 4));
		uint32_t L_8 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_8>>4));
	}

IL_003a:
	{
		uint32_t L_9 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_9&((int32_t)12))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 2));
		uint32_t L_11 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_11>>2));
	}

IL_0049:
	{
		uint32_t L_12 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_12&2)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreeNode_m957D2B53C8CD247585E24F28EC60600C27CA9E71_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Node_t67072FD48E4F8870CBFBBC65D20A021C6EA712BC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = ___0_nodeId;
		V_1 = ((int32_t)(L_4&((int32_t)65535)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_5 = V_0;
		NullCheck(L_5);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_6 = L_5->____slots;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_initobj(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), SizeOf_Node_t67072FD48E4F8870CBFBBC65D20A021C6EA712BC);
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_8 = V_0;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____slotMap;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/((int32_t)32))))));
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13 = V_1;
		*((int32_t*)L_11) = (int32_t)((int32_t)(L_12&((~((int32_t)(1<<((int32_t)(((int32_t)(L_13%((int32_t)32)))&((int32_t)31)))))))));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_14 = V_0;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ((  int32_t (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_2 = L_16;
		int32_t L_17 = V_2;
		NullCheck(L_15);
		((  void (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_15, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_18 = __this->____inUseNodeCount;
		__this->____inUseNodeCount = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_20)
		{
			goto IL_0071;
		}
	}
	{
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_21 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}

IL_0071:
	{
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = ((  int32_t (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_24 = V_0;
		NullCheck(L_24);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_25 = L_24->____slots;
		NullCheck(L_25);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_25)->max_length)), 1))))))
		{
			goto IL_008a;
		}
	}
	{
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_26 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_008a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexOfPageWithFreeSlot_m018EEE87827A0A2B917841F12D519A405B0EA46A_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, bool ___0_allocatedPage, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		int32_t L_0 = __this->____nextFreePageLine;
		V_0 = L_0;
		V_1 = (-1);
		goto IL_0073;
	}

IL_000b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____pageTableMap;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint32_t)L_4) < ((uint32_t)(-1)))))
		{
			goto IL_006f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____pageTableMap;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = (uint32_t)L_8;
		goto IL_006a;
	}

IL_0021:
	{
		uint32_t L_9 = V_2;
		uint32_t L_10 = V_2;
		V_3 = (uint32_t)((int32_t)(((~((int32_t)L_9)))&((int32_t)il2cpp_codegen_add((int32_t)L_10, 1))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____pageTableMap;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		uint32_t L_15 = V_3;
		if (!((int64_t)(((int64_t)L_14)&((int64_t)(uint64_t)L_15))))
		{
			goto IL_003d;
		}
	}
	{
		Exception_t* L_16;
		L_16 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_003d:
	{
		int32_t L_17 = V_0;
		uint32_t L_18 = V_3;
		int32_t L_19;
		L_19 = ((  int32_t (*) (uint32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)32))), L_19));
		bool L_20 = ___0_allocatedPage;
		if (!L_20)
		{
			goto IL_0058;
		}
	}
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_21 = __this->____pageTable;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (!L_24)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_25 = V_1;
		return L_25;
	}

IL_0058:
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_26 = __this->____pageTable;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if (L_29)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_30 = V_1;
		return L_30;
	}

IL_0064:
	{
		V_1 = (-1);
		uint32_t L_31 = V_2;
		uint32_t L_32 = V_3;
		V_2 = (uint32_t)((int32_t)((int32_t)L_31|(int32_t)L_32));
	}

IL_006a:
	{
		uint32_t L_33 = V_2;
		if (((int32_t)((int32_t)L_33^(-1))))
		{
			goto IL_0021;
		}
	}

IL_006f:
	{
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0073:
	{
		int32_t L_35 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____pageTableMap;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_37 = __this->____nextFreePageLine;
		if (!L_37)
		{
			goto IL_0095;
		}
	}
	{
		__this->____nextFreePageLine = 0;
		bool L_38 = ___0_allocatedPage;
		int32_t L_39;
		L_39 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_1 = L_39;
	}

IL_0095:
	{
		int32_t L_40 = V_1;
		return L_40;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_get_Count_mEEBAEC4856EDAB96F400E22D1AE495981435BD97_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseNodeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_get_HasDuplicates_m1E23E7D8FF36D180A0204F2A1C753820E592CC31_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetNewNode_m2FCEB75981A0A96DA15F70FEA6DF68C0103E7087_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*)NULL;
		int32_t L_0;
		L_0 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_001c;
		}
	}
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_2 = __this->____pageTable;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		goto IL_00a5;
	}

IL_001c:
	{
		int32_t L_6 = __this->____inUsePageCount;
		if ((((int32_t)L_6) >= ((int32_t)4)))
		{
			goto IL_0030;
		}
	}
	{
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_7;
		L_7 = ((  TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, ((int32_t)32), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_7;
		goto IL_00a5;
	}

IL_0030:
	{
		int32_t L_8 = __this->____inUsePageCount;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0048;
		}
	}
	{
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_9;
		L_9 = ((  TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, ((int32_t)256), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_9;
		goto IL_00a5;
	}

IL_0048:
	{
		int32_t L_10 = __this->____inUsePageCount;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0063;
		}
	}
	{
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_11;
		L_11 = ((  TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, ((int32_t)1024), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_11;
		goto IL_00a5;
	}

IL_0063:
	{
		int32_t L_12 = __this->____inUsePageCount;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)4096))))
		{
			goto IL_007e;
		}
	}
	{
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_13;
		L_13 = ((  TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, ((int32_t)4096), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_13;
		goto IL_00a5;
	}

IL_007e:
	{
		int32_t L_14 = __this->____inUsePageCount;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)32768))))
		{
			goto IL_0099;
		}
	}
	{
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_15;
		L_15 = ((  TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, ((int32_t)8192), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_15;
		goto IL_00a5;
	}

IL_0099:
	{
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_16;
		L_16 = ((  TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, ((int32_t)65536), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_16;
	}

IL_00a5:
	{
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ((  int32_t (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_17, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_2 = L_18;
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_00b8;
		}
	}
	{
		Exception_t* L_20;
		L_20 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_00b8:
	{
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_21 = V_0;
		NullCheck(L_21);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_22 = L_21->____slots;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = ((  int32_t (*) (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_26 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),0), ((int32_t)(((int32_t)(L_25<<((int32_t)16)))|L_26)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_27 = V_0;
		NullCheck(L_27);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_28 = L_27->____slots;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		il2cpp_codegen_write_instance_field_data<int32_t>(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),5), 1);
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_30 = V_0;
		NullCheck(L_30);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_31 = L_30->____slots;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_key : &___0_key), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		il2cpp_codegen_write_instance_field_data(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),6), L_33, SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_34 = V_0;
		NullCheck(L_34);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_35 = L_34->____slots;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),0));
		return L_37;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Successor_mB979F0580EBF365A61B9983E40058279D75F3F7C_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_x_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___0_x_id;
		int32_t L_3;
		L_3 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_4;
		L_4 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_4;
	}

IL_0017:
	{
		int32_t L_5 = ___0_x_id;
		int32_t L_6;
		L_6 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_6;
		goto IL_002c;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		___0_x_id = L_7;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_9;
	}

IL_002c:
	{
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_11 = ___0_x_id;
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0021;
		}
	}

IL_0039:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_Successor_mD19FB17B25F7A938B42B347A19B6FF6525F3C54C_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_nodeId;
		int32_t L_1 = *((int32_t*)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t* L_2 = ___0_nodeId;
		int32_t* L_3 = ___1_mainTreeNodeId;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5;
		L_5 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		*((int32_t*)L_2) = (int32_t)L_5;
		int32_t* L_6 = ___1_mainTreeNodeId;
		*((int32_t*)L_6) = (int32_t)0;
		goto IL_0032;
	}

IL_0013:
	{
		int32_t* L_7 = ___0_nodeId;
		int32_t* L_8 = ___0_nodeId;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10;
		L_10 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		*((int32_t*)L_7) = (int32_t)L_10;
		int32_t* L_11 = ___0_nodeId;
		int32_t L_12 = *((int32_t*)L_11);
		if (L_12)
		{
			goto IL_0032;
		}
	}
	{
		int32_t* L_13 = ___1_mainTreeNodeId;
		int32_t L_14 = *((int32_t*)L_13);
		if (!L_14)
		{
			goto IL_0032;
		}
	}
	{
		int32_t* L_15 = ___0_nodeId;
		int32_t* L_16 = ___1_mainTreeNodeId;
		int32_t L_17 = *((int32_t*)L_16);
		int32_t L_18;
		L_18 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		*((int32_t*)L_15) = (int32_t)L_18;
		int32_t* L_19 = ___1_mainTreeNodeId;
		*((int32_t*)L_19) = (int32_t)0;
	}

IL_0032:
	{
		int32_t* L_20 = ___0_nodeId;
		int32_t L_21 = *((int32_t*)L_20);
		if (!L_21)
		{
			goto IL_0062;
		}
	}
	{
		int32_t* L_22 = ___0_nodeId;
		int32_t L_23 = *((int32_t*)L_22);
		int32_t L_24;
		L_24 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_24)
		{
			goto IL_0060;
		}
	}
	{
		int32_t* L_25 = ___1_mainTreeNodeId;
		int32_t L_26 = *((int32_t*)L_25);
		if (!L_26)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t* L_27;
		L_27 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)21), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
	}

IL_004c:
	{
		int32_t* L_28 = ___1_mainTreeNodeId;
		int32_t* L_29 = ___0_nodeId;
		int32_t L_30 = *((int32_t*)L_29);
		*((int32_t*)L_28) = (int32_t)L_30;
		int32_t* L_31 = ___0_nodeId;
		int32_t* L_32 = ___0_nodeId;
		int32_t L_33 = *((int32_t*)L_32);
		int32_t L_34;
		L_34 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_35;
		L_35 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		*((int32_t*)L_31) = (int32_t)L_35;
	}

IL_0060:
	{
		return (bool)1;
	}

IL_0062:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Minimum_m1F9D3171FC5A795A74AC5CA69F3A7BF7F2B2D8C1_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_x_id, const RuntimeMethod* method) 
{
	{
		goto IL_000b;
	}

IL_0002:
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		___0_x_id = L_1;
	}

IL_000b:
	{
		int32_t L_2 = ___0_x_id;
		int32_t L_3;
		L_3 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_3)
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_4 = ___0_x_id;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_LeftRotate_mE713A527FF09B1055BCBAA0D20213360E4D738F3_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* G_B11_2 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* G_B13_3 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* G_B17_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* G_B18_3 = NULL;
	{
		int32_t L_0 = ___1_x_id;
		int32_t L_1;
		L_1 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = ___1_x_id;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_2, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_9 = ___1_x_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_13 = ___1_x_id;
		int32_t L_14;
		L_14 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = ___0_root_id;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_16 = V_0;
		__this->___root = L_16;
		goto IL_0099;
	}

IL_0050:
	{
		int32_t L_17 = ___2_mainTreeNode;
		int32_t L_18 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_19 = ___2_mainTreeNode;
		int32_t L_20 = V_0;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_20, (Il2CppFullySharedGenericAny*)L_21);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_21: *(void**)L_21));
		int32_t L_22 = V_0;
		___0_root_id = L_22;
		goto IL_0099;
	}

IL_006b:
	{
		int32_t L_23 = ___1_x_id;
		int32_t L_24 = ___1_x_id;
		int32_t L_25;
		L_25 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_26;
		L_26 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_23) == ((uint32_t)L_26))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_29 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0099;
	}

IL_008b:
	{
		int32_t L_30 = ___1_x_id;
		int32_t L_31;
		L_31 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_32 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_31, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0099:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___1_x_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_35 = ___1_x_id;
		int32_t L_36 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_37 = ___1_x_id;
		if (!L_37)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_38 = ___1_x_id;
		int32_t L_39 = ___1_x_id;
		int32_t L_40;
		L_40 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_41;
		L_41 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_42 = ___1_x_id;
		int32_t L_43;
		L_43 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_44;
		L_44 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_45 = ___1_x_id;
		int32_t L_46;
		L_46 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_46)
		{
			G_B12_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
			G_B12_1 = L_38;
			G_B12_2 = __this;
			goto IL_00e1;
		}
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
		G_B11_1 = L_38;
		G_B11_2 = __this;
	}
	{
		int32_t L_47 = ___1_x_id;
		int32_t L_48;
		L_48 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_49;
		L_49 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B13_0 = L_49;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00e2:
	{
		NullCheck(G_B13_3);
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(G_B13_3, G_B13_2, ((int32_t)il2cpp_codegen_add(G_B13_1, G_B13_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_00e8:
	{
		int32_t L_50 = V_0;
		if (!L_50)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_0;
		int32_t L_53;
		L_53 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_54;
		L_54 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_55 = V_0;
		int32_t L_56;
		L_56 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_57;
		L_57 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_59)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
			G_B17_1 = L_51;
			G_B17_2 = __this;
			goto IL_0120;
		}
		G_B16_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
		G_B16_1 = L_51;
		G_B16_2 = __this;
	}
	{
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_62;
		L_62 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_61, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B18_0 = L_62;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_0121;
	}

IL_0120:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_0121:
	{
		NullCheck(G_B18_3);
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(G_B18_3, G_B18_2, ((int32_t)il2cpp_codegen_add(G_B18_1, G_B18_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_0127:
	{
		int32_t L_63 = ___0_root_id;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RightRotate_m7BC809299786EA77942E205DD4975F08A57487A9_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* G_B11_2 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* G_B13_3 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* G_B17_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* G_B18_3 = NULL;
	{
		int32_t L_0 = ___1_x_id;
		int32_t L_1;
		L_1 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_1;
		int32_t L_2 = ___1_x_id;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_2, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_9 = ___1_x_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_13 = ___1_x_id;
		int32_t L_14;
		L_14 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = ___0_root_id;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_16 = V_0;
		__this->___root = L_16;
		goto IL_0099;
	}

IL_0050:
	{
		int32_t L_17 = ___2_mainTreeNode;
		int32_t L_18 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_19 = ___2_mainTreeNode;
		int32_t L_20 = V_0;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_20, (Il2CppFullySharedGenericAny*)L_21);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_21: *(void**)L_21));
		int32_t L_22 = V_0;
		___0_root_id = L_22;
		goto IL_0099;
	}

IL_006b:
	{
		int32_t L_23 = ___1_x_id;
		int32_t L_24 = ___1_x_id;
		int32_t L_25;
		L_25 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_26;
		L_26 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_23) == ((uint32_t)L_26))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_29 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0099;
	}

IL_008b:
	{
		int32_t L_30 = ___1_x_id;
		int32_t L_31;
		L_31 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_32 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_31, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0099:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___1_x_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_35 = ___1_x_id;
		int32_t L_36 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_37 = ___1_x_id;
		if (!L_37)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_38 = ___1_x_id;
		int32_t L_39 = ___1_x_id;
		int32_t L_40;
		L_40 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_41;
		L_41 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_42 = ___1_x_id;
		int32_t L_43;
		L_43 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_44;
		L_44 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_45 = ___1_x_id;
		int32_t L_46;
		L_46 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_46)
		{
			G_B12_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
			G_B12_1 = L_38;
			G_B12_2 = __this;
			goto IL_00e1;
		}
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
		G_B11_1 = L_38;
		G_B11_2 = __this;
	}
	{
		int32_t L_47 = ___1_x_id;
		int32_t L_48;
		L_48 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_49;
		L_49 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B13_0 = L_49;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00e2:
	{
		NullCheck(G_B13_3);
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(G_B13_3, G_B13_2, ((int32_t)il2cpp_codegen_add(G_B13_1, G_B13_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_00e8:
	{
		int32_t L_50 = V_0;
		if (!L_50)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_0;
		int32_t L_53;
		L_53 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_54;
		L_54 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_55 = V_0;
		int32_t L_56;
		L_56 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_57;
		L_57 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_59)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
			G_B17_1 = L_51;
			G_B17_2 = __this;
			goto IL_0120;
		}
		G_B16_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
		G_B16_1 = L_51;
		G_B16_2 = __this;
	}
	{
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_62;
		L_62 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_61, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B18_0 = L_62;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_0121;
	}

IL_0120:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_0121:
	{
		NullCheck(G_B18_3);
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(G_B18_3, G_B18_2, ((int32_t)il2cpp_codegen_add(G_B18_1, G_B18_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_0127:
	{
		int32_t L_63 = ___0_root_id;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBInsert_m0EF84E30DAACA98625F2B1488C82769E71BACB0E_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	const Il2CppFullySharedGenericAny L_15 = L_10;
	const Il2CppFullySharedGenericAny L_37 = L_10;
	const Il2CppFullySharedGenericAny L_39 = L_10;
	const Il2CppFullySharedGenericAny L_127 = L_10;
	const Il2CppFullySharedGenericAny L_132 = L_10;
	const Il2CppFullySharedGenericAny L_137 = L_10;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	const Il2CppFullySharedGenericAny L_17 = L_12;
	const Il2CppFullySharedGenericAny L_134 = L_12;
	const Il2CppFullySharedGenericAny L_139 = L_12;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B54_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		V_0 = 0;
		int32_t L_1 = ___0_root_id;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_root_id;
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		int32_t L_3 = __this->___root;
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_1 = G_B3_0;
		int32_t L_4 = __this->____accessMethod;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_01f8;
		}
	}
	{
		bool L_5 = ___4_append;
		if (L_5)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_01f0;
	}

IL_0035:
	{
		int32_t L_6 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		int32_t L_7 = V_1;
		V_0 = L_7;
		int32_t L_8 = ___0_root_id;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_9 = ___1_x_id;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_9, (Il2CppFullySharedGenericAny*)L_10);
		int32_t L_11 = V_1;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_11, (Il2CppFullySharedGenericAny*)L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_12: *(void**)L_12));
		G_B9_0 = L_13;
		goto IL_006b;
	}

IL_0057:
	{
		int32_t L_14 = ___1_x_id;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_14, (Il2CppFullySharedGenericAny*)L_15);
		int32_t L_16 = V_1;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_16, (Il2CppFullySharedGenericAny*)L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(5, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_17: *(void**)L_17));
		G_B9_0 = L_18;
	}

IL_006b:
	{
		V_2 = G_B9_0;
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_20 = V_1;
		int32_t L_21;
		L_21 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_1 = L_21;
		goto IL_01f0;
	}

IL_007d:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_1 = L_24;
		goto IL_01f0;
	}

IL_008e:
	{
		int32_t L_25 = ___0_root_id;
		if (!L_25)
		{
			goto IL_0098;
		}
	}
	{
		Exception_t* L_26;
		L_26 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_0098:
	{
		int32_t L_27 = V_1;
		int32_t L_28;
		L_28 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_28)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_29 = V_1;
		int32_t L_30;
		L_30 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_31 = ___1_x_id;
		int32_t L_32 = V_1;
		int32_t L_33;
		L_33 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(__this, L_30, L_31, L_32, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		___0_root_id = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_1;
		int32_t L_36;
		L_36 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_36, (Il2CppFullySharedGenericAny*)L_37);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_37: *(void**)L_37));
		goto IL_01ee;
	}

IL_00cd:
	{
		V_3 = 0;
		int32_t L_38 = V_1;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_38, (Il2CppFullySharedGenericAny*)L_39);
		int32_t L_40;
		L_40 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)), il2cpp_rgctx_method(method->klass->rgctx_data, 39), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_39: *(void**)L_39));
		V_3 = L_40;
		int32_t L_41 = __this->____inUseSatelliteTreeCount;
		__this->____inUseSatelliteTreeCount = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_3;
		int32_t L_43 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_44 = V_3;
		int32_t L_45 = V_1;
		int32_t L_46;
		L_46 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_44, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_47 = V_3;
		int32_t L_48 = V_1;
		int32_t L_49;
		L_49 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_47, L_49, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_50 = V_3;
		int32_t L_51 = V_1;
		int32_t L_52;
		L_52 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_50, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_53 = V_3;
		int32_t L_54 = V_1;
		int32_t L_55;
		L_55 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_53, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_56 = V_1;
		int32_t L_57;
		L_57 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_58;
		L_58 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_57, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_59 = V_1;
		if ((!(((uint32_t)L_58) == ((uint32_t)L_59))))
		{
			goto IL_014b;
		}
	}
	{
		int32_t L_60 = V_1;
		int32_t L_61;
		L_61 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_62 = V_3;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_61, L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0169;
	}

IL_014b:
	{
		int32_t L_63 = V_1;
		int32_t L_64;
		L_64 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_65;
		L_65 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_64, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_66 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_67 = V_1;
		int32_t L_68;
		L_68 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_69 = V_3;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_68, L_69, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0169:
	{
		int32_t L_70 = V_1;
		int32_t L_71;
		L_71 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_70, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_71)
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_72 = V_1;
		int32_t L_73;
		L_73 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_74 = V_3;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_73, L_74, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0180:
	{
		int32_t L_75 = V_1;
		int32_t L_76;
		L_76 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_76)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_77 = V_1;
		int32_t L_78;
		L_78 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_79 = V_3;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_78, L_79, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0197:
	{
		int32_t L_80 = __this->___root;
		int32_t L_81 = V_1;
		if ((!(((uint32_t)L_80) == ((uint32_t)L_81))))
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_82 = V_3;
		__this->___root = L_82;
	}

IL_01a7:
	{
		int32_t L_83 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_83, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_84 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_84, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_85 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_85, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_86 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_86, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_87 = V_1;
		int32_t L_88;
		L_88 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_87, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_4 = L_88;
		int32_t L_89 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(__this, L_89, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_90 = V_1;
		int32_t L_91 = ___1_x_id;
		int32_t L_92 = V_3;
		int32_t L_93;
		L_93 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(__this, L_90, L_91, L_92, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		___0_root_id = L_93;
		int32_t L_94 = V_3;
		int32_t L_95 = V_4;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(__this, L_94, L_95, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_01ee:
	{
		int32_t L_96 = ___0_root_id;
		return L_96;
	}

IL_01f0:
	{
		int32_t L_97 = V_1;
		if (L_97)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0263;
	}

IL_01f8:
	{
		int32_t L_98 = __this->____accessMethod;
		bool L_99 = ___4_append;
		if (!((int32_t)(((((int32_t)L_98) == ((int32_t)2))? 1 : 0)|(int32_t)L_99)))
		{
			goto IL_025b;
		}
	}
	{
		int32_t L_100 = ___3_position;
		if ((!(((uint32_t)L_100) == ((uint32_t)(-1)))))
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_101 = __this->___root;
		int32_t L_102;
		L_102 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_101, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		___3_position = L_102;
		goto IL_0256;
	}

IL_021b:
	{
		int32_t L_103 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(__this, L_103, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		int32_t L_104 = V_1;
		V_0 = L_104;
		int32_t L_105 = ___3_position;
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_106, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_108;
		L_108 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_107, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_105, L_108));
		int32_t L_109 = V_5;
		if ((((int32_t)L_109) > ((int32_t)0)))
		{
			goto IL_0245;
		}
	}
	{
		int32_t L_110 = V_1;
		int32_t L_111;
		L_111 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_110, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_1 = L_111;
		goto IL_0256;
	}

IL_0245:
	{
		int32_t L_112 = V_1;
		int32_t L_113;
		L_113 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_112, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_1 = L_113;
		int32_t L_114 = V_1;
		if (!L_114)
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_115 = V_5;
		___3_position = ((int32_t)il2cpp_codegen_subtract(L_115, 1));
	}

IL_0256:
	{
		int32_t L_116 = V_1;
		if (L_116)
		{
			goto IL_021b;
		}
	}
	{
		goto IL_0263;
	}

IL_025b:
	{
		Exception_t* L_117;
		L_117 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)15), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, method);
	}

IL_0263:
	{
		int32_t L_118 = ___1_x_id;
		int32_t L_119 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_118, L_119, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_120 = V_0;
		if (L_120)
		{
			goto IL_0298;
		}
	}
	{
		int32_t L_121 = ___0_root_id;
		if (L_121)
		{
			goto IL_027d;
		}
	}
	{
		int32_t L_122 = ___1_x_id;
		__this->___root = L_122;
		goto IL_030a;
	}

IL_027d:
	{
		int32_t L_123 = ___2_mainTreeNodeID;
		int32_t L_124 = ___1_x_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, L_123, L_124, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_125 = ___2_mainTreeNodeID;
		int32_t L_126 = ___1_x_id;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_126, (Il2CppFullySharedGenericAny*)L_127);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, L_125, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_127: *(void**)L_127));
		int32_t L_128 = ___1_x_id;
		___0_root_id = L_128;
		goto IL_030a;
	}

IL_0298:
	{
		V_6 = 0;
		int32_t L_129 = __this->____accessMethod;
		if ((!(((uint32_t)L_129) == ((uint32_t)1))))
		{
			goto IL_02d5;
		}
	}
	{
		int32_t L_130 = ___0_root_id;
		if (!L_130)
		{
			goto IL_02bd;
		}
	}
	{
		int32_t L_131 = ___1_x_id;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_131, (Il2CppFullySharedGenericAny*)L_132);
		int32_t L_133 = V_0;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_133, (Il2CppFullySharedGenericAny*)L_134);
		int32_t L_135;
		L_135 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_132: *(void**)L_132), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_134: *(void**)L_134));
		G_B49_0 = L_135;
		goto IL_02d1;
	}

IL_02bd:
	{
		int32_t L_136 = ___1_x_id;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_136, (Il2CppFullySharedGenericAny*)L_137);
		int32_t L_138 = V_0;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_138, (Il2CppFullySharedGenericAny*)L_139);
		int32_t L_140;
		L_140 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(5, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_137: *(void**)L_137), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_139: *(void**)L_139));
		G_B49_0 = L_140;
	}

IL_02d1:
	{
		V_6 = G_B49_0;
		goto IL_02f3;
	}

IL_02d5:
	{
		int32_t L_141 = __this->____accessMethod;
		if ((!(((uint32_t)L_141) == ((uint32_t)2))))
		{
			goto IL_02eb;
		}
	}
	{
		int32_t L_142 = ___3_position;
		if ((((int32_t)L_142) <= ((int32_t)0)))
		{
			goto IL_02e6;
		}
	}
	{
		G_B54_0 = 1;
		goto IL_02e7;
	}

IL_02e6:
	{
		G_B54_0 = (-1);
	}

IL_02e7:
	{
		V_6 = G_B54_0;
		goto IL_02f3;
	}

IL_02eb:
	{
		Exception_t* L_143;
		L_143 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)16), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, method);
	}

IL_02f3:
	{
		int32_t L_144 = V_6;
		if ((((int32_t)L_144) >= ((int32_t)0)))
		{
			goto IL_0302;
		}
	}
	{
		int32_t L_145 = V_0;
		int32_t L_146 = ___1_x_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_145, L_146, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_030a;
	}

IL_0302:
	{
		int32_t L_147 = V_0;
		int32_t L_148 = ___1_x_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_147, L_148, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_030a:
	{
		int32_t L_149 = ___1_x_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_149, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_150 = ___1_x_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_150, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_151 = ___1_x_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_151, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_152 = ___1_x_id;
		V_1 = L_152;
		goto IL_04ba;
	}

IL_0329:
	{
		int32_t L_153 = ___1_x_id;
		int32_t L_154;
		L_154 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_153, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_155 = ___1_x_id;
		int32_t L_156;
		L_156 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_155, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_157;
		L_157 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_156, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_158;
		L_158 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_157, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_154) == ((uint32_t)L_158))))
		{
			goto IL_0405;
		}
	}
	{
		int32_t L_159 = ___1_x_id;
		int32_t L_160;
		L_160 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_159, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_161;
		L_161 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_160, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_162;
		L_162 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_161, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_162;
		int32_t L_163 = V_0;
		int32_t L_164;
		L_164 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_163, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_164)
		{
			goto IL_03a3;
		}
	}
	{
		int32_t L_165 = ___1_x_id;
		int32_t L_166;
		L_166 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_165, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_166, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_167 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_167, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_168 = ___1_x_id;
		int32_t L_169;
		L_169 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_168, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_170;
		L_170 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_169, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_170, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_171 = ___1_x_id;
		int32_t L_172;
		L_172 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_171, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_173;
		L_173 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_172, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_173;
		goto IL_04ba;
	}

IL_03a3:
	{
		int32_t L_174 = ___1_x_id;
		int32_t L_175 = ___1_x_id;
		int32_t L_176;
		L_176 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_175, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_177;
		L_177 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_176, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((!(((uint32_t)L_174) == ((uint32_t)L_177))))
		{
			goto IL_03c7;
		}
	}
	{
		int32_t L_178 = ___1_x_id;
		int32_t L_179;
		L_179 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_178, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_179;
		int32_t L_180 = ___0_root_id;
		int32_t L_181 = ___1_x_id;
		int32_t L_182 = ___2_mainTreeNodeID;
		int32_t L_183;
		L_183 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(__this, L_180, L_181, L_182, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_183;
	}

IL_03c7:
	{
		int32_t L_184 = ___1_x_id;
		int32_t L_185;
		L_185 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_184, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_185, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_186 = ___1_x_id;
		int32_t L_187;
		L_187 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_186, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_188;
		L_188 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_187, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_188, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_189 = ___0_root_id;
		int32_t L_190 = ___1_x_id;
		int32_t L_191;
		L_191 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_190, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_192;
		L_192 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_191, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_193 = ___2_mainTreeNodeID;
		int32_t L_194;
		L_194 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_189, L_192, L_193, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_194;
		goto IL_04ba;
	}

IL_0405:
	{
		int32_t L_195 = ___1_x_id;
		int32_t L_196;
		L_196 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_195, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_197;
		L_197 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_196, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_198;
		L_198 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_197, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_198;
		int32_t L_199 = V_0;
		int32_t L_200;
		L_200 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_199, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_200)
		{
			goto IL_045d;
		}
	}
	{
		int32_t L_201 = ___1_x_id;
		int32_t L_202;
		L_202 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_201, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_202, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_203 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_203, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_204 = ___1_x_id;
		int32_t L_205;
		L_205 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_204, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_206;
		L_206 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_205, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_206, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_207 = ___1_x_id;
		int32_t L_208;
		L_208 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_207, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_209;
		L_209 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_208, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_209;
		goto IL_04ba;
	}

IL_045d:
	{
		int32_t L_210 = ___1_x_id;
		int32_t L_211 = ___1_x_id;
		int32_t L_212;
		L_212 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_211, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_213;
		L_213 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_212, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_210) == ((uint32_t)L_213))))
		{
			goto IL_0481;
		}
	}
	{
		int32_t L_214 = ___1_x_id;
		int32_t L_215;
		L_215 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_214, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_215;
		int32_t L_216 = ___0_root_id;
		int32_t L_217 = ___1_x_id;
		int32_t L_218 = ___2_mainTreeNodeID;
		int32_t L_219;
		L_219 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_216, L_217, L_218, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_219;
	}

IL_0481:
	{
		int32_t L_220 = ___1_x_id;
		int32_t L_221;
		L_221 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_220, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_221, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_222 = ___1_x_id;
		int32_t L_223;
		L_223 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_222, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_224;
		L_224 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_223, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_224, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_225 = ___0_root_id;
		int32_t L_226 = ___1_x_id;
		int32_t L_227;
		L_227 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_226, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_228;
		L_228 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_227, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_229 = ___2_mainTreeNodeID;
		int32_t L_230;
		L_230 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(__this, L_225, L_228, L_229, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_230;
	}

IL_04ba:
	{
		int32_t L_231 = ___1_x_id;
		int32_t L_232;
		L_232 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_231, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_233;
		L_233 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_232, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_233)
		{
			goto IL_0329;
		}
	}
	{
		int32_t L_234 = ___0_root_id;
		if (L_234)
		{
			goto IL_04de;
		}
	}
	{
		int32_t L_235 = __this->___root;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_235, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		goto IL_04e6;
	}

IL_04de:
	{
		int32_t L_236 = ___0_root_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_236, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
	}

IL_04e6:
	{
		int32_t L_237 = ___0_root_id;
		return L_237;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_UpdateNodeKey_m814FA038F9F567C372B2A82A2B7D3749818D456B_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, Il2CppFullySharedGenericAny ___0_currentKey, Il2CppFullySharedGenericAny ___1_newKey, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_13 = L_0;
	NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_currentKey : &___0_currentKey), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_1;
		L_1 = InvokerFuncInvoker1< NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)), il2cpp_rgctx_method(method->klass->rgctx_data, 44), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_2 = V_0;
		int32_t L_3 = L_2.____nodeID;
		int32_t L_4;
		L_4 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_5 = V_0;
		int32_t L_6 = L_5.____nodeID;
		int32_t L_7 = __this->___root;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0031;
		}
	}
	{
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_8 = V_0;
		int32_t L_9 = L_8.____mainTreeNodeID;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_newKey : &___1_newKey), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_10: *(void**)L_10));
	}

IL_0031:
	{
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_11 = V_0;
		int32_t L_12 = L_11.____nodeID;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_newKey : &___1_newKey), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_13: *(void**)L_13));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_DeleteByIndex_m4E8BD5EA559A58927B5D3D8E5A0CE2A233918598_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_i, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_i;
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_1;
		L_1 = ((  NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_0 = L_1;
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_2 = V_0;
		int32_t L_3 = L_2.____nodeID;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_3, (Il2CppFullySharedGenericAny*)L_4);
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_5 = V_0;
		int32_t L_6 = L_5.____nodeID;
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_7 = V_0;
		int32_t L_8 = L_7.____mainTreeNodeID;
		int32_t L_9;
		L_9 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, 0, L_6, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDelete_m158CEEBBDD392C617D35B5D05A3D2936A201C277_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_z_id, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_z_id;
		int32_t L_1;
		L_1 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, 0, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteX_m6C460EF1980876E2517FBD4635AFA96A81B7E274_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_55 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	const Il2CppFullySharedGenericAny L_70 = L_55;
	const Il2CppFullySharedGenericAny L_150 = L_55;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_z_id;
		int32_t L_1;
		L_1 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___1_z_id;
		int32_t L_3;
		L_3 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_4 = ___1_z_id;
		int32_t L_5;
		L_5 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_6 = ___1_z_id;
		int32_t L_7;
		L_7 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_3, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_7;
	}

IL_0021:
	{
		V_3 = (bool)0;
		int32_t L_8 = __this->____accessMethod;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = ___1_z_id;
		G_B5_0 = L_9;
		goto IL_0030;
	}

IL_002f:
	{
		int32_t L_10 = ___2_mainTreeNodeID;
		G_B5_0 = L_10;
	}

IL_0030:
	{
		V_4 = G_B5_0;
		int32_t L_11 = V_4;
		int32_t L_12;
		L_12 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_13 = V_4;
		int32_t L_14;
		L_14 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		___0_root_id = L_14;
	}

IL_0046:
	{
		int32_t L_15 = V_4;
		int32_t L_16;
		L_16 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_17;
		L_17 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0073;
	}

IL_005b:
	{
		int32_t L_18 = V_4;
		int32_t L_19;
		L_19 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_20;
		L_20 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Exception_t* L_21;
		L_21 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0073:
	{
		int32_t L_22 = ___1_z_id;
		int32_t L_23;
		L_23 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_23)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_24 = ___1_z_id;
		int32_t L_25;
		L_25 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (L_25)
		{
			goto IL_0089;
		}
	}

IL_0085:
	{
		int32_t L_26 = ___1_z_id;
		V_1 = L_26;
		goto IL_0091;
	}

IL_0089:
	{
		int32_t L_27 = ___1_z_id;
		int32_t L_28;
		L_28 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_28;
	}

IL_0091:
	{
		int32_t L_29 = V_1;
		int32_t L_30;
		L_30 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_30)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_1;
		int32_t L_32;
		L_32 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_32;
		goto IL_00ac;
	}

IL_00a4:
	{
		int32_t L_33 = V_1;
		int32_t L_34;
		L_34 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_34;
	}

IL_00ac:
	{
		int32_t L_35 = V_1;
		int32_t L_36;
		L_36 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_2 = L_36;
		int32_t L_37 = V_0;
		if (!L_37)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_2;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_38, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_00bf:
	{
		int32_t L_40 = V_2;
		if (L_40)
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_41 = ___0_root_id;
		if (L_41)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_42 = V_0;
		__this->___root = L_42;
		goto IL_00ef;
	}

IL_00ce:
	{
		int32_t L_43 = V_0;
		___0_root_id = L_43;
		goto IL_00ef;
	}

IL_00d3:
	{
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		int32_t L_46;
		L_46 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_44) == ((uint32_t)L_46))))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_47, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_00ef;
	}

IL_00e7:
	{
		int32_t L_49 = V_2;
		int32_t L_50 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_49, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_00ef:
	{
		int32_t L_51 = V_1;
		int32_t L_52 = ___1_z_id;
		if ((((int32_t)L_51) == ((int32_t)L_52)))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_53 = ___1_z_id;
		int32_t L_54 = V_1;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_54, (Il2CppFullySharedGenericAny*)L_55);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_55: *(void**)L_55));
		int32_t L_56 = ___1_z_id;
		int32_t L_57 = V_1;
		int32_t L_58;
		L_58 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_57, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, L_56, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
	}

IL_010f:
	{
		int32_t L_59 = V_4;
		int32_t L_60;
		L_60 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_60)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_61 = ___0_root_id;
		if (L_61)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_62 = ___1_z_id;
		int32_t L_63 = V_4;
		if ((((int32_t)L_62) == ((int32_t)L_63)))
		{
			goto IL_0128;
		}
	}
	{
		Exception_t* L_64;
		L_64 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, method);
	}

IL_0128:
	{
		int32_t L_65 = ___0_root_id;
		if (!L_65)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_66 = V_4;
		int32_t L_67 = ___0_root_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, L_66, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_68 = V_4;
		int32_t L_69 = ___0_root_id;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_69, (Il2CppFullySharedGenericAny*)L_70);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, L_68, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_70: *(void**)L_70));
	}

IL_0143:
	{
		int32_t L_71 = V_2;
		V_5 = L_71;
		goto IL_015a;
	}

IL_0148:
	{
		int32_t L_72 = V_5;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		int32_t L_73 = V_5;
		int32_t L_74;
		L_74 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_73, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_5 = L_74;
	}

IL_015a:
	{
		int32_t L_75 = V_5;
		if (L_75)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_76 = ___0_root_id;
		if (!L_76)
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_77 = V_4;
		V_6 = L_77;
		goto IL_0179;
	}

IL_0167:
	{
		int32_t L_78 = V_6;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(__this, L_78, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		int32_t L_79 = V_6;
		int32_t L_80;
		L_80 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_79, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_6 = L_80;
	}

IL_0179:
	{
		int32_t L_81 = V_6;
		if (L_81)
		{
			goto IL_0167;
		}
	}

IL_017d:
	{
		int32_t L_82 = V_1;
		int32_t L_83;
		L_83 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_82, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0193;
		}
	}
	{
		int32_t L_84 = ___0_root_id;
		int32_t L_85 = V_0;
		int32_t L_86 = V_2;
		int32_t L_87 = ___2_mainTreeNodeID;
		int32_t L_88;
		L_88 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(__this, L_84, L_85, L_86, L_87, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		___0_root_id = L_88;
	}

IL_0193:
	{
		bool L_89 = V_3;
		if (!L_89)
		{
			goto IL_02af;
		}
	}
	{
		int32_t L_90 = V_4;
		if (!L_90)
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_91 = V_4;
		int32_t L_92;
		L_92 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_91, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_93;
		L_93 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_92, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((((int32_t)L_93) == ((int32_t)1)))
		{
			goto IL_01b6;
		}
	}

IL_01ae:
	{
		Exception_t* L_94;
		L_94 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)9), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, method);
	}

IL_01b6:
	{
		int32_t L_95 = __this->____inUseSatelliteTreeCount;
		__this->____inUseSatelliteTreeCount = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		int32_t L_96 = V_4;
		int32_t L_97;
		L_97 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_96, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_7 = L_97;
		int32_t L_98 = V_7;
		int32_t L_99 = V_4;
		int32_t L_100;
		L_100 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_99, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_98, L_100, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_101 = V_7;
		int32_t L_102 = V_4;
		int32_t L_103;
		L_103 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_102, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_101, L_103, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_104 = V_7;
		int32_t L_105 = V_4;
		int32_t L_106;
		L_106 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_105, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(__this, L_104, L_106, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_107 = V_7;
		int32_t L_108 = V_4;
		int32_t L_109;
		L_109 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_108, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_107, L_109, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_110 = V_4;
		int32_t L_111;
		L_111 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_110, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (!L_111)
		{
			goto IL_025c;
		}
	}
	{
		int32_t L_112 = V_7;
		int32_t L_113 = V_4;
		int32_t L_114;
		L_114 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_113, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_112, L_114, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_115 = V_4;
		int32_t L_116;
		L_116 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_115, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_117;
		L_117 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_116, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_118 = V_4;
		if ((!(((uint32_t)L_117) == ((uint32_t)L_118))))
		{
			goto IL_024c;
		}
	}
	{
		int32_t L_119 = V_4;
		int32_t L_120;
		L_120 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_119, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_121 = V_7;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_120, L_121, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_025c;
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		int32_t L_123;
		L_123 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_122, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_124 = V_7;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_123, L_124, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_025c:
	{
		int32_t L_125 = V_4;
		int32_t L_126;
		L_126 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_125, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_126)
		{
			goto IL_0276;
		}
	}
	{
		int32_t L_127 = V_4;
		int32_t L_128;
		L_128 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_127, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_129 = V_7;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_128, L_129, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0276:
	{
		int32_t L_130 = V_4;
		int32_t L_131;
		L_131 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_130, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_131)
		{
			goto IL_0290;
		}
	}
	{
		int32_t L_132 = V_4;
		int32_t L_133;
		L_133 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_132, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_134 = V_7;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_133, L_134, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0290:
	{
		int32_t L_135 = __this->___root;
		int32_t L_136 = V_4;
		if ((!(((uint32_t)L_135) == ((uint32_t)L_136))))
		{
			goto IL_02a2;
		}
	}
	{
		int32_t L_137 = V_7;
		__this->___root = L_137;
	}

IL_02a2:
	{
		int32_t L_138 = V_4;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_138, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_4 = 0;
		goto IL_02e4;
	}

IL_02af:
	{
		int32_t L_139 = V_4;
		int32_t L_140;
		L_140 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_139, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_140)
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_141 = ___0_root_id;
		if (L_141)
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_142 = ___1_z_id;
		int32_t L_143 = V_4;
		if ((((int32_t)L_142) == ((int32_t)L_143)))
		{
			goto IL_02c9;
		}
	}
	{
		Exception_t* L_144;
		L_144 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144, method);
	}

IL_02c9:
	{
		int32_t L_145 = ___0_root_id;
		if (!L_145)
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_146 = V_4;
		int32_t L_147 = ___0_root_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, L_146, L_147, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_148 = V_4;
		int32_t L_149 = ___0_root_id;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_149, (Il2CppFullySharedGenericAny*)L_150);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, L_148, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_150: *(void**)L_150));
	}

IL_02e4:
	{
		int32_t L_151 = V_1;
		int32_t L_152 = ___1_z_id;
		if ((((int32_t)L_151) == ((int32_t)L_152)))
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_153 = V_1;
		int32_t L_154 = ___1_z_id;
		int32_t L_155;
		L_155 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_154, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_153, L_155, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_156 = V_1;
		int32_t L_157 = ___1_z_id;
		int32_t L_158;
		L_158 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_157, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_156, L_158, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_159 = V_1;
		int32_t L_160 = ___1_z_id;
		int32_t L_161;
		L_161 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_160, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_159, L_161, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_162 = V_1;
		int32_t L_163 = ___1_z_id;
		int32_t L_164;
		L_164 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_163, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(__this, L_162, L_164, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_165 = ___1_z_id;
		int32_t L_166;
		L_166 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_165, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (!L_166)
		{
			goto IL_036a;
		}
	}
	{
		int32_t L_167 = V_1;
		int32_t L_168 = ___1_z_id;
		int32_t L_169;
		L_169 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_168, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_167, L_169, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_170 = ___1_z_id;
		int32_t L_171;
		L_171 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_170, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_172;
		L_172 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_171, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_173 = ___1_z_id;
		if ((!(((uint32_t)L_172) == ((uint32_t)L_173))))
		{
			goto IL_035a;
		}
	}
	{
		int32_t L_174 = ___1_z_id;
		int32_t L_175;
		L_175 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_174, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_176 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_175, L_176, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0372;
	}

IL_035a:
	{
		int32_t L_177 = ___1_z_id;
		int32_t L_178;
		L_178 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_177, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_179 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_178, L_179, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		goto IL_0372;
	}

IL_036a:
	{
		int32_t L_180 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_180, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0372:
	{
		int32_t L_181 = ___1_z_id;
		int32_t L_182;
		L_182 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_181, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_182)
		{
			goto IL_0389;
		}
	}
	{
		int32_t L_183 = ___1_z_id;
		int32_t L_184;
		L_184 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_183, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_185 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_184, L_185, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0389:
	{
		int32_t L_186 = ___1_z_id;
		int32_t L_187;
		L_187 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_186, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_187)
		{
			goto IL_03a0;
		}
	}
	{
		int32_t L_188 = ___1_z_id;
		int32_t L_189;
		L_189 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_188, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_190 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_189, L_190, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_03a0:
	{
		int32_t L_191 = __this->___root;
		int32_t L_192 = ___1_z_id;
		if ((!(((uint32_t)L_191) == ((uint32_t)L_192))))
		{
			goto IL_03b2;
		}
	}
	{
		int32_t L_193 = V_1;
		__this->___root = L_193;
		goto IL_03b9;
	}

IL_03b2:
	{
		int32_t L_194 = ___0_root_id;
		int32_t L_195 = ___1_z_id;
		if ((!(((uint32_t)L_194) == ((uint32_t)L_195))))
		{
			goto IL_03b9;
		}
	}
	{
		int32_t L_196 = V_1;
		___0_root_id = L_196;
	}

IL_03b9:
	{
		int32_t L_197 = V_4;
		if (!L_197)
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_198 = V_4;
		int32_t L_199;
		L_199 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_198, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_200 = ___1_z_id;
		if ((!(((uint32_t)L_199) == ((uint32_t)L_200))))
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, L_201, L_202, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
	}

IL_03d1:
	{
		int32_t L_203 = ___1_z_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_203, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		int32_t L_204 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_204, 1));
		int32_t L_205 = ___1_z_id;
		return L_205;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteFixup_m4C5BC376B3501605CBB3EC4462A8F609A543455E_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B52_0 = 0;
	int32_t G_B56_0 = 0;
	int32_t G_B60_0 = 0;
	{
		int32_t L_0 = ___1_x_id;
		if (L_0)
		{
			goto IL_0305;
		}
	}
	{
		int32_t L_1 = ___2_px_id;
		if (L_1)
		{
			goto IL_0305;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_2 = ___1_x_id;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___1_x_id;
		int32_t L_4 = ___1_x_id;
		int32_t L_5;
		L_5 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_6;
		L_6 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((((int32_t)L_3) == ((int32_t)L_6)))
		{
			goto IL_0033;
		}
	}

IL_0021:
	{
		int32_t L_7 = ___1_x_id;
		if (L_7)
		{
			goto IL_0168;
		}
	}
	{
		int32_t L_8 = ___2_px_id;
		int32_t L_9;
		L_9 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_9)
		{
			goto IL_0168;
		}
	}

IL_0033:
	{
		int32_t L_10 = ___1_x_id;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_13;
		L_13 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B10_0 = L_13;
		goto IL_004c;
	}

IL_0045:
	{
		int32_t L_14 = ___2_px_id;
		int32_t L_15;
		L_15 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B10_0 = L_15;
	}

IL_004c:
	{
		V_0 = G_B10_0;
		int32_t L_16 = V_0;
		if (L_16)
		{
			goto IL_0058;
		}
	}
	{
		Exception_t* L_17;
		L_17 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)14), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0058:
	{
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_19)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_20 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_20, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_21 = ___2_px_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_21, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_22 = ___0_root_id;
		int32_t L_23 = ___2_px_id;
		int32_t L_24 = ___3_mainTreeNodeID;
		int32_t L_25;
		L_25 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(__this, L_22, L_23, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_25;
		int32_t L_26 = ___1_x_id;
		if (!L_26)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_29;
		L_29 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B16_0 = L_29;
		goto IL_0096;
	}

IL_008f:
	{
		int32_t L_30 = ___2_px_id;
		int32_t L_31;
		L_31 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B16_0 = L_31;
	}

IL_0096:
	{
		V_0 = G_B16_0;
	}

IL_0097:
	{
		int32_t L_32 = V_0;
		int32_t L_33;
		L_33 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_34;
		L_34 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_35 = V_0;
		int32_t L_36;
		L_36 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_37;
		L_37 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_38 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_38, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_39 = ___2_px_id;
		___1_x_id = L_39;
		int32_t L_40 = ___2_px_id;
		int32_t L_41;
		L_41 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_41;
		goto IL_0305;
	}

IL_00d0:
	{
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_44;
		L_44 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_45 = V_0;
		int32_t L_46;
		L_46 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_46, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_47 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_47, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_48 = ___0_root_id;
		int32_t L_49 = V_0;
		int32_t L_50 = ___3_mainTreeNodeID;
		int32_t L_51;
		L_51 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_48, L_49, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_51;
		int32_t L_52 = ___1_x_id;
		if (!L_52)
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_53 = ___1_x_id;
		int32_t L_54;
		L_54 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_55;
		L_55 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B24_0 = L_55;
		goto IL_011b;
	}

IL_0114:
	{
		int32_t L_56 = ___2_px_id;
		int32_t L_57;
		L_57 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B24_0 = L_57;
	}

IL_011b:
	{
		V_0 = G_B24_0;
	}

IL_011c:
	{
		int32_t L_58 = V_0;
		int32_t L_59 = ___2_px_id;
		int32_t L_60;
		L_60 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_58, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_61 = ___2_px_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_61, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_62 = V_0;
		int32_t L_63;
		L_63 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_63, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_64 = ___0_root_id;
		int32_t L_65 = ___2_px_id;
		int32_t L_66 = ___3_mainTreeNodeID;
		int32_t L_67;
		L_67 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(__this, L_64, L_65, L_66, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_67;
		int32_t L_68 = ___0_root_id;
		if (!L_68)
		{
			goto IL_0152;
		}
	}
	{
		int32_t L_69 = ___0_root_id;
		G_B28_0 = L_69;
		goto IL_0158;
	}

IL_0152:
	{
		int32_t L_70 = __this->___root;
		G_B28_0 = L_70;
	}

IL_0158:
	{
		___1_x_id = G_B28_0;
		int32_t L_71 = ___1_x_id;
		int32_t L_72;
		L_72 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_72;
		goto IL_0305;
	}

IL_0168:
	{
		int32_t L_73 = ___2_px_id;
		int32_t L_74;
		L_74 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_73, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_74;
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_76)
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_77 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_77, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_78 = ___1_x_id;
		if (!L_78)
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_79 = ___2_px_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_79, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_80 = ___0_root_id;
		int32_t L_81 = ___2_px_id;
		int32_t L_82 = ___3_mainTreeNodeID;
		int32_t L_83;
		L_83 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_80, L_81, L_82, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_83;
		int32_t L_84 = ___1_x_id;
		if (!L_84)
		{
			goto IL_01aa;
		}
	}
	{
		int32_t L_85 = ___1_x_id;
		int32_t L_86;
		L_86 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_85, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_87;
		L_87 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_86, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B34_0 = L_87;
		goto IL_01b1;
	}

IL_01aa:
	{
		int32_t L_88 = ___2_px_id;
		int32_t L_89;
		L_89 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_88, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B34_0 = L_89;
	}

IL_01b1:
	{
		V_0 = G_B34_0;
		goto IL_01ed;
	}

IL_01b4:
	{
		int32_t L_90 = ___2_px_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_90, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_91 = ___0_root_id;
		int32_t L_92 = ___2_px_id;
		int32_t L_93 = ___3_mainTreeNodeID;
		int32_t L_94;
		L_94 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_91, L_92, L_93, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_94;
		int32_t L_95 = ___1_x_id;
		if (!L_95)
		{
			goto IL_01da;
		}
	}
	{
		int32_t L_96 = ___1_x_id;
		int32_t L_97;
		L_97 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_96, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_98;
		L_98 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_97, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B38_0 = L_98;
		goto IL_01e1;
	}

IL_01da:
	{
		int32_t L_99 = ___2_px_id;
		int32_t L_100;
		L_100 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_99, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B38_0 = L_100;
	}

IL_01e1:
	{
		V_0 = G_B38_0;
		int32_t L_101 = V_0;
		if (L_101)
		{
			goto IL_01ed;
		}
	}
	{
		Exception_t* L_102;
		L_102 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)11), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_102, method);
	}

IL_01ed:
	{
		int32_t L_103 = V_0;
		int32_t L_104;
		L_104 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_103, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_105;
		L_105 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_104, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_105) == ((uint32_t)1))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_106, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_108;
		L_108 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_107, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_108) == ((uint32_t)1))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_109 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_109, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_110 = ___2_px_id;
		___1_x_id = L_110;
		int32_t L_111 = ___2_px_id;
		int32_t L_112;
		L_112 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_111, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_112;
		goto IL_0305;
	}

IL_0226:
	{
		int32_t L_113 = V_0;
		int32_t L_114;
		L_114 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_113, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_115;
		L_115 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_114, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_115) == ((uint32_t)1))))
		{
			goto IL_0272;
		}
	}
	{
		int32_t L_116 = V_0;
		int32_t L_117;
		L_117 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_116, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_117, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_118 = V_0;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_118, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_119 = ___0_root_id;
		int32_t L_120 = V_0;
		int32_t L_121 = ___3_mainTreeNodeID;
		int32_t L_122;
		L_122 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(__this, L_119, L_120, L_121, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_122;
		int32_t L_123 = ___1_x_id;
		if (!L_123)
		{
			goto IL_026a;
		}
	}
	{
		int32_t L_124 = ___1_x_id;
		int32_t L_125;
		L_125 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_124, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_126;
		L_126 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_125, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B47_0 = L_126;
		goto IL_0271;
	}

IL_026a:
	{
		int32_t L_127 = ___2_px_id;
		int32_t L_128;
		L_128 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_127, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B47_0 = L_128;
	}

IL_0271:
	{
		V_0 = G_B47_0;
	}

IL_0272:
	{
		int32_t L_129 = ___1_x_id;
		if (!L_129)
		{
			goto IL_02be;
		}
	}
	{
		int32_t L_130 = V_0;
		int32_t L_131 = ___2_px_id;
		int32_t L_132;
		L_132 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_131, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_130, L_132, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_133 = ___2_px_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_133, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_134 = V_0;
		int32_t L_135;
		L_135 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_134, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_135, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_136 = ___0_root_id;
		int32_t L_137 = ___2_px_id;
		int32_t L_138 = ___3_mainTreeNodeID;
		int32_t L_139;
		L_139 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_136, L_137, L_138, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_139;
		int32_t L_140 = ___0_root_id;
		if (!L_140)
		{
			goto IL_02ab;
		}
	}
	{
		int32_t L_141 = ___0_root_id;
		G_B52_0 = L_141;
		goto IL_02b1;
	}

IL_02ab:
	{
		int32_t L_142 = __this->___root;
		G_B52_0 = L_142;
	}

IL_02b1:
	{
		___1_x_id = G_B52_0;
		int32_t L_143 = ___1_x_id;
		int32_t L_144;
		L_144 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_143, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_144;
		goto IL_0305;
	}

IL_02be:
	{
		int32_t L_145 = V_0;
		int32_t L_146 = ___2_px_id;
		int32_t L_147;
		L_147 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_146, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_145, L_147, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_148 = ___2_px_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_148, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_149 = V_0;
		int32_t L_150;
		L_150 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_149, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_150, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_151 = ___0_root_id;
		int32_t L_152 = ___2_px_id;
		int32_t L_153 = ___3_mainTreeNodeID;
		int32_t L_154;
		L_154 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_151, L_152, L_153, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_154;
		int32_t L_155 = ___0_root_id;
		if (!L_155)
		{
			goto IL_02f4;
		}
	}
	{
		int32_t L_156 = ___0_root_id;
		G_B56_0 = L_156;
		goto IL_02fa;
	}

IL_02f4:
	{
		int32_t L_157 = __this->___root;
		G_B56_0 = L_157;
	}

IL_02fa:
	{
		___1_x_id = G_B56_0;
		int32_t L_158 = ___1_x_id;
		int32_t L_159;
		L_159 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_158, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_159;
	}

IL_0305:
	{
		int32_t L_160 = ___0_root_id;
		if (!L_160)
		{
			goto IL_030b;
		}
	}
	{
		int32_t L_161 = ___0_root_id;
		G_B60_0 = L_161;
		goto IL_0311;
	}

IL_030b:
	{
		int32_t L_162 = __this->___root;
		G_B60_0 = L_162;
	}

IL_0311:
	{
		int32_t L_163 = ___1_x_id;
		if ((((int32_t)G_B60_0) == ((int32_t)L_163)))
		{
			goto IL_0321;
		}
	}
	{
		int32_t L_164 = ___1_x_id;
		int32_t L_165;
		L_165 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_164, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((((int32_t)L_165) == ((int32_t)1)))
		{
			goto IL_000e;
		}
	}

IL_0321:
	{
		int32_t L_166 = ___1_x_id;
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_166, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_167 = ___0_root_id;
		return L_167;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SearchSubTree_m2278FCE2C8A319A28EACB9E33A2ABDE22DA6BD9D_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_root_id, Il2CppFullySharedGenericAny ___1_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	const Il2CppFullySharedGenericAny L_11 = L_7;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	const Il2CppFullySharedGenericAny L_13 = L_9;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = ___0_root_id;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->____accessMethod;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		Exception_t* L_2;
		L_2 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)17), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_root_id;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = ___0_root_id;
		G_B6_0 = L_4;
		goto IL_0020;
	}

IL_001a:
	{
		int32_t L_5 = __this->___root;
		G_B6_0 = L_5;
	}

IL_0020:
	{
		V_0 = G_B6_0;
		goto IL_005e;
	}

IL_0023:
	{
		int32_t L_6 = ___0_root_id;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_key : &___1_key), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		int32_t L_8 = V_0;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_8, (Il2CppFullySharedGenericAny*)L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_9: *(void**)L_9));
		G_B10_0 = L_10;
		goto IL_0044;
	}

IL_0036:
	{
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_key : &___1_key), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		int32_t L_12 = V_0;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_12, (Il2CppFullySharedGenericAny*)L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(5, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_13: *(void**)L_13));
		G_B10_0 = L_14;
	}

IL_0044:
	{
		V_1 = G_B10_0;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_17 = V_0;
		int32_t L_18;
		L_18 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_18;
		goto IL_005e;
	}

IL_0056:
	{
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_20;
	}

IL_005e:
	{
		int32_t L_21 = V_0;
		if (L_21)
		{
			goto IL_0023;
		}
	}

IL_0061:
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_get_Item_m85A0DAC718D879C1747AD809D10B1006AAA05662_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	{
		int32_t L_0 = ___0_index;
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_1;
		L_1 = ((  NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_2 = L_1.____nodeID;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_2, (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 RBTree_1_GetNodeByKey_m7736051017CCB2750196AC4F1D5AEBE09FD3CC26_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	void* L_14 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 20)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	const Il2CppFullySharedGenericAny L_6 = L_0;
	const Il2CppFullySharedGenericAny L_11 = L_0;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	memset(V_1, 0, SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_key : &___0_key), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)), il2cpp_rgctx_method(method->klass->rgctx_data, 52), __this, 0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_key : &___0_key), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		int32_t L_7;
		L_7 = InvokerFuncInvoker2< int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)), il2cpp_rgctx_method(method->klass->rgctx_data, 52), __this, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_6: *(void**)L_6));
		int32_t L_8 = V_0;
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55((&L_9), L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_9;
	}

IL_0027:
	{
		int32_t L_10 = V_0;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_10, (Il2CppFullySharedGenericAny*)L_11);
		il2cpp_codegen_memcpy(V_1, L_11, SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_key : &___0_key), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), L_12);
		bool L_15;
		L_15 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 20), il2cpp_rgctx_method(method->klass->rgctx_data, 54), L_14, (void*)(Il2CppFullySharedGenericAny*)V_1, L_13);
		if (L_15)
		{
			goto IL_0046;
		}
	}
	{
		V_0 = 0;
	}

IL_0046:
	{
		int32_t L_16 = V_0;
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_17;
		memset((&L_17), 0, sizeof(L_17));
		NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55((&L_17), L_16, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByKey_mEBD7E91CE8BCB72BF19E7B466A02A74B7C60162D_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	int32_t V_0 = 0;
	NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (-1);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_key : &___0_key), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_1;
		L_1 = InvokerFuncInvoker1< NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)), il2cpp_rgctx_method(method->klass->rgctx_data, 44), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_0: *(void**)L_0));
		V_1 = L_1;
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_2 = V_1;
		int32_t L_3 = L_2.____nodeID;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_4 = V_1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		V_0 = L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNode_m85C331EF6ABB3A54A54B0F9C544FC49C92DBB784_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_node, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___0_node;
		int32_t L_2;
		L_2 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___0_node;
		int32_t L_4;
		L_4 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = ___0_node;
		int32_t L_6;
		L_6 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_6;
	}

IL_0021:
	{
		int32_t L_7 = ___0_node;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_7, (Il2CppFullySharedGenericAny*)L_8);
		int32_t L_9;
		L_9 = InvokerFuncInvoker2< int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)), il2cpp_rgctx_method(method->klass->rgctx_data, 52), __this, 0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_8: *(void**)L_8));
		V_0 = L_9;
		int32_t L_10 = V_0;
		int32_t L_11 = ___0_node;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_12 = ___0_node;
		int32_t L_13;
		L_13 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_13;
	}

IL_003c:
	{
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		int32_t L_16 = ___0_node;
		int32_t L_17;
		L_17 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)))(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return ((int32_t)il2cpp_codegen_add(L_15, L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNodePath_mCCD9781FA9066FD744A29AB45B6F531715F0E6DD_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 ___0_path, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_1 = ___0_path;
		int32_t L_2 = L_1.____nodeID;
		int32_t L_3;
		L_3 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return L_3;
	}

IL_0015:
	{
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_4 = ___0_path;
		int32_t L_5 = L_4.____mainTreeNodeID;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_6 = ___0_path;
		int32_t L_7 = L_6.____nodeID;
		int32_t L_8;
		L_8 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_8;
	}

IL_002a:
	{
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_9 = ___0_path;
		int32_t L_10 = L_9.____mainTreeNodeID;
		int32_t L_11;
		L_11 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_12 = ___0_path;
		int32_t L_13 = L_12.____nodeID;
		int32_t L_14;
		L_14 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return ((int32_t)il2cpp_codegen_add(L_11, L_14));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexByNode_m4BD522857AD09DBF84332DAD3B8A1BBBDAC39770_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_2;
		L_2 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_2;
		goto IL_0037;
	}

IL_0010:
	{
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_1 = L_4;
		int32_t L_5 = ___0_nodeId;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_11;
		L_11 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_add(L_11, 1))));
	}

IL_0034:
	{
		int32_t L_12 = V_1;
		___0_nodeId = L_12;
	}

IL_0037:
	{
		int32_t L_13 = ___0_nodeId;
		if (L_13)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m37F70B5D75DD15DF915B5B22BF81A1F929BA2D1B_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_2;
		L_2 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_2;
		goto IL_004f;
	}

IL_0010:
	{
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_1 = L_4;
		int32_t L_5 = ___0_nodeId;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_11;
		L_11 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_13)
		{
			G_B4_0 = L_11;
			G_B4_1 = L_8;
			goto IL_0048;
		}
		G_B3_0 = L_11;
		G_B3_1 = L_8;
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_16;
		L_16 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B5_0 = L_16;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0049;
	}

IL_0048:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0049:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B5_2, ((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0))));
	}

IL_004c:
	{
		int32_t L_17 = V_1;
		___0_nodeId = L_17;
	}

IL_004f:
	{
		int32_t L_18 = ___0_nodeId;
		if (L_18)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 RBTree_1_GetNodeByIndex_m785467854C87C957E6DF39F1E24C0EDDD20BA8A0_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_userIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->___root;
		int32_t L_2 = ___0_userIndex;
		int32_t L_3;
		L_3 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)))(__this, L_1, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		V_0 = L_3;
		V_1 = 0;
		goto IL_0026;
	}

IL_001c:
	{
		int32_t L_4 = ___0_userIndex;
		int32_t L_5;
		L_5 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)))(__this, L_4, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_5;
	}

IL_0026:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_7 = __this->____accessMethod;
		if ((!(((uint32_t)2) == ((uint32_t)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___0_userIndex;
		Exception_t* L_9;
		L_9 = ExceptionBuilder_RowOutOfRange_m2F6883E5D2F9AF63A3F9DC5521799A7E270F1054(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0039:
	{
		Exception_t* L_10;
		L_10 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55((&L_13), L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m5A99A44B5A7E1A488A4AEBF6F2EEE08707732A51_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t* L_1 = ___1_satelliteRootId;
		*((int32_t*)L_1) = (int32_t)0;
		int32_t L_2 = __this->___root;
		V_0 = L_2;
		V_1 = (-1);
		goto IL_0088;
	}

IL_0013:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_6;
		goto IL_0088;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14;
		L_14 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_15;
		L_15 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((((int32_t)L_11) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_12, L_15)), 1)))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_16 = ___1_satelliteRootId;
		int32_t L_17 = V_0;
		*((int32_t*)L_16) = (int32_t)L_17;
		int32_t L_18 = ___0_index;
		int32_t L_19 = V_1;
		___0_index = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), 1));
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_22 = ___0_index;
		int32_t L_23;
		L_23 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)))(__this, L_21, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return L_23;
	}

IL_005b:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (L_25)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_26 = ___0_index;
		int32_t L_27 = V_1;
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_26, L_27));
		goto IL_0080;
	}

IL_006b:
	{
		int32_t L_28 = ___0_index;
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_32;
		L_32 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_32)), 1))));
	}

IL_0080:
	{
		int32_t L_33 = V_0;
		int32_t L_34;
		L_34 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_34;
	}

IL_0088:
	{
		int32_t L_35 = V_0;
		if (!L_35)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_38;
		L_38 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		V_1 = L_39;
		int32_t L_40 = ___0_index;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_41 = V_0;
		int32_t L_42;
		L_42 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (L_42)
		{
			goto IL_0013;
		}
	}

IL_00ae:
	{
		int32_t L_43 = V_0;
		return L_43;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_mC622BB66DA9CB9B5D7A9216C58D644D7EB3DD7E9_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_002f;
	}

IL_0002:
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = ___1_index;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_6 = V_0;
		___0_x_id = L_6;
		goto IL_002f;
	}

IL_001d:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_9 = ___0_x_id;
		int32_t L_10;
		L_10 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		___0_x_id = L_10;
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_1;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
	}

IL_002f:
	{
		int32_t L_13 = ___0_x_id;
		if (L_13)
		{
			goto IL_0002;
		}
	}

IL_0032:
	{
		int32_t L_14 = ___0_x_id;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Insert_m72B2F6B40374976463F8F11A2E7EFA79E9895F72_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_item : &___0_item), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)), il2cpp_rgctx_method(method->klass->rgctx_data, 39), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(__this, 0, L_2, 0, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Add_m99EC94C01E9CB2E9D21E5E181C4F62511039ECC0_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___0_item : &___0_item), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)), il2cpp_rgctx_method(method->klass->rgctx_data, 39), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(__this, 0, L_2, 0, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTree_1_GetEnumerator_m9D7F6878151960C910609477C2ABDDC403196DA5_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_RBTreeEnumerator_t188BAFBAF6823188AEC40919D521E38F9A520E21 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 60));
	const RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4 L_0 = alloca(SizeOf_RBTreeEnumerator_t188BAFBAF6823188AEC40919D521E38F9A520E21);
	{
		memset(L_0, 0, SizeOf_RBTreeEnumerator_t188BAFBAF6823188AEC40919D521E38F9A520E21);
		RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB((RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 60), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_IndexOf_m767C56D618F4D7DBEE641E476C3F836EB24AA7F0_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	const Il2CppFullySharedGenericAny L_10 = L_2;
	const Il2CppFullySharedGenericAny L_16 = L_2;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		int32_t L_0 = ___0_nodeId;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1 = ___0_nodeId;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_1, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), L_2);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_item : &___1_item), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), L_4);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)L_5))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_6 = ___0_nodeId;
		int32_t L_7;
		L_7 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_7;
	}

IL_0021:
	{
		int32_t L_8 = ___0_nodeId;
		int32_t L_9;
		L_9 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_item : &___1_item), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		int32_t L_11;
		L_11 = InvokerFuncInvoker2< int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 63)), il2cpp_rgctx_method(method->klass->rgctx_data, 63), __this, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_10: *(void**)L_10));
		int32_t L_12 = L_11;
		V_0 = L_12;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0036:
	{
		int32_t L_14 = ___0_nodeId;
		int32_t L_15;
		L_15 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_item : &___1_item), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		int32_t L_17;
		L_17 = InvokerFuncInvoker2< int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 63)), il2cpp_rgctx_method(method->klass->rgctx_data, 63), __this, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_16: *(void**)L_16));
		int32_t L_18 = L_17;
		V_0 = L_18;
		int32_t L_19 = V_0;
		return L_19;
	}

IL_004b:
	{
		int32_t L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Insert_m44FF7B0BC249D62C2E28589FF039A4EEF9DC55C8_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_position, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	{
		int32_t L_0 = ___0_position;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_item : &___1_item), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		int32_t L_2;
		L_2 = InvokerFuncInvoker3< int32_t, int32_t, Il2CppFullySharedGenericAny, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 64)), il2cpp_rgctx_method(method->klass->rgctx_data, 64), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_1: *(void**)L_1), (bool)0);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_InsertAt_m39D83D8BDDEFD5C40F2C4C4BD7BD556341B316E4_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_position, Il2CppFullySharedGenericAny ___1_item, bool ___2_append, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_item : &___1_item), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)), il2cpp_rgctx_method(method->klass->rgctx_data, 39), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___0_position;
		bool L_4 = ___2_append;
		int32_t L_5;
		L_5 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t, int32_t, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(__this, 0, L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RemoveAt_m5EFA6893968F369AEE898859486614F2FD2EEB02_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	{
		int32_t L_0 = ___0_position;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 65)), il2cpp_rgctx_method(method->klass->rgctx_data, 65), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_Clear_m2F337DD5E6F78CF3EAD08BFB57FC0FBF19822999_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_CopyTo_m6F0141E8C8CC4850142C26331F405F768437E491_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 66)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		V_0 = L_4;
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_5, NULL);
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 66)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003a;
		}
	}
	{
		Exception_t* L_9;
		L_9 = ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_003a:
	{
		int32_t L_10 = __this->___root;
		int32_t L_11;
		L_11 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_11;
		V_2 = 0;
		goto IL_006c;
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		int32_t L_13 = V_1;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_13, (Il2CppFullySharedGenericAny*)L_14);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), L_14);
		int32_t L_16 = ___1_index;
		int32_t L_17 = V_2;
		NullCheck(L_12);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_12, L_15, ((int32_t)il2cpp_codegen_add(L_16, L_17)), NULL);
		int32_t L_18 = V_1;
		int32_t L_19;
		L_19 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_19;
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_CopyTo_mC720E37075EC229C1E6F1C22CBC20D1D9F7B2605_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 66)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		V_0 = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 66)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		Exception_t* L_8;
		L_8 = ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		int32_t L_9 = __this->___root;
		int32_t L_10;
		L_10 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_10;
		V_2 = 0;
		goto IL_0064;
	}

IL_0048:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, L_14, (Il2CppFullySharedGenericAny*)L_15);
		NullCheck(L_11);
		il2cpp_codegen_memcpy((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_13)))), L_15, SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 20), (void**)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_13)))), (void*)L_15);
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_17;
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0064:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0048;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetRight_m6F5B716EE80A355903BCCA9790D60EF179D27BCC_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_rightNodeId;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetLeft_m018576202FE808F71D7478B1004BB62A05ECEC29_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_leftNodeId;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetParent_mFBD5736CB91D6AF80E3C3F57D1D8A8BC0953F3EE_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_parentNodeId;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),3), L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetColor_m0FF237931B977BD5E629AF6993C80773B88A20D7_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_color;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),7), L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetKey_mA92267EE8B84DEBE9075BAF163C41EDE909D313A_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, Il2CppFullySharedGenericAny ___1_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20)) ? ___1_key : &___1_key), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		il2cpp_codegen_write_instance_field_data(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),6), L_6, SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetNext_mADC0112FA54C31B0526CD220A36EC0D0BE6DECEC_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_nextNodeId;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),4), L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetSubTreeSize_m7B104E358671726D410173B7EA56D1FBF7D34FEC_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_size;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),5), L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_IncreaseSize_m04BE1A67C29114844EF7BB7614574300318F7633_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t* L_6 = (((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),5))));
		int32_t L_7 = *((int32_t*)L_6);
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RecomputeSize_m98DBD4256E245820230442566B20819D6DE055C9_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_2;
		L_2 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_5;
		L_5 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_6 = ___0_nodeId;
		int32_t L_7;
		L_7 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_7)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
			goto IL_0033;
		}
		G_B1_0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
	}
	{
		int32_t L_8 = ___0_nodeId;
		int32_t L_9;
		L_9 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_10;
		L_10 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0));
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_11 = __this->____pageTable;
		int32_t L_12 = ___0_nodeId;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)(L_12>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_15 = L_14->____slots;
		int32_t L_16 = ___0_nodeId;
		NullCheck(L_15);
		int32_t L_17 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_16&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),5), L_17);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_DecreaseSize_m90DA6F839AE945A03A30067022DFCD4D8DBCC067_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t* L_6 = (((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),5))));
		int32_t L_7 = *((int32_t*)L_6);
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Right_m72E92B4214A615E1B1B09B864AD39DC358B0D9C5_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Left_m8EB18280FCE53424D1FD85A226F086C0DD99FFE6_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Parent_m68954856B3FCE9D08DE6BB7F530C1478DC4DFFDF_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),3));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_color_m11914A147E9CE03DEED0F5E1AD43EE14B93D4992_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),7));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Next_mA15C645FF3AB14F076524B8C9B4631043371261E_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),4));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SubTreeSize_mD0C8957CB8532F9EAF837964D1139F21E7AE696D_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),5));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_Key_m136C79232025E1CED0F197E7831540B33BE235A6_gshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, int32_t ___0_nodeId, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
	{
		TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Node_t76C820C17DBF8E407C8589D8A78D7CF989ADF034*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535)))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),6)), SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_K_t725D041F314CEFF97DB70729BEC601CCFB8D8F14);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1__ctor_m4DD14EAA9942858CF0BEAF5D4BB4011A83BA3A47_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1__ctor_mB9E68746D0600867795BE5387E431A052EDE10FE_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0015:
	{
		int32_t L_2 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_set_Capacity_m37ECBD79FE0E0681FE2996761F5FE3CCAAEDA6E4_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items;
		NullCheck(L_4);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_6 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0047:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
		L_13 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_005a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_get_Count_m712C23152F205989A9FBD883DC268B3DB8B2641C_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_IndexOf_m44F05A371D1726738D08B71DA7A606FE612F7EFF_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		RuntimeObject* L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Insert_m0D4A6276C5192A71A27A7C93472A88B3CB3831AE_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5 = __this->____size;
		ReadOnlyCollectionBuilder_1_EnsureCapacity_m076CB69F333012AA70D6FB4A1942229BE3AFDB8A(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0032:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0058;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0058:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		RuntimeObject* L_16 = ___1_item;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject*)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_RemoveAt_m2FAB70AED511E20D17EEC01D6092F8998FE3B7B3_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		int32_t L_4 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_004c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), (RuntimeArray*)L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_004c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = __this->____items;
		int32_t L_14 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RuntimeObject*)L_15);
		int32_t L_16 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_16, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_get_Item_m5D456B9C2FED574195A1CF3AFF1984D3820F7EC5_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_set_Item_mCDB55E21C2461E6FD0E595F49612B0395A412A47_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		RuntimeObject* L_5 = ___1_value;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Add_m129CC65EBD7CF4155F6DBC3C7BC0A7D8FB17E016_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->____size;
		ReadOnlyCollectionBuilder_1_EnsureCapacity_m076CB69F333012AA70D6FB4A1942229BE3AFDB8A(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_001e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = __this->____size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject*)L_7);
		int32_t L_8 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Clear_m7919005EC0002608CFC0F1BBCEECCA68E7F8F088_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_Contains_m5B14BD16A256ABD0E52AFB4DCAD6C29D55528B51_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___0_item;
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_8;
		L_8 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_8;
		V_2 = 0;
		goto IL_0055;
	}

IL_003a:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_9 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____items;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		RuntimeObject* L_14 = ___0_item;
		NullCheck(L_9);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_9, L_13, L_14);
		if (!L_15)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0055:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = __this->____size;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_CopyTo_m4EE14AD1192D337DF400F9B2C8678057FD67DE71_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mEF71F239D5B7AC8881618141D40CB173D3755BAB_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_Remove_m56D899A4F23BDAA2734238200D06EC8A68F0CE77_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = ReadOnlyCollectionBuilder_1_IndexOf_m44F05A371D1726738D08B71DA7A606FE612F7EFF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		ReadOnlyCollectionBuilder_1_RemoveAt_m2FAB70AED511E20D17EEC01D6092F8998FE3B7B3(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_GetEnumerator_m604D81B930A4D7581904C01960981F02807E6840_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tFDD83062A262A5CEB8E1D6AF6D70D5C633288041* L_0 = (Enumerator_tFDD83062A262A5CEB8E1D6AF6D70D5C633288041*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		Enumerator__ctor_m8089D385B6D4EACE459E149D2C7544C017BDC887(L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_System_Collections_IEnumerable_GetEnumerator_m24E843430441A170C8CFE30807B0989780758DA2_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ReadOnlyCollectionBuilder_1_GetEnumerator_m604D81B930A4D7581904C01960981F02807E6840(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_IList_get_IsReadOnly_m77B4FD777A77D183CAADD4EC49875828A76794BE_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_System_Collections_IList_Add_mE591984E9330608D69C3229244380B8E15CA34E3_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_value;
		ReadOnlyCollectionBuilder_1_ValidateNullValue_mE96C51B701CAA99735D346A0D421BB01DFED1FCA(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}
	try
	{
		RuntimeObject* L_1 = ___0_value;
		ReadOnlyCollectionBuilder_1_Add_m129CC65EBD7CF4155F6DBC3C7BC0A7D8FB17E016(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 4))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		goto IL_0030;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 20)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		Exception_t* L_6;
		L_6 = Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C(L_3, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0030:
	{
		int32_t L_7;
		L_7 = ReadOnlyCollectionBuilder_1_get_Count_m712C23152F205989A9FBD883DC268B3DB8B2641C_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_IList_Contains_mC85DCCC1CA5C33D1596873603C461207108FF555_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollectionBuilder_1_IsCompatibleObject_m5F313CD5FE4FF765F9A3B2268CA877ADBB7F57BA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollectionBuilder_1_Contains_m5B14BD16A256ABD0E52AFB4DCAD6C29D55528B51(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_System_Collections_IList_IndexOf_mB45EAD1BBB66C28B4B3020D3FE36E451DA9D0303_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollectionBuilder_1_IsCompatibleObject_m5F313CD5FE4FF765F9A3B2268CA877ADBB7F57BA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollectionBuilder_1_IndexOf_m44F05A371D1726738D08B71DA7A606FE612F7EFF(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_IList_Insert_m8FAD21FB600839DA003E696337226E8F4C4022B3_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ReadOnlyCollectionBuilder_1_ValidateNullValue_mE96C51B701CAA99735D346A0D421BB01DFED1FCA(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		ReadOnlyCollectionBuilder_1_Insert_m0D4A6276C5192A71A27A7C93472A88B3CB3831AE(__this, L_1, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 20)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		Exception_t* L_7;
		L_7 = Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C(L_4, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_IList_get_IsFixedSize_m287F3235F38E55499CA648B214F743B047A82DB9_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_IList_Remove_m1B30109630C586109669BE99213728DE7860A24A_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollectionBuilder_1_IsCompatibleObject_m5F313CD5FE4FF765F9A3B2268CA877ADBB7F57BA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollectionBuilder_1_Remove_m56D899A4F23BDAA2734238200D06EC8A68F0CE77(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_System_Collections_IList_get_Item_m9C30FBD64FF55A270FC94E972B01A26F0D2A2BAF_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		RuntimeObject* L_1;
		L_1 = ReadOnlyCollectionBuilder_1_get_Item_m5D456B9C2FED574195A1CF3AFF1984D3820F7EC5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_IList_set_Item_mB95E9B390FA36845843CE65CFFBCFE7462716D50_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ReadOnlyCollectionBuilder_1_ValidateNullValue_mE96C51B701CAA99735D346A0D421BB01DFED1FCA(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		ReadOnlyCollectionBuilder_1_set_Item_mCDB55E21C2461E6FD0E595F49612B0395A412A47(__this, L_1, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4))), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 20)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		Exception_t* L_7;
		L_7 = Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C(L_4, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_ICollection_CopyTo_mD0B01E30F563A01E38EF68C6C8A24974978A5437_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____items;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_ICollection_get_IsSynchronized_m4579BE3013A87048259F81F3566822062B79B1F5_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_System_Collections_ICollection_get_SyncRoot_mEE1D724BB4AD78D051152F2070CB17D397C5BA02_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) 
{
	{
		return (RuntimeObject*)__this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ReadOnlyCollectionBuilder_1_ToArray_mF1C840CFBB343884E990EF08670781D4D03996B9_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		int32_t L_4 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, L_4, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* ReadOnlyCollectionBuilder_1_ToReadOnlyCollection_m478D4B2A6065DE06384E4448545867D386050EAB_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0019;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		V_0 = L_2;
		goto IL_0020;
	}

IL_0019:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = ReadOnlyCollectionBuilder_1_ToArray_mF1C840CFBB343884E990EF08670781D4D03996B9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_3;
	}

IL_0020:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		__this->____size = 0;
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* L_7 = (TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF(L_7, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92*)L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_EnsureCapacity_m076CB69F333012AA70D6FB4A1942229BE3AFDB8A_gshared (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		V_0 = 4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0021;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		NullCheck(L_3);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
	}

IL_0021:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_min;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_6 = ___0_min;
		V_0 = L_6;
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		ReadOnlyCollectionBuilder_1_set_Capacity_m37ECBD79FE0E0681FE2996761F5FE3CCAAEDA6E4(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
	}

IL_002e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_IsCompatibleObject_m5F313CD5FE4FF765F9A3B2268CA877ADBB7F57BA_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_ValidateNullValue_mE96C51B701CAA99735D346A0D421BB01DFED1FCA_gshared (RuntimeObject* ___0_value, String_t* ___1_argument, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 20)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4 = ___1_argument;
		Exception_t* L_5;
		L_5 = Error_InvalidNullValue_mD3F707613D9B6413719EB3549DAF5406FBD60199(L_3, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0024:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1__ctor_m250934FFE92E68EB52BFA1DEEA225C006567E7E5_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1__ctor_mB7397A597A8123C1146146FB19367CA32645A803_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0015:
	{
		int32_t L_2 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_set_Capacity_mE67D65656DDB9AE1C58561936CD1EF7A50E4DA7C_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_6 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0047:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_004f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13;
		L_13 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_005a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_get_Count_m69CF2D9BF6F3E0F171B32C9129028208C163EF76_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_IndexOf_m230054649C9E9B91CD99DA0F363651A29A18B6D8_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_1: *(void**)L_1), 0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Insert_mCC5CF7CBE8C56BCA2DCB0BFD28EE1A45EEE4A172_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5 = __this->____size;
		((  void (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_0032:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0058;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0058:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_item : &___1_item), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		NullCheck(L_14);
		il2cpp_codegen_memcpy((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), L_16, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_RemoveAt_m39375336E09168B3D4FFADA6675E57994B75FB7E_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	memset(V_0, 0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		int32_t L_4 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_004c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), (RuntimeArray*)L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_004c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->____items;
		int32_t L_14 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		il2cpp_codegen_memcpy(L_15, V_0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		NullCheck(L_13);
		il2cpp_codegen_memcpy((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), L_15, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), (void*)L_15);
		int32_t L_16 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_16, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_get_Item_mBEEFA08F78CF92A07877C3B05F4507CE013B7DC4_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_set_Item_m0F01A105DF646D259D03E3088CA5B17925BAC43A_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Add_m0528305BD67E04F82A8F4EC8BDFD887D3FFD701F_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->____size;
		((  void (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = __this->____size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), L_7, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), (void*)L_7);
		int32_t L_8 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Clear_m96C2B04252182D9DDB022663C77731F047552C67_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_Contains_mE6C66F860D3341CBA7A2D084DC75827B94995837_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_15 = L_0;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	int32_t V_0 = 0;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_0);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_5);
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10;
		L_10 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_10;
		V_2 = 0;
		goto IL_0055;
	}

IL_003a:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_11 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		NullCheck(L_11);
		bool L_17;
		L_17 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if (!L_17)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0055:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = __this->____size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_CopyTo_mD4D52FA043D25FB3DC095C23FD4E3A3A44A5BA35_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1DD27BB25B29255A180020923925DB9940DAC38D_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_Remove_mB7617C1B280DAB2A7016677226C196E5949FADE8_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		((  void (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_GetEnumerator_mBF312A19AD4C3692472CE306D658F430938583B4_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t80FD5046ECCBFF50D4CD855B7B13C05C89E66E69* L_0 = (Enumerator_t80FD5046ECCBFF50D4CD855B7B13C05C89E66E69*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		((  void (*) (Enumerator_t80FD5046ECCBFF50D4CD855B7B13C05C89E66E69*, ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_System_Collections_IEnumerable_GetEnumerator_m4E322850074BCA8CB2E8D0C1808ED817B7B93BB3_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_IList_get_IsReadOnly_m6C804BF42FCE7C87AF830A9A03C82BCEE69F1D09_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_System_Collections_IList_Add_mC315B1BD9975FCF36C943DB410E98807C5AB392A_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_value;
		((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}
	try
	{
		RuntimeObject* L_1 = ___0_value;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)))));
		goto IL_0030;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_5 = ___0_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 20)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		Exception_t* L_8;
		L_8 = Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C(L_5, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0030:
	{
		int32_t L_9;
		L_9 = ((  int32_t (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_IList_Contains_mF83E9D29FF61AC04DCC314D055E19AC39A890E8D_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_System_Collections_IList_IndexOf_m4A3ECEF60E1D4A360157CC1E7A735C4653605490_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_IList_Insert_m1693E139C1F9660532D19331BE296B8DE5595946_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), __this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_6 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 20)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		Exception_t* L_9;
		L_9 = Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C(L_6, L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_IList_get_IsFixedSize_mCF189E78FF5AE932EB92B4FC4777BE4B54CBAD9E_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_IList_Remove_m10A15392AD932A3DF41F607C342E6907933E5DB7_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)), il2cpp_rgctx_method(method->klass->rgctx_data, 25), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_System_Collections_IList_get_Item_mB304EB54646EA1127AEFFCDFD67D55A610CDFCA2_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		int32_t L_0 = ___0_index;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)), il2cpp_rgctx_method(method->klass->rgctx_data, 26), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_IList_set_Item_m379F32349A5F51DD45C28A465938473136E309ED_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), __this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_6 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 20)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		Exception_t* L_9;
		L_9 = Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C(L_6, L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_ICollection_CopyTo_m185ABD6F8F8392C5ABB1424AF35D4D93ACF596A5_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____items;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_ICollection_get_IsSynchronized_m82796367A13DDF90DA3D17C56AD1DB695B1772F2_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_System_Collections_ICollection_get_SyncRoot_m309394D8E2C1EE981D439DC1F2CC59BE2D134B6B_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	{
		return (RuntimeObject*)__this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ReadOnlyCollectionBuilder_1_ToArray_m1802775EC669ACD2D1ECED4B18B0DF0339E7E0F3_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_0;
		int32_t L_4 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, L_4, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* ReadOnlyCollectionBuilder_1_ToReadOnlyCollection_m17809585AA08EEB82BDFD1E21857871DA5BA829A_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0019;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		V_0 = L_2;
		goto IL_0020;
	}

IL_0019:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_3;
	}

IL_0020:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4;
		L_4 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		__this->____size = 0;
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03* L_7 = (TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		((  void (*) (TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(L_7, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*)L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_EnsureCapacity_mCEFA7FD2BC6D88F51D9E74DF54AFB780C39394E7_gshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		V_0 = 4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0021;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		NullCheck(L_3);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
	}

IL_0021:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_min;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_6 = ___0_min;
		V_0 = L_6;
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		((  void (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
	}

IL_002e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_IsCompatibleObject_m4182A9D16A594A96171C6B2500175BD08CD2BEF6_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	memset(V_0, 0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_ValidateNullValue_m9A9AAC00AF379D1A4AC78A929F7E29A3A7C14681_gshared (RuntimeObject* ___0_value, String_t* ___1_argument, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	memset(V_0, 0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 20)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5 = ___1_argument;
		Exception_t* L_6;
		L_6 = Error_InvalidNullValue_mD3F707613D9B6413719EB3549DAF5406FBD60199(L_4, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m010AA1E4CD3820BCC07B77A482D6A17D5C7F14C2_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)7, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_list;
		__this->___list = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6B6BE788B018E462AB49965C9BF42835AA0F40FE_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ReadOnlyCollection_1_get_Item_m5780FF03FA42BFFD0DA319D6310B1A6E72DA9A86_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m54E213256F6E5A5649AC292E96F3858D2F3B3AA0_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mD8C8CA0BBF3D68750ED44577FD6615AE36072924_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mD6D0577F8EDABEEF8B0A801538743A1D4502319E_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB23F2D0BBC3186365E72E6FB4BC47AAB1686211B_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mEC7C83ADF18C9155627F8F1C59F3255AC7CFE8E7_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m75D185B46D4802594A64748B9DDD4118534323CE_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m9AD68517582A39B4FD699603E79D012040514831_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, int32_t ___0_index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m75536FF3236A53FF79CB441C77EE39E2B3A50B41_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m414153004FC07EB089C70F4F4737AD7B1C84946D_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m900D95EAA39D06432C73B187D75448D388A60E8A_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, int32_t ___0_index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m125C222D5CAC1526995EBB609F3E0A6213BD6BFB_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m2C814C768EF8F940E6F6BB1377E6EDBFBF428DA0_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_mE637C3D6D0D22ED625E196A0F1A770616F0D4F70_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m0E4CE0125D273F8BF30AFCE964E65E979BEBFBCD_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m986F7271F35B0C77084D53EC4704A97A586008D0_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_1 = __this->___list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3);
		__this->____syncRoot = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot), (void*)L_4);
		goto IL_0037;
	}

IL_0025:
	{
		RuntimeObject** L_5 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_6 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_6, NULL);
		RuntimeObject* L_7;
		L_7 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_5, L_6, NULL);
	}

IL_0037:
	{
		RuntimeObject* L_8 = __this->____syncRoot;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m76B14FF518C40A3C79A3EE21FF3EE849FFA2D9C7_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m6B6BE788B018E462AB49965C9BF42835AA0F40FE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck((RuntimeObject*)L_15);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_15, NULL);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 14)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_35;
			L_35 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_33, L_34);
			CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m924AB2FBFF00CA5F9E665B0F8DEBD314C522D4CE_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m4AF2D625A226A755118807161FFC4936F5951580_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mA8915730823E8C27B918A4C3024AD68CBD8055AD_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_mF3735F31A405BDE3C0A9A03EE3C5D910D5C48CEC_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m489676992DFAD43F1346A530CA571492B771CEEF_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_m585CA024DC0F78F521C056FC107B586EA4D1D6D9_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC010A5256D19EE219546ED424AE97F0D94A1E97E_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02));
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mD8042138A4AC2A2671400161C731D1C1B2AC926C_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC010A5256D19EE219546ED424AE97F0D94A1E97E(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m54E213256F6E5A5649AC292E96F3858D2F3B3AA0(__this, ((*(CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02*)((CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02*)(CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 5))))), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m1885C362CCD1DB7FE502C9D4369A9B8DB47CECAF_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC010A5256D19EE219546ED424AE97F0D94A1E97E(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mB23F2D0BBC3186365E72E6FB4BC47AAB1686211B(__this, ((*(CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02*)((CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02*)(CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 5))))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_mC34244B99B9E9A4181BCC72598B35C060B629894_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m668AE47D6D1D4F3B07DAA53E7B6AA81D2A16F617_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m6BB9A581FB5B89D23C89D1ED754799D07F82D6EB_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mE22404DEC336AFE9817BF78FF9F7F90E07EE4F7A_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)7, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_list;
		__this->___list = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB07E1D8A7EE4081EF3A7DBD0369DB07BAB1365B2_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ReadOnlyCollection_1_get_Item_m4B6B7A4CD8390D75131239E8E81AC95EEFD56A81_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA2DC89076EDA7FAE081CB1EBB0F544D3E25E992E_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m48433668377DA36D39718CF6D1A62DCD9F607A68_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m12A0923AE807FA4CA6F24547D0AFA5CC1521D8EC_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m6FE656D0B1AC159B2743D580A2BE9B8BE8FE9654_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mC8FC4115F1E66BE67C776F10B527BDDC31C797CE_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mFC77FB3DA7AC142CE2767C0C974A710A6A12B1B8_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m79846B5CE6326E0CD0A6B259F8D1D35B897576A9_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, int32_t ___0_index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m19D409413825AD81E4C7224E0D7D9E6D650A2857_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_mD57DDA1A71A3BFB89C10AAD339A59685BE117D79_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_mF87449EDE00CAFD1B3858BC5A4918CD42172F746_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, int32_t ___0_index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m6C1D12E5D8DDBB9D9048DB05D80DF83897825C23_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_mF5B5441F1FF20D9F45ADA0266140C3F9EF0B834A_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_mF768CB6B8A8CE9B0ECA37F15D9BBAECC94FB4D8F_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_mB58A6C26108662D2EE5DC3D07911BE9C6E6F5B76_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m7EA5003F6DBB9E507CF9D71B8CA5BF2DDF2B5B20_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_1 = __this->___list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3);
		__this->____syncRoot = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot), (void*)L_4);
		goto IL_0037;
	}

IL_0025:
	{
		RuntimeObject** L_5 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_6 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_6, NULL);
		RuntimeObject* L_7;
		L_7 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_5, L_6, NULL);
	}

IL_0037:
	{
		RuntimeObject* L_8 = __this->____syncRoot;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mC0E4E3597C9676A03FCC998694AB810FBF471755_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mB07E1D8A7EE4081EF3A7DBD0369DB07BAB1365B2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck((RuntimeObject*)L_15);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_15, NULL);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 14)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_35;
			L_35 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_33, L_34);
			CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m3CF8B9A46E83386207D179F67F3A72A7C5E38047_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m05C3C7807EFABBCF49427F55443BA1A766A27250_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m4826F128F91C79D6CA4A38592A9D035855853C98_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_2;
		L_2 = InterfaceFuncInvoker1< CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_mE841D6473E080703489702B4187CCC0C581573D0_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_mBF48C915E67D22495E956623E01740C3B46626C3_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_m82C051824D4A3C48123231DC28DC3E8BDEA2B55B_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7FE8864771813C869EECD0FC9B3518D2617F47DB_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F));
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m9E50A66F9F81F20F57031B57C6847C420EBD7636_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7FE8864771813C869EECD0FC9B3518D2617F47DB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mA2DC89076EDA7FAE081CB1EBB0F544D3E25E992E(__this, ((*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F*)((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F*)(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 5))))), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mC4C16CB9FCFDFDDDE905AAB7CCDF81C945904DF7_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7FE8864771813C869EECD0FC9B3518D2617F47DB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m6FE656D0B1AC159B2743D580A2BE9B8BE8FE9654(__this, ((*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F*)((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F*)(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 5))))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_m617C394D721368EB61D29046893C097DD99EAE78_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m8ACBE1D6857DF8EABB4CEDF530DD840C690E6670_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m151747421C69F211D482476008FA11064848B17A_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)7, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_list;
		__this->___list = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m732D12395A2D23BF37EC63D5E50E0ACFD3060CF5_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		RuntimeObject* L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m2AB7AC16F5BDBFEB664040F852CC922277C872F2_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m76F2BEE33BE96FF2ACEDFE076FAC30629D35A491_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10E71A7EDED59E9F9CD915808B4F43218F2FDE5A_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m83BC9352A5B9476FE1D0BC14C854FDE7278496FC_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_mD30E0DB790DC12A37B7360ED754C276C008F3A72_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m120A1A001A6829F3CA9AF64A626F9AC3827452A7_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_mEE722E6B709E2EFCED6837742BCBE8A1716C60A2_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m8E66B2129CD00FC31768E920E745628D5E4ACF13_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_mB237BECB17335CDA4F52ECC44C860007494AA00C_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m8E3A5CC89E49C6192A9B969F3C57C4C242510E23_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_mD9A847A985510B90259B70086A02C6A08726242A_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m78E55F6FBC27666C1BEC3BFAA60D8CDDFC5DA856_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m9EF0ABF164B1D8CD6CA977B51EE0DE467BA30CC5_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_1 = __this->___list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3);
		__this->____syncRoot = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot), (void*)L_4);
		goto IL_0037;
	}

IL_0025:
	{
		RuntimeObject** L_5 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_6 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_6, NULL);
		RuntimeObject* L_7;
		L_7 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_5, L_6, NULL);
	}

IL_0037:
	{
		RuntimeObject* L_8 = __this->____syncRoot;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m1662E4FD7A2D244AD81E87822B3523E21E4C5C53_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck((RuntimeObject*)L_15);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_15, NULL);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 14)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			RuntimeObject* L_35;
			L_35 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_33, L_34);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_35);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_35);
			int32_t L_36 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		}

IL_00cd_1:
		{
			int32_t L_37 = V_5;
			int32_t L_38 = V_4;
			if ((((int32_t)L_37) < ((int32_t)L_38)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_39 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m1DC9D660C00C6A054D798B8132A5F942485C2453_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m385D8F93440F3B7E2CDA7F365AF31D44544C35A8_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m1A03C21148408F8BEC31AD6AE8354FAA47AE6268_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_mD1BC1017CF50D867E198C60534EB448A03A2F9C3_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m26723E3B2C742C56AC7E106027AA5F8589F9246F_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_mBDEAE9F7572AD90B6E04EE94630181BE7578D293_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m4FC5EF77143370F6ADA6FCF6F964623DF661D512_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m99AD6A733EC8FE8EFBAFE8A19ABFAF852D5B42FF_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m4FC5EF77143370F6ADA6FCF6F964623DF661D512(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m732D12395A2D23BF37EC63D5E50E0ACFD3060CF5(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 5))), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mD28F7234CB9398F603A911105CCE1A3A04699D9A_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m4FC5EF77143370F6ADA6FCF6F964623DF661D512(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m76F2BEE33BE96FF2ACEDFE076FAC30629D35A491(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 5))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_mF17CAA4FFD1F67098A8B9741129AEB3BA76E9432_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m635AB4C6C21864334311ABBEE4999DF7E571463D_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m6795D71B5703EA7D3E393C661F36D98F922B5820_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m903CF4492D6E4F6EE0D865BB7AA36A0DDB888355_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)7, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_list;
		__this->___list = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCDFBED2827141480BC213F53AEEDACC6213A3B66_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_get_Item_mA8D896F68E301ACA5A341DC5A225583D8ED2A255_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E09B940962F12FD034CC8486ED4168D4721DBBE_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = __this->___list;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB416E0A1DB85A7CADD8262857E64FB0ADC00A1EA_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mCFEF0F9FA49B2179E5E911F9D1152340A92DB3F3_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD82DC91F5E57226382BAF1401C40E957F7DA2387_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = __this->___list;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mC4F2329D15060977CE2267B4D0E87EDB561CF595_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF4ED844686904AEE780D507416D7E7A51DFF202D_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m35A745E63BFF1D589351CE60CF9E340E75C14998_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mF006EAEF6D337E8B834711F6905D3ADE4FA0D987_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_mFD6E4EDD6B7F30038EFD8F9C0FE3AC221626D95F_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m9F3566194F9D272B71951511DA8312C8B4ACA259_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m4F9FB8AF81AAA7BF937DC85004CA9F1F7E6ED280_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m02FCD7570EC5BAE9CD2BA0B6EF0227B6C253E006_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_mA6AF1223843F4580FD3FEB8E35845661982E0B32_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m6AF59C0E9009776E3BF65CC67539824CBF31E033_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_mE2403F1271152A240384F722DBC2F51B2FE474F9_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_1 = __this->___list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3);
		__this->____syncRoot = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot), (void*)L_4);
		goto IL_0037;
	}

IL_0025:
	{
		RuntimeObject** L_5 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_6 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_6, NULL);
		RuntimeObject* L_7;
		L_7 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_5, L_6, NULL);
	}

IL_0037:
	{
		RuntimeObject* L_8 = __this->____syncRoot;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m70FC2A97390955247B150E4BD8DD8B18237430F4_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ((  int32_t (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 7)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck((RuntimeObject*)L_15);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_15, NULL);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 14)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_33, L_34, (Il2CppFullySharedGenericAny*)L_35);
			RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), L_35);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_36);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_36);
			int32_t L_37 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		}

IL_00cd_1:
		{
			int32_t L_38 = V_5;
			int32_t L_39 = V_4;
			if ((((int32_t)L_38) < ((int32_t)L_39)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_40 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m6B15B872742802961CC61CA4C066AC062AB4AC8E_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m08C282A2A98D3C947E83CBC9890A8E0E709A397B_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m861331F448865761DF230F9645DB5EBC1BCE886F_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_m08B0FB302612A3978ED68B2A5B11FE2184ECEA19_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_mE7A580FD2427E3D62C85553215B06F340F19C021_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_mE23431676D7E7A313D7D013AA7D53134389E1F65_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB26BF0A4B6CF73028651EA8BC0D5DB450683A405_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	memset(V_0, 0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mFD48FDEA769B42DD057189EF0893C37CB3E425A0_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m99568215E4F7BA5BFC1D5EA185C16A603A96EDE4_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_m6E7A22F971B6F49F7A4A13748B924C5B8CD3AF69_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m772802A30F60DA8C4025283105DD3D5162CD9A40_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m8BAA6793E056F7C7F5D3EFC32F9F5D57DF86881C_gshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_gshared_inline (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_gshared_inline (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->____inUseCount = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pageId;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_PageId_m60FCE18172BAC6C1B1479026018D6422F2B30A70_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->____pageId = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseCount;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_InUseCount_m8E1B3603F6197A4CC81CE5F9FEC441342EA079DD_gshared_inline (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->____inUseCount = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_PageId_mAB3203DD4C550C1E6CDC4DF4367B61A00DC0A367_gshared_inline (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pageId;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_PageId_m4637CDAE893DECB44B1201D9DFEF3C18C0DB5257_gshared_inline (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->____pageId = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_InUseCount_m51D4FB92286C827692E858691E4E1F47FCBCD2B1_gshared_inline (TreePage_tE13370C06FAC7132F4E8B67FB0B341D5A42CEE08* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseCount;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_get_Count_m712C23152F205989A9FBD883DC268B3DB8B2641C_gshared_inline (ReadOnlyCollectionBuilder_1_t145808638CB5C3E32FED08622615C294B09DEC4B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}

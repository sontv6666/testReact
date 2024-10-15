#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
struct BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815;
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tEEC15D95BAB6A3DF86ECAE506F7A619C302241BB 
{
};
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding;
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder;
	bool ____leaveOpen;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer;
	int32_t ____maxChars;
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
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
struct BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815  : public BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null;
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	bool ___IsLittleEndian;
};
struct BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_output, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations__ctor_m553FCC132053944C31EE58781BB3FCEB99D06C79 (BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_binStream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_binStream;
		il2cpp_codegen_runtime_class_init_inline(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations_Write_mBCFD2E71FB2A2486F4AEDD740F61F1BE949F54B2 (BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	uint32_t V_4 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_5 = NULL;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	uint32_t V_8 = 0;
	{
		V_0 = il2cpp_codegen_is_little_endian();
		bool L_0 = V_0;
		if (!L_0)
		{
			goto IL_0069;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___0_value;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0060;
	}

IL_0012:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = *((uint32_t*)((uintptr_t)(&V_3)));
		V_4 = L_6;
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_8 = V_4;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_10 = V_4;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_12 = V_4;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_12>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_14 = V_4;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13, __this, L_15, 0, 4);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0060:
	{
		int32_t L_17 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_00cf;
	}

IL_0069:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = ___0_value;
		V_5 = L_19;
		V_6 = 0;
		goto IL_00c6;
	}

IL_0073:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = V_5;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		float L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		int32_t L_24 = *((uint32_t*)((uintptr_t)(&V_7)));
		V_8 = L_24;
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_26 = V_8;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_26>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_28 = V_8;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_28>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_30 = V_8;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_30>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_32 = V_8;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13, __this, L_33, 0, 4);
		int32_t L_34 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00c6:
	{
		int32_t L_35 = V_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = V_5;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0073;
		}
	}
	{
	}

IL_00cf:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations_Write_m478F19D1C6FD88C7D50C94144D75A7537AFD67D2 (BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = il2cpp_codegen_is_little_endian();
		bool L_0 = V_0;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = *((uint32_t*)((uintptr_t)(&___0_value)));
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_3 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_5 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_7 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_7>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_9 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_9>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13, __this, L_10, 0, 4);
		goto IL_008e;
	}

IL_004d:
	{
		int32_t L_11 = *((uint32_t*)((uintptr_t)(&___0_value)));
		V_2 = L_11;
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_13 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_13>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_15 = V_2;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_15>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_17 = V_2;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_17>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_19 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13, __this, L_20, 0, 4);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations_Write_mBC04F203322EBC95E99314874835308B8DCF9FF5 (BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_arr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_1 = NULL;
	int32_t V_2 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	uint32_t V_8 = 0;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_9 = NULL;
	int32_t V_10 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	uint32_t V_16 = 0;
	{
		V_0 = il2cpp_codegen_is_little_endian();
		bool L_0 = V_0;
		if (!L_0)
		{
			goto IL_0143;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___0_arr;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0134;
	}

IL_0018:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = V_3;
		float L_7 = L_6.___x;
		V_4 = L_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = V_3;
		float L_9 = L_8.___y;
		V_5 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = V_3;
		float L_11 = L_10.___z;
		V_6 = L_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = V_3;
		float L_13 = L_12.___w;
		V_7 = L_13;
		int32_t L_14 = *((uint32_t*)((uintptr_t)(&V_4)));
		V_8 = L_14;
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_16 = V_8;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_18 = V_8;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_18>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_20 = V_8;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_20>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_22 = V_8;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_22>>((int32_t)24)))));
		int32_t L_23 = *((uint32_t*)((uintptr_t)(&V_5)));
		V_8 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_25 = V_8;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)L_25));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_27 = V_8;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_27>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_29 = V_8;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_29>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_31 = V_8;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_31>>((int32_t)24)))));
		int32_t L_32 = *((uint32_t*)((uintptr_t)(&V_6)));
		V_8 = L_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_34 = V_8;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)L_34));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_36 = V_8;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_36>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_38 = V_8;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_38>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_40 = V_8;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_40>>((int32_t)24)))));
		int32_t L_41 = *((uint32_t*)((uintptr_t)(&V_7)));
		V_8 = L_41;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_43 = V_8;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)((int32_t)(uint8_t)L_43));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_45 = V_8;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_45>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_47 = V_8;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_47>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_49 = V_8;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_49>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13, __this, L_50, 0, ((int32_t)16));
		int32_t L_51 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0134:
	{
		int32_t L_52 = V_2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_53 = V_1;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0281;
	}

IL_0143:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_54 = ___0_arr;
		V_9 = L_54;
		V_10 = 0;
		goto IL_0275;
	}

IL_0150:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_55 = V_9;
		int32_t L_56 = V_10;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_11 = L_58;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_59 = V_11;
		float L_60 = L_59.___x;
		V_12 = L_60;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_61 = V_11;
		float L_62 = L_61.___y;
		V_13 = L_62;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_63 = V_11;
		float L_64 = L_63.___z;
		V_14 = L_64;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_65 = V_11;
		float L_66 = L_65.___w;
		V_15 = L_66;
		int32_t L_67 = *((uint32_t*)((uintptr_t)(&V_12)));
		V_16 = L_67;
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_69 = V_16;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_69>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_71 = V_16;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_71>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_73 = V_16;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_73>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_75 = V_16;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_75));
		int32_t L_76 = *((uint32_t*)((uintptr_t)(&V_13)));
		V_16 = L_76;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_78 = V_16;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_78>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_80 = V_16;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_80>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_82 = V_16;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_82>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_84 = V_16;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)L_84));
		int32_t L_85 = *((uint32_t*)((uintptr_t)(&V_14)));
		V_16 = L_85;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_87 = V_16;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_87>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_89 = V_16;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_89>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_91 = V_16;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_91>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_93 = V_16;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)L_93));
		int32_t L_94 = *((uint32_t*)((uintptr_t)(&V_15)));
		V_16 = L_94;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_96 = V_16;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_96>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_98 = V_16;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_98>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_100 = V_16;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_100>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_102 = V_16;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)(uint8_t)L_102));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13, __this, L_103, 0, ((int32_t)16));
		int32_t L_104 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0275:
	{
		int32_t L_105 = V_10;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_106 = V_9;
		NullCheck(L_106);
		if ((((int32_t)L_105) < ((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length)))))
		{
			goto IL_0150;
		}
	}
	{
	}

IL_0281:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations_Write_m97AB5B604DA287BDCDBF607C1941AE0A77D2F054 (BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_arr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	uint32_t V_7 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_8 = NULL;
	int32_t V_9 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	uint32_t V_14 = 0;
	{
		V_0 = il2cpp_codegen_is_little_endian();
		bool L_0 = V_0;
		if (!L_0)
		{
			goto IL_0101;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___0_arr;
		V_1 = L_1;
		V_2 = 0;
		goto IL_00f2;
	}

IL_0018:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_3;
		float L_7 = L_6.___x;
		V_4 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_3;
		float L_9 = L_8.___y;
		V_5 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_3;
		float L_11 = L_10.___z;
		V_6 = L_11;
		int32_t L_12 = *((uint32_t*)((uintptr_t)(&V_4)));
		V_7 = L_12;
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_14 = V_7;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_16 = V_7;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_16>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_18 = V_7;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_18>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_20 = V_7;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_20>>((int32_t)24)))));
		int32_t L_21 = *((uint32_t*)((uintptr_t)(&V_5)));
		V_7 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_23 = V_7;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)L_23));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_25 = V_7;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_25>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_27 = V_7;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_27>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_29 = V_7;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_29>>((int32_t)24)))));
		int32_t L_30 = *((uint32_t*)((uintptr_t)(&V_6)));
		V_7 = L_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_32 = V_7;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)L_32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_34 = V_7;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_34>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_36 = V_7;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_36>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_38 = V_7;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_38>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13, __this, L_39, 0, ((int32_t)12));
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00f2:
	{
		int32_t L_41 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_42 = V_1;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_01fc;
	}

IL_0101:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = ___0_arr;
		V_8 = L_43;
		V_9 = 0;
		goto IL_01f0;
	}

IL_010e:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_44 = V_8;
		int32_t L_45 = V_9;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_10 = L_47;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_10;
		float L_49 = L_48.___x;
		V_11 = L_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_10;
		float L_51 = L_50.___y;
		V_12 = L_51;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_10;
		float L_53 = L_52.___z;
		V_13 = L_53;
		int32_t L_54 = *((uint32_t*)((uintptr_t)(&V_11)));
		V_14 = L_54;
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_56 = V_14;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_56>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_58 = V_14;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_58>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_60 = V_14;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_60>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_62 = V_14;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_62));
		int32_t L_63 = *((uint32_t*)((uintptr_t)(&V_12)));
		V_14 = L_63;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_65 = V_14;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_65>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_67 = V_14;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_67>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_69 = V_14;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_69>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_71 = V_14;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)L_71));
		int32_t L_72 = *((uint32_t*)((uintptr_t)(&V_13)));
		V_14 = L_72;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_74 = V_14;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_74>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_76 = V_14;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_76>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_78 = V_14;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_78>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_80 = V_14;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13, __this, L_81, 0, ((int32_t)12));
		int32_t L_82 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01f0:
	{
		int32_t L_83 = V_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_84 = V_8;
		NullCheck(L_84);
		if ((((int32_t)L_83) < ((int32_t)((int32_t)(((RuntimeArray*)L_84)->max_length)))))
		{
			goto IL_010e;
		}
	}
	{
	}

IL_01fc:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations_Write_mFB1517E4038E29A21E10885160A65E753B412A98 (BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___0_arr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* V_1 = NULL;
	int32_t V_2 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	uint32_t V_8 = 0;
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* V_9 = NULL;
	int32_t V_10 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	uint32_t V_16 = 0;
	{
		V_0 = il2cpp_codegen_is_little_endian();
		bool L_0 = V_0;
		if (!L_0)
		{
			goto IL_0143;
		}
	}
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_1 = ___0_arr;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0134;
	}

IL_0018:
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_3;
		float L_7 = L_6.___x;
		V_4 = L_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_3;
		float L_9 = L_8.___y;
		V_5 = L_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_3;
		float L_11 = L_10.___z;
		V_6 = L_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_3;
		float L_13 = L_12.___w;
		V_7 = L_13;
		int32_t L_14 = *((uint32_t*)((uintptr_t)(&V_4)));
		V_8 = L_14;
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_16 = V_8;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_18 = V_8;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_18>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_20 = V_8;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_20>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_22 = V_8;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_22>>((int32_t)24)))));
		int32_t L_23 = *((uint32_t*)((uintptr_t)(&V_5)));
		V_8 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_25 = V_8;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)L_25));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_27 = V_8;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_27>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_29 = V_8;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_29>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_31 = V_8;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_31>>((int32_t)24)))));
		int32_t L_32 = *((uint32_t*)((uintptr_t)(&V_6)));
		V_8 = L_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_34 = V_8;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)L_34));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_36 = V_8;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_36>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_38 = V_8;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_38>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_40 = V_8;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_40>>((int32_t)24)))));
		int32_t L_41 = *((uint32_t*)((uintptr_t)(&V_7)));
		V_8 = L_41;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_43 = V_8;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)((int32_t)(uint8_t)L_43));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_45 = V_8;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_45>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_47 = V_8;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_47>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_49 = V_8;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_49>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13, __this, L_50, 0, ((int32_t)16));
		int32_t L_51 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0134:
	{
		int32_t L_52 = V_2;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_53 = V_1;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0281;
	}

IL_0143:
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_54 = ___0_arr;
		V_9 = L_54;
		V_10 = 0;
		goto IL_0275;
	}

IL_0150:
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_55 = V_9;
		int32_t L_56 = V_10;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_11 = L_58;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59 = V_11;
		float L_60 = L_59.___x;
		V_12 = L_60;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61 = V_11;
		float L_62 = L_61.___y;
		V_13 = L_62;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63 = V_11;
		float L_64 = L_63.___z;
		V_14 = L_64;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_11;
		float L_66 = L_65.___w;
		V_15 = L_66;
		int32_t L_67 = *((uint32_t*)((uintptr_t)(&V_12)));
		V_16 = L_67;
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_69 = V_16;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_69>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_71 = V_16;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_71>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_73 = V_16;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_73>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_75 = V_16;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_75));
		int32_t L_76 = *((uint32_t*)((uintptr_t)(&V_13)));
		V_16 = L_76;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_78 = V_16;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_78>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_80 = V_16;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_80>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_82 = V_16;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_82>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_84 = V_16;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)L_84));
		int32_t L_85 = *((uint32_t*)((uintptr_t)(&V_14)));
		V_16 = L_85;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_87 = V_16;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_87>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_89 = V_16;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_89>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_91 = V_16;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_91>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_93 = V_16;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)L_93));
		int32_t L_94 = *((uint32_t*)((uintptr_t)(&V_15)));
		V_16 = L_94;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_96 = V_16;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_96>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_98 = V_16;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_98>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_100 = V_16;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_100>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		uint32_t L_102 = V_16;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)(uint8_t)L_102));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13, __this, L_103, 0, ((int32_t)16));
		int32_t L_104 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0275:
	{
		int32_t L_105 = V_10;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_106 = V_9;
		NullCheck(L_106);
		if ((((int32_t)L_105) < ((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length)))))
		{
			goto IL_0150;
		}
	}
	{
	}

IL_0281:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations__cctor_m84A827A3C56BC60D0213BD2628D59ABFDD5AEECE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

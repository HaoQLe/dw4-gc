#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void fn_80188BA4(void *);
void fn_80188C0C(void *,int);
void fn_80188CAC(void *,void *);
void fn_80188CD0(void *);
void fn_801EAF3C(void *,void *);
extern void *lbl_80564BC0;
extern void *lbl_80564ED0;
}
static inline void *UnknownGenCast80154BAC_9(void *q){
 void *value2;
 if((q&&(value2=fn_80068128(q,lbl_80564ED0),(unsigned char)(int)value2))) return q;
 return 0;
}
static inline void *UnknownGenCast80154BAC_15(void *q){
 void *value3;
 if((q&&(value3=fn_80068128(q,lbl_80564BC0),(unsigned char)(int)value3))) return q;
 return 0;
}
class UnknownGenV80154BAC_2 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64();
 virtual void s68();
 virtual void s6C();
 virtual void s70();
 virtual void s74();
 virtual void s78();
 virtual void s7C();
 virtual void s80();
 virtual void s84();
 virtual void s88();
 virtual void s8C();
 virtual void s90();
};
extern "C" {
void igChildEditForNode_virtual98(int p0,int p1){
 void *value0;
 void *value1;
 void *local0;
 fn_80188BA4(&local0);
 value0=UnknownGenCast80154BAC_9(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32));
 value1=UnknownGenCast80154BAC_15(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+36));
 fn_801EAF3C(value0,value1);
 reinterpret_cast<UnknownGenV80154BAC_2 *>((void *)p1)->s90();
 fn_80188CD0(&local0);
 fn_80188CAC((void *)p0,&local0);
 fn_80188C0C(&local0,-1);
}
}
#pragma pop

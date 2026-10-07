#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800681C4(void *);
void fn_80068390(void *,void *);
void fn_800FC1FC(void *,void *);
extern void *lbl_8056356C;
void *png_get_io_ptr(void *);
}
class UnknownGenV801043BC_0 {
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
 virtual void s6C(void *,void *,void *);
};
class UnknownGenV80104418_1 {
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
 virtual void s74(void *,void *,void *);
};
extern "C" {
void fn_80104348(int p0){
 fn_800FC1FC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44));
}
void fn_80104374(int p0){
 fn_800681C4(lbl_8056356C);
}
void fn_80104398(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80068390(lbl_8056356C,(void *)p1);
}
void fn_801043BC(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0=png_get_io_ptr((void *)p0);
 reinterpret_cast<UnknownGenV801043BC_0 *>(value0)->s6C((void *)p1,(void *)1,(void *)p2);
}
void fn_80104410(){}
void fn_80104414(){}
void fn_80104418(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0=png_get_io_ptr((void *)p0);
 reinterpret_cast<UnknownGenV80104418_1 *>(value0)->s74((void *)p1,(void *)1,(void *)p2);
}
void fn_8010446C(){}
}
#pragma pop

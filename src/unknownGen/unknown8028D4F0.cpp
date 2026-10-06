#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8028C93C();
void fn_8028D6B4();
extern char lbl_804CC8E0[];
extern char lbl_804CC8EC[];
extern char lbl_804CCDD4[];
extern void *lbl_8056610C;
void *fn_8028D4F0();
void *fn_8028D52C();
void fn_8028D5F4();
void fn_8028D61C();
void *fn_8028D694();
}
struct UnknownGenRoot8028D52C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028D52C(){fn_8006665C(this);}
};
struct UnknownGenObject8028D52C : UnknownGenRoot8028D52C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8028D52C(){unknown00=lbl_804CCDD4;}
};
extern "C" {
void *fn_8028D4F0(){
 if(!lbl_8056610C || !(reinterpret_cast<unsigned int *>(lbl_8056610C)[0x24/4]&4)) fn_8028D5F4();
 return lbl_8056610C;
}
void *fn_8028D52C(){
 UnknownGenObject8028D52C object;
 object.unknown00=lbl_804CCDD4;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8028D5F4(){
 fn_80066188((int)fn_8028D61C);
}
void fn_8028D61C(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_8056610C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8028D694,(int)lbl_804CC8EC,16,(int)fn_8028D52C,(int)fn_8028D6B4,0,(int)lbl_804CC8E0);
}
void *fn_8028D694(){return fn_8028D4F0();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_80027F94();
void *fn_8003AAE8();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
extern char lbl_80463F30[];
extern char lbl_80463F40[];
extern char lbl_804715F4[];
extern void *lbl_805616B0;
void *fn_80027D60();
void *fn_80027D9C();
void fn_80027ED4();
void fn_80027EFC();
void *fn_80027F74();
}
struct UnknownGenRoot80027D9C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80027D9C(){fn_8006665C(this);}
};
struct UnknownGenObject80027D9C : UnknownGenRoot80027D9C {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80027D9C(){unknown00=lbl_804715F4;}
};
extern "C" {
void *fn_80027D08(){return fn_8003AAE8();}
void *fn_80027D28(void *object){
 fn_80027ED4();
 return fn_8006546C(lbl_805616B0,object);
}
void *fn_80027D60(){
 if(!lbl_805616B0 || !(reinterpret_cast<unsigned int *>(lbl_805616B0)[0x24/4]&4)) fn_80027ED4();
 return lbl_805616B0;
}
void *fn_80027D9C(){
 UnknownGenObject80027D9C object;
 object.unknown00=lbl_804715F4;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80027ED4(){
 fn_80066188((int)fn_80027EFC);
}
void fn_80027EFC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805616B0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80027F74,(int)lbl_80463F40,24,(int)fn_80027D9C,(int)fn_80027F94,0,(int)lbl_80463F30);
}
void *fn_80027F74(){return fn_80027D60();}
}
#pragma pop

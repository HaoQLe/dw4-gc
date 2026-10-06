#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_80284540();
void fn_80284B74();
void fn_80402E28();
void fn_804050A0();
extern char lbl_8046215C[];
extern char lbl_804CBB90[];
extern char lbl_804F1438[];
extern void *lbl_8055C848;
void *fn_80404F00();
void *fn_80404F4C();
void fn_80404FE4();
void fn_8040500C();
void *fn_80405080();
}
struct UnknownGenRoot80404F4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80404F4C(){fn_8006665C(this);}
};
struct UnknownGenObject80404F4C : UnknownGenRoot80404F4C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80404F4C(){unknown00=lbl_804F1438;}
};
extern "C" {
void *fn_80404EC0(void *object){
 fn_80404FE4();
 return fn_8006546C(lbl_8055C848,object);
}
void *fn_80404F00(){
 if(!lbl_8055C848 || !(reinterpret_cast<unsigned int *>(lbl_8055C848)[0x24/4]&4)) fn_80404FE4();
 return lbl_8055C848;
}
void *fn_80404F4C(){
 UnknownGenObject80404F4C object;
 object.unknown00=lbl_804CBB90;
 object.unknown00=lbl_804F1438;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80404FE4(){
 fn_80066188((int)fn_8040500C);
}
void fn_8040500C(){
 fn_80402E28();
 fn_80066204(0,(int)&lbl_8055C848,(int)fn_80284B74,(int)fn_80284540,(int)fn_80405080,(int)lbl_8046215C,16,(int)fn_80404F4C,(int)fn_804050A0,0,0);
}
void *fn_80405080(){return fn_80404F00();}
}
#pragma pop

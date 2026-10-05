#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8012FC48();
void fn_80130654();
extern char lbl_8049BCF0[];
extern char lbl_804AAD84[];
extern void *lbl_80563ABC;
void *fn_80130520();
void *fn_8013055C();
void fn_8013059C();
void fn_801305C4();
void *fn_80130634();
}
struct UnknownGenObject8013055C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80130520(){
 if(!lbl_80563ABC || !(reinterpret_cast<unsigned int *>(lbl_80563ABC)[0x24/4]&4)) fn_8013059C();
 return lbl_80563ABC;
}
void *fn_8013055C(){
 UnknownGenObject8013055C object;
 fn_8006665C(&object);
 object.unknown00=lbl_804AAD84;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013059C(){
 fn_80066188((int)fn_801305C4);
}
void fn_801305C4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563ABC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80130634,(int)lbl_8049BCF0,20,(int)fn_8013055C,(int)fn_80130654,0,0);
}
void *fn_80130634(){return fn_80130520();}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_801159FC();
void fn_80115AA4();
void fn_80402E28();
void fn_80403B2C();
extern char lbl_80461E00[];
extern char lbl_80496CB8[];
extern char lbl_804F0038[];
extern char lbl_804F1AE0[];
extern void *lbl_8055C778;
void *fn_804039C8();
void *fn_80403A14();
void fn_80403A68();
void fn_80403A90();
void *fn_80403B0C();
}
struct UnknownGenObject80403A14_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80403988(void *object){
 fn_80403A68();
 return fn_8006546C(lbl_8055C778,object);
}
void *fn_804039C8(){
 if(!lbl_8055C778 || !(reinterpret_cast<unsigned int *>(lbl_8055C778)[0x24/4]&4)) fn_80403A68();
 return lbl_8055C778;
}
void *fn_80403A14(){
 UnknownGenObject80403A14_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80496CB8;
 object.unknown00=lbl_804F1AE0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80403A68(){
 fn_80066188((int)fn_80403A90);
}
void fn_80403A90(){
 fn_80402E28();
 fn_80066204(0,(int)&lbl_8055C778,(int)fn_80115AA4,(int)fn_801159FC,(int)fn_80403B0C,(int)lbl_80461E00,24,(int)fn_80403A14,(int)fn_80403B2C,0,(int)lbl_804F0038);
}
void *fn_80403B0C(){return fn_804039C8();}
}
#pragma pop

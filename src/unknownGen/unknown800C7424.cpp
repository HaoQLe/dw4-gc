#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *fn_80029E64(void *);
void fn_80033A14();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800C6F28();
extern char lbl_80472FA0[];
extern char lbl_8047E95C[];
extern char lbl_8047EAF8[];
extern char lbl_8047EB58[];
extern void *lbl_805621F4;
extern void *lbl_80562B60;
void *fn_800C7460();
void *fn_800C749C();
void fn_800C74F4();
void fn_800C751C();
void *fn_800C7584();
}
struct UnknownGenObject800C749C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800C7424(){
 if(!lbl_80562B60) lbl_80562B60=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562B60;
}
void *fn_800C7460(){
 if(!lbl_80562B60 || !(reinterpret_cast<unsigned int *>(lbl_80562B60)[0x24/4]&4)) fn_800C74F4();
 return lbl_80562B60;
}
void *fn_800C749C(){
 UnknownGenObject800C749C object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8047EB58;
 object.unknown00=lbl_8047EAF8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800C74F4(){
 fn_80066188((int)fn_800C751C);
}
void fn_800C751C(){
 fn_800C6F28();
 fn_80066204(0,(int)&lbl_80562B60,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_800C7584,(int)lbl_8047E95C,20,(int)fn_800C749C,0,0,0);
}
void *fn_800C7584(){return fn_800C7460();}
}
#pragma pop

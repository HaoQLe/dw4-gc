#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D14D4();
void igObject_register();
extern char lbl_80489454[];
extern char lbl_80493E34[];
extern void *lbl_805621F4;
extern void *lbl_80562EFC;
void *igParticleFormat_getMeta();
void *igParticleFormat_vtableRead();
void fn_800D141C();
void igParticleFormat_register();
void *igParticleFormat_getMetaCall();
}
struct UnknownGenObject800D13DC_0 {
 void *unknown00;
 char unknown04[52];
};
extern "C" {
void *fn_800D132C(void *object){
 fn_800D141C();
 return fn_8006546C(lbl_80562EFC,object);
}
void *fn_800D1364(){
 if(!lbl_80562EFC) lbl_80562EFC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562EFC;
}
void *igParticleFormat_getMeta(){
 if(!lbl_80562EFC || !(reinterpret_cast<unsigned int *>(lbl_80562EFC)[0x24/4]&4)) fn_800D141C();
 return lbl_80562EFC;
}
void *igParticleFormat_vtableRead(){
 UnknownGenObject800D13DC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80493E34;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D141C(){
 fn_80066188((int)igParticleFormat_register);
}
void igParticleFormat_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562EFC,(int)igObject_register,(int)fn_800237D0,(int)igParticleFormat_getMetaCall,(int)lbl_80489454,48,(int)igParticleFormat_vtableRead,(int)fn_800D14D4,0,0);
}
void *igParticleFormat_getMetaCall(){return igParticleFormat_getMeta();}
}
#pragma pop

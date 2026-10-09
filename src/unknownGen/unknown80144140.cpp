#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_80143FCC();
void igIterateGraph_fieldInit();
void igIterator_register();
extern char lbl_8049E55C[];
extern char lbl_8049E568[];
extern char lbl_804A9B8C[];
extern char lbl_804A9C44[];
extern void *lbl_805621F4;
extern void *lbl_805640FC;
void *igIterateGraph_getMeta();
void *igIterateGraph_vtableRead();
void fn_801442C4();
void igIterateGraph_register();
void *igIterateGraph_getMetaCall();
}
struct UnknownGenRoot801441F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801441F0(){fn_8006665C(this);}
};
struct UnknownGenObject801441F0 : UnknownGenRoot801441F0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801441F0(){unknown00=lbl_804A9B8C;}
};
extern "C" {
void *fn_80144140(void *object){
 fn_801442C4();
 return fn_8006546C(lbl_805640FC,object);
}
void *fn_80144178(){
 if(!lbl_805640FC) lbl_805640FC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805640FC;
}
void *igIterateGraph_getMeta(){
 if(!lbl_805640FC || !(reinterpret_cast<unsigned int *>(lbl_805640FC)[0x24/4]&4)) fn_801442C4();
 return lbl_805640FC;
}
void *igIterateGraph_vtableRead(){
 UnknownGenObject801441F0 object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=lbl_804A9B8C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801442C4(){
 fn_80066188((int)igIterateGraph_register);
}
void igIterateGraph_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805640FC,(int)igIterator_register,(int)fn_80143FCC,(int)igIterateGraph_getMetaCall,(int)lbl_8049E568,20,(int)igIterateGraph_vtableRead,(int)igIterateGraph_fieldInit,0,(int)lbl_8049E55C);
}
void *igIterateGraph_getMetaCall(){return igIterateGraph_getMeta();}
}
#pragma pop

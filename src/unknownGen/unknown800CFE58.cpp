#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *fn_800E2BEC();
void *igGamecubeVertexArray1_1_getMeta();
void igObjectList_register();
void igObject_register();
void *igVertexArray_fieldInit();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804889BC[];
extern char lbl_804889D0[];
extern char lbl_80493F64[];
extern char lbl_80493FC8[];
extern char lbl_8055EACC[8];
extern void *lbl_805621F4;
extern void *lbl_80562DF8;
extern void *lbl_80562DFC;
void *igVertexArrayList_getMeta();
void *igVertexArrayList_vtableRead();
void fn_800CFF7C();
void igVertexArrayList_register();
void *igVertexArrayList_getMetaCall();
void *igVertexArray_getMeta();
void fn_800D00E0();
void igVertexArray_register();
void *igVertexArray_getMetaCall();
}
struct UnknownGenObject800CFF0C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igGamecubeVertexArray1_1_getMetaCall(){return igGamecubeVertexArray1_1_getMeta();}
void *fn_800CFE78(){return fn_800E2BEC();}
void *fn_800CFE98(void *object){
 fn_800CFF7C();
 return fn_8006546C(lbl_80562DF8,object);
}
void *igVertexArrayList_getMeta(){
 if(!lbl_80562DF8 || !(reinterpret_cast<unsigned int *>(lbl_80562DF8)[0x24/4]&4)) fn_800CFF7C();
 return lbl_80562DF8;
}
void *igVertexArrayList_vtableRead(){
 UnknownGenObject800CFF0C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80493FC8;
 object.unknown00=lbl_80493F64;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CFF7C(){
 fn_80066188((int)igVertexArrayList_register);
}
void igVertexArrayList_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562DF8,(int)igObjectList_register,(int)fn_80024180,(int)igVertexArrayList_getMetaCall,(int)lbl_804889BC,20,(int)igVertexArrayList_vtableRead,0,0,(int)lbl_8055EACC);
}
void *igVertexArrayList_getMetaCall(){return igVertexArrayList_getMeta();}
void *fn_800D0030(void *object){
 fn_800D00E0();
 return fn_8006546C(lbl_80562DFC,object);
}
void *fn_800D0068(){
 if(!lbl_80562DFC) lbl_80562DFC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562DFC;
}
void *igVertexArray_getMeta(){
 if(!lbl_80562DFC || !(reinterpret_cast<unsigned int *>(lbl_80562DFC)[0x24/4]&4)) fn_800D00E0();
 return lbl_80562DFC;
}
void fn_800D00E0(){
 fn_80066188((int)igVertexArray_register);
}
void igVertexArray_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562DFC,(int)igObject_register,(int)fn_800237D0,(int)igVertexArray_getMetaCall,(int)lbl_804889D0,24,0,(int)igVertexArray_fieldInit,0,0);
}
void *igVertexArray_getMetaCall(){return igVertexArray_getMeta();}
}
#pragma pop

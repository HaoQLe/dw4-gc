#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AD3D0();
void igObjectList_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804780FC[];
extern char lbl_8047E380[];
extern char lbl_8047E3E4[];
extern char lbl_8055DEF4[8];
extern void *lbl_8056249C;
extern void *lbl_805624A0;
void *igVertexBlendMatrixAttrList_getMeta();
void *igVertexBlendMatrixAttrList_vtableRead();
void fn_800AD248();
void igVertexBlendMatrixAttrList_register();
void *igVertexBlendMatrixAttrList_getMetaCall();
}
struct UnknownGenObject800AD1D8_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igVertexBlendMatrixAttrList_getMeta(){
 if(!lbl_8056249C || !(reinterpret_cast<unsigned int *>(lbl_8056249C)[0x24/4]&4)) fn_800AD248();
 return lbl_8056249C;
}
void *igVertexBlendMatrixAttrList_vtableRead(){
 UnknownGenObject800AD1D8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047E3E4;
 object.unknown00=lbl_8047E380;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AD248(){
 fn_80066188((int)igVertexBlendMatrixAttrList_register);
}
void igVertexBlendMatrixAttrList_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056249C,(int)igObjectList_register,(int)fn_80024180,(int)igVertexBlendMatrixAttrList_getMetaCall,(int)lbl_804780FC,20,(int)igVertexBlendMatrixAttrList_vtableRead,0,0,(int)lbl_8055DEF4);
}
void *igVertexBlendMatrixAttrList_getMetaCall(){return igVertexBlendMatrixAttrList_getMeta();}
void *fn_800AD2FC(void *object){
 fn_800AD3D0();
 return fn_8006546C(lbl_805624A0,object);
}
void *igVertexBlendMatrixAttr_getMeta(){
 if(!lbl_805624A0 || !(reinterpret_cast<unsigned int *>(lbl_805624A0)[0x24/4]&4)) fn_800AD3D0();
 return lbl_805624A0;
}
}
#pragma pop

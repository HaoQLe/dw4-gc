#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800B1EF8();
void *fn_800C23E4(int);
void *fn_80218120();
void igVisualAttribute_register();
extern char lbl_80478C88[];
extern char lbl_8047B754[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E23C[8];
extern char lbl_8055E244[8];
extern char lbl_8055E24C[8];
extern char lbl_8055E254[8];
extern char lbl_8055E25C[8];
extern void *lbl_805621F4;
extern void *lbl_80562694;
extern void *lbl_805626A0;
void *igRefVertexBlendMatrixAttr_getMeta();
void *igRefVertexBlendMatrixAttr_vtableRead();
void fn_800B1C94();
void igRefVertexBlendMatrixAttr_register();
void *igRefVertexBlendMatrixAttr_getMetaCall();
void igRefVertexBlendMatrixAttr_fieldInit();
}
struct UnknownGenRoot800B1BF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B1BF4(){fn_8006665C(this);}
};
struct UnknownGenObject800B1BF4 : UnknownGenRoot800B1BF4 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800B1BF4(){unknown00=lbl_8047B754;}
};
extern "C" {
void *igRefVertexBlendMatrixAttr_getMeta(){
 if(!lbl_80562694 || !(reinterpret_cast<unsigned int *>(lbl_80562694)[0x24/4]&4)) fn_800B1C94();
 return lbl_80562694;
}
void *igRefVertexBlendMatrixAttr_vtableRead(){
 UnknownGenObject800B1BF4 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B754;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B1C94(){
 fn_80066188((int)igRefVertexBlendMatrixAttr_register);
}
void igRefVertexBlendMatrixAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562694,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igRefVertexBlendMatrixAttr_getMetaCall,(int)lbl_80478C88,20,(int)igRefVertexBlendMatrixAttr_vtableRead,(int)igRefVertexBlendMatrixAttr_fieldInit,0,(int)lbl_8055E23C);
}
void *igRefVertexBlendMatrixAttr_getMetaCall(){return igRefVertexBlendMatrixAttr_getMeta();}
void igRefVertexBlendMatrixAttr_fieldInit(){
 void *value0=lbl_80562694;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E244,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80218120();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+48)=(void *)fn_800C23E4;
 fn_800659C0(value0,lbl_8055E24C,lbl_8055E254,lbl_8055E25C,value1);
}
void *fn_800B1DE8(void *object){
 fn_800B1EF8();
 return fn_8006546C(lbl_805626A0,object);
}
void *fn_800B1E20(){
 if(!lbl_805626A0) lbl_805626A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805626A0;
}
void *igProjectionMatrixAttr_getMeta(){
 if(!lbl_805626A0 || !(reinterpret_cast<unsigned int *>(lbl_805626A0)[0x24/4]&4)) fn_800B1EF8();
 return lbl_805626A0;
}
}
#pragma pop

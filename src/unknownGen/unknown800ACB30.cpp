#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igVertexBlendMatrixListAttr_registerNow();
void *fn_800CDF6C();
void igVisualAttribute_register();
extern char igVertexPipelineModeAttr_className[];
extern char igVertexBlendStateAttr_className[];
extern char igVertexPipelineModeAttr_vtable[];
extern char igVertexBlendStateAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055DEC0[4];
extern char lbl_8055DECC[4];
extern char lbl_8055DED0[4];
extern char lbl_8055DED4[4];
extern char lbl_8055DED8[4];
extern char lbl_8055DEDC[4];
extern char lbl_8055DEE0[4];
extern char lbl_8055DEE4[4];
extern char lbl_8055DEE8[4];
extern void *igVertexPipelineModeAttr_meta;
extern void *igVertexBlendStateAttr_meta;
extern void *igVertexBlendMatrixListAttr_meta;
void *igVertexPipelineModeAttr_getMeta();
void *igVertexPipelineModeAttr_vtableRead();
void igVertexPipelineModeAttr_registerNow();
void igVertexPipelineModeAttr_register();
void *igVertexPipelineModeAttr_getMetaCall();
void igVertexPipelineModeAttr_fieldInit();
void *igVertexBlendStateAttr_getMeta();
void *igVertexBlendStateAttr_vtableRead();
void igVertexBlendStateAttr_registerNow();
void igVertexBlendStateAttr_register();
void *igVertexBlendStateAttr_getMetaCall();
void igVertexBlendStateAttr_fieldInit();
}
struct UnknownGenObject800ACB6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800ACD44_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igVertexPipelineModeAttr_getMeta(){
 if(!igVertexPipelineModeAttr_meta || !(reinterpret_cast<unsigned int *>(igVertexPipelineModeAttr_meta)[0x24/4]&4)) igVertexPipelineModeAttr_registerNow();
 return igVertexPipelineModeAttr_meta;
}
void *igVertexPipelineModeAttr_vtableRead(){
 UnknownGenObject800ACB6C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igVertexPipelineModeAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVertexPipelineModeAttr_registerNow(){
 meta_registerNow((int)igVertexPipelineModeAttr_register);
}
void igVertexPipelineModeAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igVertexPipelineModeAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igVertexPipelineModeAttr_getMetaCall,(int)igVertexPipelineModeAttr_className,16,(int)igVertexPipelineModeAttr_vtableRead,(int)igVertexPipelineModeAttr_fieldInit,0,0);
}
void *igVertexPipelineModeAttr_getMetaCall(){return igVertexPipelineModeAttr_getMeta();}
void igVertexPipelineModeAttr_fieldInit(){
 void *value0=igVertexPipelineModeAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055DEC0,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055DED8);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDF6C;
 fn_800659C0(value0,lbl_8055DECC,lbl_8055DED0,lbl_8055DED4,value1);
}
void *igVertexBlendStateAttr_getMeta(){
 if(!igVertexBlendStateAttr_meta || !(reinterpret_cast<unsigned int *>(igVertexBlendStateAttr_meta)[0x24/4]&4)) igVertexBlendStateAttr_registerNow();
 return igVertexBlendStateAttr_meta;
}
void *igVertexBlendStateAttr_vtableRead(){
 UnknownGenObject800ACD44_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igVertexBlendStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igVertexBlendStateAttr_registerNow(){
 meta_registerNow((int)igVertexBlendStateAttr_register);
}
void igVertexBlendStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igVertexBlendStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igVertexBlendStateAttr_getMetaCall,(int)igVertexBlendStateAttr_className,16,(int)igVertexBlendStateAttr_vtableRead,(int)igVertexBlendStateAttr_fieldInit,0,0);
}
void *igVertexBlendStateAttr_getMetaCall(){return igVertexBlendStateAttr_getMeta();}
void igVertexBlendStateAttr_fieldInit(){
 void *value0=igVertexBlendStateAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055DEDC,1);
 fn_800659C0(value0,lbl_8055DEE0,lbl_8055DEE4,lbl_8055DEE8,value1);
}
void *igVertexBlendMatrixListAttr_create(void *object){
 igVertexBlendMatrixListAttr_registerNow();
 return meta_createInstance(igVertexBlendMatrixListAttr_meta,object);
}
void *igVertexBlendMatrixListAttr_getMeta(){
 if(!igVertexBlendMatrixListAttr_meta || !(reinterpret_cast<unsigned int *>(igVertexBlendMatrixListAttr_meta)[0x24/4]&4)) igVertexBlendMatrixListAttr_registerNow();
 return igVertexBlendMatrixListAttr_meta;
}
}
#pragma pop

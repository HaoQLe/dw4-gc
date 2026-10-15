#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013B3D8();
void igManager_register();
void igOptManager_fieldInit();
void igOptTraverseGraph_register();
extern char igOptReplaceNode_className[];
extern char igOptManager_dependencies[];
extern char igOptManager_className[];
extern char igOptManager_vtable[];
extern char lbl_804A6460[];
extern char igManager_vtable[];
extern void *lbl_805621F4;
extern void *igOptTraverseGraph_meta;
extern void *igOptReplaceNode_meta;
extern void *igOptManager_meta;
extern void *igManager_meta;
void *igOptReplaceNode_getMeta();
void igOptReplaceNode_arkRegister();
void igOptReplaceNode_register();
void *igOptReplaceNode_getMetaCall();
void *fn_8013AFE4();
void *igOptManager_getMeta();
void *igOptManager_vtableRead();
void igOptManager_arkRegister();
void igOptManager_register();
void *igOptManager_getMetaCall();
void *fn_8013B2B0();
}
struct UnknownGenRoot8013B064 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013B064(){igObject_construct(this);}
};
struct UnknownGenObject8013B064 : UnknownGenRoot8013B064 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenString unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8013B064(){unknown00=igOptManager_vtable;}
};
extern "C" {
void *igOptReplaceNode_getMeta(){
 if(!igOptReplaceNode_meta || !(reinterpret_cast<unsigned int *>(igOptReplaceNode_meta)[0x24/4]&4)) igOptReplaceNode_arkRegister();
 return igOptReplaceNode_meta;
}
void igOptReplaceNode_arkRegister(){
 meta_registerNow((int)igOptReplaceNode_register);
}
void igOptReplaceNode_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igOptReplaceNode_meta,(int)igOptTraverseGraph_register,(int)fn_8013AFE4,(int)igOptReplaceNode_getMetaCall,(int)igOptReplaceNode_className,52,0,0,0,0);
}
void *igOptReplaceNode_getMetaCall(){return igOptReplaceNode_getMeta();}
void *fn_8013AFE4(){return igOptTraverseGraph_meta;}
void *fn_8013AFEC(){
 if(!igOptManager_meta) igOptManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igOptManager_meta;
}
void *igOptManager_getMeta(){
 if(!igOptManager_meta || !(reinterpret_cast<unsigned int *>(igOptManager_meta)[0x24/4]&4)) igOptManager_arkRegister();
 return igOptManager_meta;
}
void *igOptManager_vtableRead(){
 UnknownGenObject8013B064 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=igManager_vtable;
 object.unknown00=igOptManager_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igOptManager_arkRegister(){
 meta_registerNow((int)igOptManager_register);
}
void igOptManager_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igOptManager_meta,(int)igManager_register,(int)fn_8013B2B0,(int)igOptManager_getMetaCall,(int)igOptManager_className,60,(int)igOptManager_vtableRead,(int)igOptManager_fieldInit,(int)fn_8013B3D8,(int)igOptManager_dependencies);
}
void *igOptManager_getMetaCall(){return igOptManager_getMeta();}
void *fn_8013B2B0(){return igManager_meta;}
}
#pragma pop

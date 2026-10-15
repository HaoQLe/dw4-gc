#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igNamedObject_register();
void igObjectList_register();
void igUnresolvedSymbol_fieldInit();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igUnresolvedSymbolList_className[];
extern char igUnresolvedSymbol_dependencies[];
extern char igUnresolvedSymbol_className[];
extern char igUnresolvedSymbol_vtable[];
extern char igUnresolvedSymbolList_vtable[];
extern char lbl_804BC8E4[];
extern char igUnresolvedSymbolList_dependencies[8];
extern void *igUnresolvedSymbolList_meta;
extern void *igUnresolvedSymbol_meta;
void *igUnresolvedSymbolList_getMeta();
void *igUnresolvedSymbolList_vtableRead();
void igUnresolvedSymbolList_arkRegister();
void igUnresolvedSymbolList_register();
void *igUnresolvedSymbolList_getMetaCall();
void *igUnresolvedSymbol_getMeta();
void *igUnresolvedSymbol_vtableRead();
void igUnresolvedSymbol_arkRegister();
void igUnresolvedSymbol_register();
void *igUnresolvedSymbol_getMetaCall();
}
struct UnknownGenObject80216EE4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8021707C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8021707C(){igObject_construct(this);}
};
struct UnknownGenObject8021707C_0 : UnknownGenRoot8021707C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8021707C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8021707C : UnknownGenObject8021707C_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[4];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8021707C(){unknown00=igUnresolvedSymbol_vtable;}
};
extern "C" {
void *igUnresolvedSymbol_create(void *object){
 igUnresolvedSymbol_arkRegister();
 return meta_createInstance(igUnresolvedSymbol_meta,object);
}
void *igUnresolvedSymbol_getMeta(){
 if(!igUnresolvedSymbol_meta || !(reinterpret_cast<unsigned int *>(igUnresolvedSymbol_meta)[0x24/4]&4)) igUnresolvedSymbol_arkRegister();
 return igUnresolvedSymbol_meta;
}
void *igUnresolvedSymbol_vtableRead(){
 UnknownGenObject8021707C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igUnresolvedSymbol_vtable;
 object.unknown0C.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igUnresolvedSymbol_arkRegister(){
 meta_registerNow((int)igUnresolvedSymbol_register);
}
void igUnresolvedSymbol_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igUnresolvedSymbol_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igUnresolvedSymbol_getMetaCall,(int)igUnresolvedSymbol_className,24,(int)igUnresolvedSymbol_vtableRead,(int)igUnresolvedSymbol_fieldInit,0,(int)igUnresolvedSymbol_dependencies);
}
void *igUnresolvedSymbol_getMetaCall(){return igUnresolvedSymbol_getMeta();}
}
#pragma pop

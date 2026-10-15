#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80030000();
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igElfFile_fieldInit();
void igObject_register();
extern char igProgramFile_className[];
extern char igElfFile_className[];
extern char igProgramFile_vtable[];
extern char igElfFile_vtable[];
extern char lbl_8055D6D0[8];
extern char lbl_8055D6D8[8];
extern char lbl_8055D6E0[8];
extern char lbl_8055D6E8[8];
extern char lbl_8055D6F0[8];
extern void *igProgramFile_meta;
extern void *igElfFile_meta;
void *igProgramFile_getMeta();
void *igProgramFile_vtableRead();
void igProgramFile_registerNow();
void igProgramFile_register();
void *igProgramFile_getMetaCall();
void igProgramFile_fieldInit();
void *igElfFile_getMeta();
void *igElfFile_vtableRead();
void igElfFile_registerNow();
void igElfFile_register();
void *igElfFile_getMetaCall();
void *igElfFile_parentMeta();
}
struct UnknownGenRoot8003A554 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003A554(){igObject_construct(this);}
};
struct UnknownGenObject8003A554 : UnknownGenRoot8003A554 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8003A554(){unknown00=igProgramFile_vtable;}
};
struct UnknownGenRoot8003A7F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003A7F8(){igObject_construct(this);}
};
struct UnknownGenObject8003A7F8_0 : UnknownGenRoot8003A7F8 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8003A7F8_0(){unknown00=igProgramFile_vtable;}
};
struct UnknownGenObject8003A7F8 : UnknownGenObject8003A7F8_0 {
 char unknown10[96];
 inline ~UnknownGenObject8003A7F8(){unknown00=igElfFile_vtable;}
};
extern "C" {
void *igProgramFile_getMeta(){
 if(!igProgramFile_meta || !(reinterpret_cast<unsigned int *>(igProgramFile_meta)[0x24/4]&4)) igProgramFile_registerNow();
 return igProgramFile_meta;
}
void *igProgramFile_vtableRead(){
 UnknownGenObject8003A554 object;
 object.unknown00=igProgramFile_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igProgramFile_registerNow(){
 meta_registerNow((int)igProgramFile_register);
}
void igProgramFile_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igProgramFile_meta,(int)igObject_register,(int)fn_800237D0,(int)igProgramFile_getMetaCall,(int)igProgramFile_className,16,(int)igProgramFile_vtableRead,(int)igProgramFile_fieldInit,0,(int)lbl_8055D6D0);
}
void *igProgramFile_getMetaCall(){return igProgramFile_getMeta();}
void igProgramFile_fieldInit(){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(igProgramFile_meta)+25)=0;
 void *value0=igProgramFile_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055D6D8,2);
 void *value2=meta_field(value0,value1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_80030000();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 meta_setupFields(value0,lbl_8055D6E0,lbl_8055D6E8,lbl_8055D6F0,value1);
}
void *igElfFile_create(void *object){
 igElfFile_registerNow();
 return meta_createInstance(igElfFile_meta,object);
}
void *igElfFile_getMeta(){
 if(!igElfFile_meta || !(reinterpret_cast<unsigned int *>(igElfFile_meta)[0x24/4]&4)) igElfFile_registerNow();
 return igElfFile_meta;
}
void *igElfFile_vtableRead(){
 UnknownGenObject8003A7F8 object;
 object.unknown00=igProgramFile_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown00=igElfFile_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igElfFile_registerNow(){
 meta_registerNow((int)igElfFile_register);
}
void igElfFile_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igElfFile_meta,(int)igProgramFile_register,(int)igElfFile_parentMeta,(int)igElfFile_getMetaCall,(int)igElfFile_className,100,(int)igElfFile_vtableRead,(int)igElfFile_fieldInit,0,0);
}
void *igElfFile_getMetaCall(){return igElfFile_getMeta();}
void *igElfFile_parentMeta(){return igProgramFile_meta;}
}
#pragma pop

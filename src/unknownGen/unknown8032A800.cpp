#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusSelect00_getMeta();
void beNDMWStatusSelect00_vtableRead();
void beNDMWWindow_register();
void *fn_80036C40();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803287A8();
void *fn_80328C10();
void beNDMWStatusInfo_arkRegister();
extern char beNDMWStatusSelect00_className[];
extern char beNDMWWindowSelect_className[];
extern char beNDMWWindowSelect_dependencies[];
extern char beNDMWWindowSelect_fieldTypes[];
extern char beNDMWWindowSelect_fieldNames[];
extern char beNDMWWindowSelect_fieldStorage[];
extern char beNDMWWindowSelect_fieldOffsets[];
extern char beNDMWStatusSelect00_meta[];
extern void *beNDMWWindowSelect_meta;
extern void *beNDMWStatusInfo_meta;
void beNDMWStatusSelect00_register();
void *beNDMWStatusSelect00_getMetaCall();
void *beNDMWWindowSelect_getMeta();
void beNDMWWindowSelect_arkRegister();
void beNDMWWindowSelect_register();
void *beNDMWWindowSelect_getMetaCall();
void beNDMWWindowSelect_fieldInit();
}
extern "C" {
void beNDMWStatusSelect00_arkRegister(){
 meta_registerNow((int)beNDMWStatusSelect00_register);
}
void beNDMWStatusSelect00_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusSelect00_meta,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWStatusSelect00_getMetaCall,(int)beNDMWStatusSelect00_className,112,(int)beNDMWStatusSelect00_vtableRead,0,0,0);
}
void *beNDMWStatusSelect00_getMetaCall(){return beNDMWStatusSelect00_getMeta();}
void *beNDMWWindowSelect_getMeta(){
 if(!beNDMWWindowSelect_meta || !(reinterpret_cast<unsigned int *>(beNDMWWindowSelect_meta)[0x24/4]&4)) beNDMWWindowSelect_arkRegister();
 return beNDMWWindowSelect_meta;
}
void beNDMWWindowSelect_arkRegister(){
 meta_registerNow((int)beNDMWWindowSelect_register);
}
void beNDMWWindowSelect_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWWindowSelect_meta,(int)beNDMWWindow_register,(int)fn_803287A8,(int)beNDMWWindowSelect_getMetaCall,(int)beNDMWWindowSelect_className,112,0,(int)beNDMWWindowSelect_fieldInit,0,(int)beNDMWWindowSelect_dependencies);
}
void *beNDMWWindowSelect_getMetaCall(){return beNDMWWindowSelect_getMeta();}
void beNDMWWindowSelect_fieldInit(){
 void *value0=beNDMWWindowSelect_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWWindowSelect_fieldTypes,6);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value3=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beNDMWWindowSelect_fieldNames,beNDMWWindowSelect_fieldStorage,beNDMWWindowSelect_fieldOffsets,value1);
}
void *beNDMWStatusInfo_getMeta(){
 if(!beNDMWStatusInfo_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusInfo_meta)[0x24/4]&4)) beNDMWStatusInfo_arkRegister();
 return beNDMWStatusInfo_meta;
}
}
#pragma pop

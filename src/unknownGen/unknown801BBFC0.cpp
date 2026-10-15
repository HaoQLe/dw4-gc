#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_80218120();
void igAnimationSequence_register();
void igInverseKinematicsSource_fieldInit();
void *igJoint_getMeta();
void igJoint_vtableRead();
void igTransform_register();
extern char igInverseKinematicsSource_className[];
extern char igInverseKinematicsSource_vtable[];
extern char lbl_804B796C[];
extern char lbl_804BA150[];
extern char igJoint_dependencies[8];
extern char lbl_805604EC[8];
extern char igJoint_fieldTypes[8];
extern char igJoint_fieldNames[8];
extern char igJoint_fieldStorage[8];
extern char igJoint_fieldOffsets[8];
extern char igInverseKinematicsSource_dependencies[8];
extern void *igTransform_meta;
extern void *igJoint_meta;
extern void *igInverseKinematicsSource_meta;
extern void *igAnimationSequence_meta;
void igJoint_register();
void *igJoint_getMetaCall();
void *fn_801BC078();
void igJoint_fieldInit();
void *igInverseKinematicsSource_getMeta();
void *igInverseKinematicsSource_vtableRead();
void igInverseKinematicsSource_arkRegister();
void igInverseKinematicsSource_register();
void *igInverseKinematicsSource_getMetaCall();
void *fn_801BC288();
}
struct UnknownGenObject801BC174_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void igJoint_arkRegister(){
 meta_registerNow((int)igJoint_register);
}
void igJoint_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igJoint_meta,(int)igTransform_register,(int)fn_801BC078,(int)igJoint_getMetaCall,(int)lbl_805604EC,176,(int)igJoint_vtableRead,(int)igJoint_fieldInit,0,(int)igJoint_dependencies);
}
void *igJoint_getMetaCall(){return igJoint_getMeta();}
void *fn_801BC078(){return igTransform_meta;}
void igJoint_fieldInit(){
 void *value0=igJoint_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igJoint_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_80218120();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,igJoint_fieldNames,igJoint_fieldStorage,igJoint_fieldOffsets,value1);
}
void *igInverseKinematicsSource_create(void *object){
 igInverseKinematicsSource_arkRegister();
 return meta_createInstance(igInverseKinematicsSource_meta,object);
}
void *igInverseKinematicsSource_getMeta(){
 if(!igInverseKinematicsSource_meta || !(reinterpret_cast<unsigned int *>(igInverseKinematicsSource_meta)[0x24/4]&4)) igInverseKinematicsSource_arkRegister();
 return igInverseKinematicsSource_meta;
}
void *igInverseKinematicsSource_vtableRead(){
 UnknownGenObject801BC174_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_804BA150;
 object.unknown00=lbl_804B796C;
 object.unknown00=igInverseKinematicsSource_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInverseKinematicsSource_arkRegister(){
 meta_registerNow((int)igInverseKinematicsSource_register);
}
void igInverseKinematicsSource_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igInverseKinematicsSource_meta,(int)igAnimationSequence_register,(int)fn_801BC288,(int)igInverseKinematicsSource_getMetaCall,(int)igInverseKinematicsSource_className,20,(int)igInverseKinematicsSource_vtableRead,(int)igInverseKinematicsSource_fieldInit,0,(int)igInverseKinematicsSource_dependencies);
}
void *igInverseKinematicsSource_getMetaCall(){return igInverseKinematicsSource_getMeta();}
void *fn_801BC288(){return igAnimationSequence_meta;}
}
#pragma pop

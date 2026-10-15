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
void *fn_801BC288(){return igAnimationSequence_meta;}
}
#pragma pop

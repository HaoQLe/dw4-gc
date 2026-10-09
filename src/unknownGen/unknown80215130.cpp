#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_8056465C;
extern void *lbl_80564668;
extern void *lbl_8056469C;
extern void *lbl_805655F4;
}
class UnknownGenV80215178_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64();
};
class UnknownGenV802151A4_1 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64();
 virtual void s68();
 virtual void s6C();
};
extern "C" {
unsigned char igGamecubeEnvironmentMapShader_virtualBC(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+132);}
void *igGamecubeEnvironmentMapShader_virtual7C(int p0){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=0;
 return (void *)p0;
}
int igGamecubeEnvironmentMapShader_virtual68(){return 0;}
void *igEndianSwappedEnbayaAnimationSource_virtual58(){return lbl_805655F4;}
void *igVertexArrayHelper_virtual58(){return lbl_8056465C;}
void *igTraversal_virtual58(){return lbl_80564668;}
void *igTraversal_virtual6C(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)p2;
 return (void *)p0;
}
void *igTransformSequence1_5_virtual58(){return lbl_8056469C;}
void igTransformSequence1_5_virtualD4(int p0){
 reinterpret_cast<UnknownGenV80215178_0 *>((void *)p0)->s64();
}
void igTransformSequence1_5_virtualD8(int p0){
 reinterpret_cast<UnknownGenV802151A4_1 *>((void *)p0)->s6C();
}
}
#pragma pop

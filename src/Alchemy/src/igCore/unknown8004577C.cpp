#include "unknown8004577C.h"
#pragma push
#pragma auto_inline off
extern "C" {
Unknown800442F8Node *fn_8004577C(Unknown800442F8Owner *object){
 Unknown800442F8Stream *value=NULL;
 Unknown800442F8Node *result=NULL;
 Unknown800442F8Node *node;
 fn_80045D08(object);
 if(!*object->unknown34) return NULL;
 if(fn_80045DC0(object,&value)){
  if(strcmp(value->unknown08.text(),lbl_80468F70)==0){
   node=reinterpret_cast<Unknown800442F8Node *>(fn_80056138(sizeof(Unknown800469E8),fn_80068430(object)));
   if(node) node=fn_800469E8(reinterpret_cast<Unknown800469E8 *>(node));
   if(fn_80045FA4(object,reinterpret_cast<Unknown800469E8 *>(node))) result=node;else delete node;
  }else{
   int i;
   int kind=-1;unsigned char found=0;
   for(i=0;i<13;++i){if(unknown8004577CCompare(value,lbl_80413508[i])==0){kind=i;found=1;break;}}
   if(found){
    node=reinterpret_cast<Unknown800442F8Node *>(fn_80056138(sizeof(Unknown80046B98),fn_80068430(object)));
    if(node) node=fn_80046B98(reinterpret_cast<Unknown80046B98 *>(node),kind);
    if(fn_80046254(object,reinterpret_cast<Unknown80046B98 *>(node))) result=node;else delete node;
   }
  }
  unknown8004577CRelease(value);
 }
 return result;
}
void fn_8004595C(Unknown800442F8Owner *object,void *entry,void *dest,void *second){
 Unknown80046B98 *node=reinterpret_cast<Unknown80046B98 *>(entry);
 if(node->unknown00==1){
  Unknown800469E8 *other=reinterpret_cast<Unknown800469E8 *>(node);
  int index=fn_80045BA8(object,other->unknown0C,dest,reinterpret_cast<int>(second));
  if(index!=-1) fn_80045AB4(object,reinterpret_cast<Unknown80042DECStorage *>(other->unknown08),dest,index);
 }else{
  const char *text;
  if(node->unknown18 && node->unknown18->unknown0C) text=fn_800447F4(object,node->unknown08,node->unknown18->unknown08.text());
  else text=fn_800442D4(object,node->unknown08);
  bool accepted;
  if(!text || strlen(text)==0) accepted=0;
  else{
   const char *value=node->unknown0C->unknown08.text();
   int kind=fn_80046474(object,node->unknown08);
   accepted=fn_800464BC(object,kind,text,node->unknown14,value);
  }
  if(accepted){for(int i=0;i<node->unknown10->unknown08;++i) fn_8004595C(object,node->unknown10->unknown10[i],dest,second);}
 }
}
void fn_80045AB4(void *owner,Unknown80042DECStorage *storage,void *dest,int index){
 Unknown800442F8Reference reference(fn_80024FB4(fn_80068430(owner)));
 for(int i=0;i<storage->unknown08;++i){
  Unknown800468E8 *entry=reinterpret_cast<Unknown800468E8 *>(storage->unknown10[i]);
  fn_8006D674(dest,index,entry->unknown00->unknown08.text(),&reference,lbl_8055D4C4,0);
  fn_8006E358(dest,index,entry->unknown00->unknown08.text(),entry->unknown04->unknown08.text());
 }
}
}
#pragma pop

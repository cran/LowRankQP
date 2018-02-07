#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* .C calls */
extern void LowRankQP(void *, void *, void *, void *,void *, void *, void *, void *,
                      void *, void *, void *, void *,void *, void *, void *);                
extern void LRQPCalcDx(void *, void *, void *, void *,void *, void *, void *, void *,
                       void *, void *, void *, void *,void *, void *, void *, void *,
                       void *, void *, void *, void *,void *, void *, void *, void *,
                       void *, void *, void *, void *,void *, void *, void *, void *,
                       void *, void *, void *, void *,void *, void *, void *, void *,
                       void *);            
extern void LRQPCalcStats(void *, void *, void *, void *,void *, void *, void *, void *,
                          void *, void *, void *, void *,void *, void *, void *, void *,
                          void *, void *, void *, void *,void *, void *, void *, void *,
                          void *, void *, void *, void *,void *, void *);          
extern void LRQPDisplay(void *, void *, void *, void *, void *, void *);            
extern void LRQPFactorize(void *, void *, void *, void *,void *, void *, void *, void *,
                          void *, void *, void *, void *, void *);            
extern void LRQPHeader();             
extern void LRQPInitPoint(void *, void *, void *, void *, void *, void *, void *, void *,
                          void *, void *, void *, void *, void *);            
extern void LRQPSolve(void *, void *, void *, void *, void *, void *, void *, void *,
                      void *, void *, void *, void *, void *, void *);              
extern void LRQPStep(void *, void *, void *, void *, void *, void *, void *, void *,
                     void *, void *, void *, void *);                  
extern void LRQPSummary(void *, void *, void *, void *, void *, void *, void *, void *,
                        void *, void *);            
extern void MatrixConstantPlusDiag(void *, void *, void *);  
extern void MatrixConstantSet(void *, void *, void *, void *);       
extern void MatrixCholFactorize(void *, void *, void *);    
extern void MatrixCholSolve(void *, void *, void *, void *, void *);       
extern void MatrixLUFactorize(void *, void *, void *, void *);       
extern void MatrixLUSolve(void *, void *, void *, void *, void *); 	       
extern void MatrixMatrixCopy(void *, void *, void *, void *);        
extern void MatrixMatrixDiagSolve(void *, void *, void *, void *, void *);   
extern void MatrixMatrixMinus(void *, void *, void *, void *, void *);       
extern void MatrixMatrixPlus(void *, void *, void *, void *, void *);        
extern void MatrixMatrixPlusDiag(void *, void *, void *);   
extern void MatrixMatrixPlusEquals(void *, void *, void *, void *); 
extern void MatrixMatrixMult(void *, void *, void *, void *,void *, void *, void *, void *, 
                             void *, void *, void *, void *,void *);
extern void MatrixVectorMult(void *, void *, void *, void *,void *, void *, void *, void *);        
extern void PfcfFactorize(void *, void *, void *, void *,void *, void *, void *, void *,void *);           
extern void PfcfSolve(void *, void *, void *, void *, void*); 	       
extern void PrintMatrix(void *, void *, void *, void *); 	       
extern void VectorAbsSum(void *, void *); 	       
extern void VectorVectorCopy(void *, void *, void *);       
extern void VectorVectorDivide(void *, void *, void *, void *);      
extern void VectorVectorDot(void *, void *, void *); 	       
extern void VectorVectorMinus(void *, void *, void *, void *);   
extern void VectorVectorMult(void *, void *, void *, void *);    

static const R_CMethodDef CEntries[] = {
    {"LowRankQP",              (DL_FUNC) &LowRankQP,	          15},
    {"LRQPCalcDx",             (DL_FUNC) &LRQPCalcDx,	       	  41},
    {"LRQPCalcStats",          (DL_FUNC) &LRQPCalcStats,	  30},     
    {"LRQPDisplay",            (DL_FUNC) &LRQPDisplay,	           6},
    {"LRQPFactorize",          (DL_FUNC) &LRQPFactorize,	  13},     
    {"LRQPHeader",             (DL_FUNC) &LRQPHeader,	           0},
    {"LRQPInitPoint",          (DL_FUNC) &LRQPInitPoint,	  13},     
    {"LRQPSolve",              (DL_FUNC) &LRQPSolve,	          14},
    {"LRQPStep",               (DL_FUNC) &LRQPStep,	          12},
    {"LRQPSummary",            (DL_FUNC) &LRQPSummary,	          10},      
    {"MatrixConstantPlusDiag", (DL_FUNC) &MatrixConstantPlusDiag,  3},
    {"MatrixConstantSet",      (DL_FUNC) &MatrixConstantSet,       4},  
    {"MatrixCholFactorize",    (DL_FUNC) &MatrixCholFactorize,     3}, 
    {"MatrixCholSolve",        (DL_FUNC) &MatrixCholSolve,	   5},    
    {"MatrixLUFactorize",      (DL_FUNC) &MatrixLUFactorize,       4},
    {"MatrixLUSolve",	       (DL_FUNC) &MatrixLUSolve,	   5},  
    {"MatrixMatrixCopy",       (DL_FUNC) &MatrixMatrixCopy,        4},
    {"MatrixMatrixDiagSolve",  (DL_FUNC) &MatrixMatrixDiagSolve,   5},
    {"MatrixMatrixMinus",      (DL_FUNC) &MatrixMatrixMinus,       5},
    {"MatrixMatrixPlus",       (DL_FUNC) &MatrixMatrixPlus,        5},
    {"MatrixMatrixPlusDiag",   (DL_FUNC) &MatrixMatrixPlusDiag,    3},
    {"MatrixMatrixPlusEquals", (DL_FUNC) &MatrixMatrixPlusEquals,  4},
    {"MatrixMatrixMult",       (DL_FUNC) &MatrixMatrixMult,       13},
    {"MatrixVectorMult",       (DL_FUNC) &MatrixVectorMult,        8},
    {"PfcfFactorize",          (DL_FUNC) &PfcfFactorize,	   9},  
    {"PfcfSolve",	       (DL_FUNC) &PfcfSolve,	       	   5},
    {"PrintMatrix",	       (DL_FUNC) &PrintMatrix,	       	   4},
    {"VectorAbsSum",	       (DL_FUNC) &VectorAbsSum,	       	   2},
    {"VectorVectorCopy",       (DL_FUNC) &VectorVectorCopy,        3},
    {"VectorVectorDivide",     (DL_FUNC) &VectorVectorDivide,      4},
    {"VectorVectorDot",	       (DL_FUNC) &VectorVectorDot,	   3},  
    {"VectorVectorMinus",      (DL_FUNC) &VectorVectorMinus,       4},
    {"VectorVectorMult",       (DL_FUNC) &VectorVectorMult,        4},
    {NULL, NULL, 0}
};

void R_init_LowRankQP(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}



 	    
     
     
     
     
     
     
 	    
 	    
     
     
 	    
     
     
 	    
     
 	    
     
 	    
 	    
     
 	    
 	    
 	    
     
 	    
     
     
 	    
     
     
 	    
       


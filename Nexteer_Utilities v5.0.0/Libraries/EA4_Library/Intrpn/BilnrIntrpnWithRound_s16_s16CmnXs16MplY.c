/*
 *   BilnrIntrpnWithRound_s16_s16CmnXs16MplY.c Simple C-MEX S-function for function call.
 *
 *   ABSTRACT:
 *     The purpose of this sfunction is to call a simple legacy
 *     function during simulation:
 *
 *         int16 y1 = BilnrIntrpnWithRound_s16_s16CmnXs16MplY(uint16 u1,  int16 u2, uint16 u3[], uint16 u4,  int16 u5[],  int16 u6[][], uint16 u7)
 *
 *   Simulink version           : 8.2 (R2013b) 08-Aug-2013
 *   C source code generated on : 06-Aug-2015 10:40:22

 * THIS S-FUNCTION IS GENERATED BY THE LEGACY CODE TOOL AND MAY NOT WORK IF MODIFIED

 */

/*
   %%%-MATLAB_Construction_Commands_Start
   def = legacy_code('initialize');
   def.SFunctionName = 'BilnrIntrpnWithRound_s16_s16CmnXs16MplY';
   def.OutputFcnSpec = ' int16 y1 = BilnrIntrpnWithRound_s16_s16CmnXs16MplY(uint16 u1,  int16 u2, uint16 u3[], uint16 u4,  int16 u5[],  int16 u6[][], uint16 u7)';
   def.HeaderFiles = {'NxtrIntrpn.h', 'NxtrIntrpn_MemMap.h', 'NxtrFixdPt.h', 'Std_Types.h', 'Platform_Types.h', 'Compiler.h', 'Compiler_Cfg.h'};
   def.SourceFiles = {'NxtrIntrpn.c'};
   def.IncPaths = {'..\..\SrcFiles', '..\..\FixdPt\CreateFixdPt\AR103A_NxtrFixdPt_Impl_v1_0_0\include\', 'AR101A_NxtrIntrpn_Impl_v1_0_1\include\'};
   def.SrcPaths = {'..\..\SrcFiles', 'AR101A_NxtrIntrpn_Impl_v1_0_1\src\'};
   legacy_code('sfcn_cmex_generate', def);
   legacy_code('compile', def);
   %%%-MATLAB_Construction_Commands_End
 */

/*
 * Must specify the S_FUNCTION_NAME as the name of the S-function.
 */
#define S_FUNCTION_NAME                BilnrIntrpnWithRound_s16_s16CmnXs16MplY
#define S_FUNCTION_LEVEL               2

/*
 * Need to include simstruc.h for the definition of the SimStruct and
 * its associated macro definitions.
 */
#include "simstruc.h"

/*
 * Specific header file(s) required by the legacy code function.
 */
#include "NxtrIntrpn.h"
#include "NxtrIntrpn_MemMap.h"
#include "NxtrFixdPt.h"
#include "Std_Types.h"
#include "Platform_Types.h"
#include "Compiler.h"
#include "Compiler_Cfg.h"

/* Function: mdlInitializeSizes ===========================================
 * Abstract:
 *    The sizes information is used by Simulink to determine the S-function
 *    block's characteristics (number of inputs, outputs, states, etc.).
 */
static void mdlInitializeSizes(SimStruct *S)
{
  /* Number of expected parameters */
  ssSetNumSFcnParams(S, 0);

  /*
   * Set the number of pworks.
   */
  ssSetNumPWork(S, 0);

  /*
   * Set the number of dworks.
   */
  if (!ssSetNumDWork(S, 0))
    return;

  /*
   * Set the number of input ports.
   */
  if (!ssSetNumInputPorts(S, 7))
    return;

  /*
   * Configure the input port 1
   */
  ssSetInputPortDataType(S, 0, SS_UINT16);
  ssSetInputPortWidth(S, 0, 1);
  ssSetInputPortComplexSignal(S, 0, COMPLEX_NO);
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetInputPortAcceptExprInRTW(S, 0, 1);
  ssSetInputPortOverWritable(S, 0, 1);
  ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
  ssSetInputPortRequiredContiguous(S, 0, 1);

  /*
   * Configure the input port 2
   */
  ssSetInputPortDataType(S, 1, SS_INT16);
  ssSetInputPortWidth(S, 1, 1);
  ssSetInputPortComplexSignal(S, 1, COMPLEX_NO);
  ssSetInputPortDirectFeedThrough(S, 1, 1);
  ssSetInputPortAcceptExprInRTW(S, 1, 1);
  ssSetInputPortOverWritable(S, 1, 1);
  ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
  ssSetInputPortRequiredContiguous(S, 1, 1);

  /*
   * Configure the input port 3
   */
  ssSetInputPortDataType(S, 2, SS_UINT16);
  ssSetInputPortWidth(S, 2, DYNAMICALLY_SIZED);
  ssSetInputPortComplexSignal(S, 2, COMPLEX_NO);
  ssSetInputPortDirectFeedThrough(S, 2, 1);
  ssSetInputPortAcceptExprInRTW(S, 2, 0);
  ssSetInputPortOverWritable(S, 2, 0);
  ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
  ssSetInputPortRequiredContiguous(S, 2, 1);

  /*
   * Configure the input port 4
   */
  ssSetInputPortDataType(S, 3, SS_UINT16);
  ssSetInputPortWidth(S, 3, 1);
  ssSetInputPortComplexSignal(S, 3, COMPLEX_NO);
  ssSetInputPortDirectFeedThrough(S, 3, 1);
  ssSetInputPortAcceptExprInRTW(S, 3, 1);
  ssSetInputPortOverWritable(S, 3, 1);
  ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
  ssSetInputPortRequiredContiguous(S, 3, 1);

  /*
   * Configure the input port 5
   */
  ssSetInputPortDataType(S, 4, SS_INT16);
  ssSetInputPortWidth(S, 4, DYNAMICALLY_SIZED);
  ssSetInputPortComplexSignal(S, 4, COMPLEX_NO);
  ssSetInputPortDirectFeedThrough(S, 4, 1);
  ssSetInputPortAcceptExprInRTW(S, 4, 0);
  ssSetInputPortOverWritable(S, 4, 0);
  ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
  ssSetInputPortRequiredContiguous(S, 4, 1);

  /*
   * Configure the input port 6
   */
  ssSetInputPortDataType(S, 5, SS_INT16);
  ssSetInputPortMatrixDimensions(S, 5, DYNAMICALLY_SIZED, DYNAMICALLY_SIZED);
  ssSetInputPortComplexSignal(S, 5, COMPLEX_NO);
  ssSetInputPortDirectFeedThrough(S, 5, 1);
  ssSetInputPortAcceptExprInRTW(S, 5, 0);
  ssSetInputPortOverWritable(S, 5, 0);
  ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
  ssSetInputPortRequiredContiguous(S, 5, 1);

  /*
   * Configure the input port 7
   */
  ssSetInputPortDataType(S, 6, SS_UINT16);
  ssSetInputPortWidth(S, 6, 1);
  ssSetInputPortComplexSignal(S, 6, COMPLEX_NO);
  ssSetInputPortDirectFeedThrough(S, 6, 1);
  ssSetInputPortAcceptExprInRTW(S, 6, 1);
  ssSetInputPortOverWritable(S, 6, 1);
  ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
  ssSetInputPortRequiredContiguous(S, 6, 1);

  /*
   * Set the number of output ports.
   */
  if (!ssSetNumOutputPorts(S, 1))
    return;

  /*
   * Configure the output port 1
   */
  ssSetOutputPortDataType(S, 0, SS_INT16);
  ssSetOutputPortWidth(S, 0, 1);
  ssSetOutputPortComplexSignal(S, 0, COMPLEX_NO);
  ssSetOutputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
  ssSetOutputPortOutputExprInRTW(S, 0, 1);

  /*
   * Register reserved identifiers to avoid name conflict
   */
  if (ssRTWGenIsCodeGen(S) || ssGetSimMode(S)==SS_SIMMODE_EXTERNAL) {
    /*
     * Register reserved identifier for OutputFcnSpec
     */
    ssRegMdlInfo(S, "BilnrIntrpnWithRound_s16_s16CmnXs16MplY",
                 MDL_INFO_ID_RESERVED, 0, 0, ssGetPath(S));
  }

  /*
   * This S-function can be used in referenced model simulating in normal mode.
   */
  ssSetModelReferenceNormalModeSupport(S, MDL_START_AND_MDL_PROCESS_PARAMS_OK);

  /*
   * Set the number of sample time.
   */
  ssSetNumSampleTimes(S, 1);

  /*
   * All options have the form SS_OPTION_<name> and are documented in
   * matlabroot/simulink/include/simstruc.h. The options should be
   * bitwise or'd together as in
   *   ssSetOptions(S, (SS_OPTION_name1 | SS_OPTION_name2))
   */
  ssSetOptions(S,
               SS_OPTION_USE_TLC_WITH_ACCELERATOR |
               SS_OPTION_CAN_BE_CALLED_CONDITIONALLY |
               SS_OPTION_EXCEPTION_FREE_CODE |
               SS_OPTION_WORKS_WITH_CODE_REUSE |
               SS_OPTION_SFUNCTION_INLINED_FOR_RTW |
               SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME);
}

/* Function: mdlInitializeSampleTimes =====================================
 * Abstract:
 *    This function is used to specify the sample time(s) for your
 *    S-function. You must register the same number of sample times as
 *    specified in ssSetNumSampleTimes.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
  ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);
  ssSetOffsetTime(S, 0, FIXED_IN_MINOR_STEP_OFFSET);

#if defined(ssSetModelReferenceSampleTimeDefaultInheritance)

  ssSetModelReferenceSampleTimeDefaultInheritance(S);

#endif

}

#define MDL_SET_INPUT_PORT_DIMENSION_INFO
#if defined(MDL_SET_INPUT_PORT_DIMENSION_INFO) && defined(MATLAB_MEX_FILE)

/* Function: mdlSetInputPortDimensionInfo =================================
 * Abstract:
 *    This method is called with the candidate dimensions for an input port
 *    with unknown dimensions. If the proposed dimensions are acceptable, the
 *    method should go ahead and set the actual port dimensions.
 *    If they are unacceptable an error should be generated via
 *    ssSetErrorStatus.
 *    Note that any other input or output ports whose dimensions are
 *    implicitly defined by virtue of knowing the dimensions of the given
 *    port can also have their dimensions set.
 *
 */
static void mdlSetInputPortDimensionInfo(SimStruct *S, int_T portIndex, const
  DimsInfo_T *dimsInfo)
{
/* /* Set input port dimension */
if(!ssSetInputPortDimensionInfo(S, portIndex, dimsInfo)) return;




}
#endif

#define MDL_SET_OUTPUT_PORT_DIMENSION_INFO
#if defined(MDL_SET_OUTPUT_PORT_DIMENSION_INFO) && defined(MATLAB_MEX_FILE)
/* Function: mdlSetOutputPortDimensionInfo ================================
 * Abstract:
 *    This method is called with the candidate dimensions for an output port
 *    with unknown dimensions. If the proposed dimensions are acceptable, the
 *    method should go ahead and set the actual port dimensions.
 *    If they are unacceptable an error should be generated via
 *    ssSetErrorStatus.
 *    Note that any other input or output ports whose dimensions are
 *    implicitly defined by virtue of knowing the dimensions of the given
 *    port can also have their dimensions set.
 *
 */
static void mdlSetOutputPortDimensionInfo(SimStruct *S, int_T portIndex, const DimsInfo_T *dimsInfo)
{
/* Set output port dimension */
if(!ssSetOutputPortDimensionInfo(S, portIndex, dimsInfo)) return;

}
#endif

#define MDL_SET_DEFAULT_PORT_DIMENSION_INFO
#if defined(MDL_SET_DEFAULT_PORT_DIMENSION_INFO) && defined(MATLAB_MEX_FILE)
/* Function: mdlSetDefaultPortDimensionInfo ===============================
 * Abstract:
 *    This method is called when there is not enough information in your
 *    model to uniquely determine the port dimensionality of signals
 *    entering or leaving your block. When this occurs, Simulink's
 *    dimension propagation engine calls this method to ask you to set
 *    your S-functions default dimensions for any input and output ports
 *    that are dynamically sized.
 *
 *    If you do not provide this method and you have dynamically sized ports
 *    where Simulink does not have enough information to propagate the
 *    dimensionality to your S-function, then Simulink will set these unknown
 *    ports to the 'block width' which is determined by examining any known
 *    ports. If there are no known ports, the width will be set to 1.
 *
 */
static void mdlSetDefaultPortDimensionInfo(SimStruct *S)
{
/* Set input port 3 default dimension */
  if (ssGetInputPortWidth(S, 2) == DYNAMICALLY_SIZED) {
ssSetInputPortWidth(S, 2, 1);
  }

/* Set input port 5 default dimension */
  if (ssGetInputPortWidth(S, 4) == DYNAMICALLY_SIZED) {
ssSetInputPortWidth(S, 4, 1);
  }

/* Set input port 6 default dimension */
  if (ssGetInputPortWidth(S, 5) == DYNAMICALLY_SIZED) {
if(!ssSetInputPortMatrixDimensions(S, 5, 1, 1)) return;
  }

}
#endif

/* Function: mdlOutputs ===================================================
 * Abstract:
 *    In this function, you compute the outputs of your S-function
 *    block. Generally outputs are placed in the output vector(s),
 *    ssGetOutputPortSignal.
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
/*
 * Get access to Parameter/Input/Output/DWork/size information
 */
  uint16_T *u1 = (uint16_T *) ssGetInputPortSignal(S, 0);
  int16_T *u2 = (int16_T *) ssGetInputPortSignal(S, 1);
  uint16_T *u3 = (uint16_T *) ssGetInputPortSignal(S, 2);
  uint16_T *u4 = (uint16_T *) ssGetInputPortSignal(S, 3);
  int16_T *u5 = (int16_T *) ssGetInputPortSignal(S, 4);
  int16_T *u6 = (int16_T *) ssGetInputPortSignal(S, 5);
  uint16_T *u7 = (uint16_T *) ssGetInputPortSignal(S, 6);
  int16_T *y1 = (int16_T *) ssGetOutputPortSignal(S, 0);

/*
 * Call the legacy code function
 */
*y1 = BilnrIntrpnWithRound_s16_s16CmnXs16MplY( *u1, *u2, u3, *u4, u5, u6, *u7);
}

/* Function: mdlTerminate =================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.
 */
static void mdlTerminate(SimStruct *S)
{
}


/*
 * Required S-function trailer
 */
#ifdef    MATLAB_MEX_FILE
# include "simulink.c"
#else
# include "cg_sfun.h"
#endif

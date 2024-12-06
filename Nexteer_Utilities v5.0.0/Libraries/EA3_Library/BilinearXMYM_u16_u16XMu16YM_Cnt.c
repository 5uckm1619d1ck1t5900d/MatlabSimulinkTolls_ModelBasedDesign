/*
 *   BilinearXMYM_u16_u16XMu16YM_Cnt.c Simple C-MEX S-function for function call.
 *
 *   ABSTRACT:
 *     The purpose of this sfunction is to call a simple legacy
 *     function during simulation:
 *
 *        uint16 y1 = BilinearXMYM_u16_u16XMu16YM_Cnt(uint16 u1, uint16 u2, uint16 p1[], uint16 size(p1,1), uint16 p2[][], uint16 p3[][], uint16 size(p3,1))
 *
 *   Simulink version           : 8.2 (R2013b) 08-Aug-2013
 *   C source code generated on : 21-May-2014 13:23:57

 * THIS S-FUNCTION IS GENERATED BY THE LEGACY CODE TOOL AND MAY NOT WORK IF MODIFIED

 */

/*
   %%%-MATLAB_Construction_Commands_Start
   def = legacy_code('initialize');
   def.SFunctionName = 'BilinearXMYM_u16_u16XMu16YM_Cnt';
   def.OutputFcnSpec = 'uint16 y1 = BilinearXMYM_u16_u16XMu16YM_Cnt(uint16 u1, uint16 u2, uint16 p1[], uint16 size(p1,1), uint16 p2[][], uint16 p3[][], uint16 size(p3,1))';
   def.HeaderFiles = {'GlobalMacro.h'};
   def.SourceFiles = {'interpolation.c'};
   legacy_code('sfcn_cmex_generate', def);
   legacy_code('compile', def);
   %%%-MATLAB_Construction_Commands_End
 */

/*
 * Must specify the S_FUNCTION_NAME as the name of the S-function.
 */
#define S_FUNCTION_NAME                BilinearXMYM_u16_u16XMu16YM_Cnt
#define S_FUNCTION_LEVEL               2

/*
 * Need to include simstruc.h for the definition of the SimStruct and
 * its associated macro definitions.
 */
#include "simstruc.h"

/*
 * Specific header file(s) required by the legacy code function.
 */
#include "GlobalMacro.h"
#define EDIT_OK(S, P_IDX) \
 (!((ssGetSimMode(S)==SS_SIMMODE_SIZES_CALL_ONLY) && mxIsEmpty(ssGetSFcnParam(S, P_IDX))))
#define MDL_CHECK_PARAMETERS
#if defined(MDL_CHECK_PARAMETERS) && defined(MATLAB_MEX_FILE)

/* Function: mdlCheckParameters ===========================================
 * Abstract:
 *    mdlCheckParameters verifies new parameter settings whenever parameter
 *    change or are re-evaluated during a simulation. When a simulation is
 *    running, changes to S-function parameters can occur at any time during
 *    the simulation loop.
 */
static void mdlCheckParameters(SimStruct *S)
{
  /*
   * Check the parameter 1
   */
  if EDIT_OK(S, 0) {
    int_T *dimsArray = (int_T *) mxGetDimensions(ssGetSFcnParam(S, 0));

    /* Parameter 1 must be a vector */
    if ((dimsArray[0] > 1) && (dimsArray[1] > 1)) {
      ssSetErrorStatus(S,"Parameter 1 must be a vector");
      return;
    }

    /* Check the parameter attributes */
    ssCheckSFcnParamValueAttribs(S, 0, "P1", DYNAMICALLY_TYPED, 2, dimsArray, 0);
  }

  /*
   * Check the parameter 2
   */
  if EDIT_OK(S, 1) {
    int_T *dimsArray = (int_T *) mxGetDimensions(ssGetSFcnParam(S, 1));
    if (mxGetNumberOfDimensions(ssGetSFcnParam(S, 1)) < 2) {
      ssSetErrorStatus(S,"Parameter 2 must have 2 dimensions");
      return;
    }

    /* Check the parameter attributes */
    ssCheckSFcnParamValueAttribs(S, 1, "P2", DYNAMICALLY_TYPED, 2, dimsArray, 0);
  }

  /*
   * Check the parameter 3
   */
  if EDIT_OK(S, 2) {
    int_T *dimsArray = (int_T *) mxGetDimensions(ssGetSFcnParam(S, 2));
    if (mxGetNumberOfDimensions(ssGetSFcnParam(S, 2)) < 2) {
      ssSetErrorStatus(S,"Parameter 3 must have 2 dimensions");
      return;
    }

    /* Check the parameter attributes */
    ssCheckSFcnParamValueAttribs(S, 2, "P3", DYNAMICALLY_TYPED, 2, dimsArray, 0);
  }
}

#endif

/* Function: mdlInitializeSizes ===========================================
 * Abstract:
 *    The sizes information is used by Simulink to determine the S-function
 *    block's characteristics (number of inputs, outputs, states, etc.).
 */
static void mdlInitializeSizes(SimStruct *S)
{
  /* Number of expected parameters */
  ssSetNumSFcnParams(S, 3);

#if defined(MATLAB_MEX_FILE)

  if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {
    /*
     * If the number of expected input parameters is not equal
     * to the number of parameters entered in the dialog box return.
     * Simulink will generate an error indicating that there is a
     * parameter mismatch.
     */
    mdlCheckParameters(S);
    if (ssGetErrorStatus(S) != NULL) {
      return;
    }
  } else {
    /* Return if number of expected != number of actual parameters */
    return;
  }

#endif

  /* Set the parameter's tunability */
  ssSetSFcnParamTunable(S, 0, 1);
  ssSetSFcnParamTunable(S, 1, 1);
  ssSetSFcnParamTunable(S, 2, 1);

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
  if (!ssSetNumInputPorts(S, 2))
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
  ssSetInputPortDataType(S, 1, SS_UINT16);
  ssSetInputPortWidth(S, 1, 1);
  ssSetInputPortComplexSignal(S, 1, COMPLEX_NO);
  ssSetInputPortDirectFeedThrough(S, 1, 1);
  ssSetInputPortAcceptExprInRTW(S, 1, 1);
  ssSetInputPortOverWritable(S, 1, 1);
  ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
  ssSetInputPortRequiredContiguous(S, 1, 1);

  /*
   * Set the number of output ports.
   */
  if (!ssSetNumOutputPorts(S, 1))
    return;

  /*
   * Configure the output port 1
   */
  ssSetOutputPortDataType(S, 0, SS_UINT16);
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
    ssRegMdlInfo(S, "BilinearXMYM_u16_u16XMu16YM_Cnt", MDL_INFO_ID_RESERVED, 0,
                 0, ssGetPath(S));
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

#define MDL_SET_WORK_WIDTHS
#if defined(MDL_SET_WORK_WIDTHS) && defined(MATLAB_MEX_FILE)

/* Function: mdlSetWorkWidths =============================================
 * Abstract:
 *      The optional method, mdlSetWorkWidths is called after input port
 *      width, output port width, and sample times of the S-function have
 *      been determined to set any state and work vector sizes which are
 *      a function of the input, output, and/or sample times.
 *
 *      Run-time parameters are registered in this method using methods
 *      ssSetNumRunTimeParams, ssSetRunTimeParamInfo, and related methods.
 */
static void mdlSetWorkWidths(SimStruct *S)
{
  /* Set number of run-time parameters */
  if (!ssSetNumRunTimeParams(S, 3))
    return;

  /*
   * Register the run-time parameter 1
   */
  ssRegDlgParamAsRunTimeParam(S, 0, 0, "p1", ssGetDataTypeId(S, "uint16"));

  /*
   * Register the run-time parameter 2
   */
  ssRegDlgParamAsRunTimeParam(S, 1, 1, "p2", ssGetDataTypeId(S, "uint16"));

  /*
   * Register the run-time parameter 3
   */
  ssRegDlgParamAsRunTimeParam(S, 2, 2, "p3", ssGetDataTypeId(S, "uint16"));
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
  uint16_T *p1 = (uint16_T *) ssGetRunTimeParamInfo(S, 0)->data;
  uint16_T *p2 = (uint16_T *) ssGetRunTimeParamInfo(S, 1)->data;
  uint16_T *p3 = (uint16_T *) ssGetRunTimeParamInfo(S, 2)->data;
  uint16_T *u1 = (uint16_T *) ssGetInputPortSignal(S, 0);
  uint16_T *u2 = (uint16_T *) ssGetInputPortSignal(S, 1);
  uint16_T p1_dim1 = (uint16_T) mxGetNumberOfElements(ssGetSFcnParam(S, 0));
  uint16_T p3_dim1 = (uint16_T) mxGetDimensions(ssGetSFcnParam(S, 2))[0];
  uint16_T *y1 = (uint16_T *) ssGetOutputPortSignal(S, 0);

  /*
   * Call the legacy code function
   */
  *y1 = BilinearXMYM_u16_u16XMu16YM_Cnt( *u1, *u2, p1, p1_dim1, p2, p3, p3_dim1);
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
#ifdef MATLAB_MEX_FILE
# include "simulink.c"
#else
# include "cg_sfun.h"
#endif

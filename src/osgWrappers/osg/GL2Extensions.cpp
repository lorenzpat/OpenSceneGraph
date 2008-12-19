// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/GL2Extensions>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::GL2Extensions)
	I_DeclaringFile("osg/GL2Extensions");
	I_BaseType(osg::Referenced);
	I_Constructor1(IN, unsigned int, contextID,
	               Properties::NON_EXPLICIT,
	               ____GL2Extensions__unsigned_int,
	               "",
	               "");
	I_Constructor1(IN, const osg::GL2Extensions &, rhs,
	               Properties::NON_EXPLICIT,
	               ____GL2Extensions__C5_GL2Extensions_R1,
	               "",
	               "");
	I_Method1(void, lowestCommonDenominator, IN, const osg::GL2Extensions &, rhs,
	          Properties::NON_VIRTUAL,
	          __void__lowestCommonDenominator__C5_GL2Extensions_R1,
	          "",
	          "");
	I_Method1(void, setupGL2Extensions, IN, unsigned int, contextID,
	          Properties::NON_VIRTUAL,
	          __void__setupGL2Extensions__unsigned_int,
	          "",
	          "");
	I_Method0(bool, isGlslSupported,
	          Properties::NON_VIRTUAL,
	          __bool__isGlslSupported,
	          "Does the GL driver support OpenGL Shading Language? ",
	          "");
	I_Method0(float, getGlVersion,
	          Properties::NON_VIRTUAL,
	          __float__getGlVersion,
	          "",
	          "");
	I_Method0(float, getLanguageVersion,
	          Properties::NON_VIRTUAL,
	          __float__getLanguageVersion,
	          "",
	          "");
	I_Method1(void, setShaderObjectsSupported, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setShaderObjectsSupported__bool,
	          "",
	          "");
	I_Method0(bool, isShaderObjectsSupported,
	          Properties::NON_VIRTUAL,
	          __bool__isShaderObjectsSupported,
	          "",
	          "");
	I_Method1(void, setVertexShaderSupported, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setVertexShaderSupported__bool,
	          "",
	          "");
	I_Method0(bool, isVertexShaderSupported,
	          Properties::NON_VIRTUAL,
	          __bool__isVertexShaderSupported,
	          "",
	          "");
	I_Method1(void, setFragmentShaderSupported, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setFragmentShaderSupported__bool,
	          "",
	          "");
	I_Method0(bool, isFragmentShaderSupported,
	          Properties::NON_VIRTUAL,
	          __bool__isFragmentShaderSupported,
	          "",
	          "");
	I_Method1(void, setLanguage100Supported, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setLanguage100Supported__bool,
	          "",
	          "");
	I_Method0(bool, isLanguage100Supported,
	          Properties::NON_VIRTUAL,
	          __bool__isLanguage100Supported,
	          "",
	          "");
	I_Method1(void, setGeometryShader4Supported, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setGeometryShader4Supported__bool,
	          "",
	          "");
	I_Method0(bool, isGeometryShader4Supported,
	          Properties::NON_VIRTUAL,
	          __bool__isGeometryShader4Supported,
	          "",
	          "");
	I_Method1(void, setGpuShader4Supported, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setGpuShader4Supported__bool,
	          "",
	          "");
	I_Method0(bool, isGpuShader4Supported,
	          Properties::NON_VIRTUAL,
	          __bool__isGpuShader4Supported,
	          "",
	          "");
	I_Method2(void, glBlendEquationSeparate, IN, GLenum, modeRGB, IN, GLenum, modeAlpha,
	          Properties::NON_VIRTUAL,
	          __void__glBlendEquationSeparate__GLenum__GLenum,
	          "",
	          "");
	I_Method2(void, glDrawBuffers, IN, GLsizei, n, IN, const GLenum *, bufs,
	          Properties::NON_VIRTUAL,
	          __void__glDrawBuffers__GLsizei__C5_GLenum_P1,
	          "",
	          "");
	I_Method4(void, glStencilOpSeparate, IN, GLenum, face, IN, GLenum, sfail, IN, GLenum, dpfail, IN, GLenum, dppass,
	          Properties::NON_VIRTUAL,
	          __void__glStencilOpSeparate__GLenum__GLenum__GLenum__GLenum,
	          "",
	          "");
	I_Method4(void, glStencilFuncSeparate, IN, GLenum, frontfunc, IN, GLenum, backfunc, IN, GLint, ref, IN, GLuint, mask,
	          Properties::NON_VIRTUAL,
	          __void__glStencilFuncSeparate__GLenum__GLenum__GLint__GLuint,
	          "",
	          "");
	I_Method2(void, glStencilMaskSeparate, IN, GLenum, face, IN, GLuint, mask,
	          Properties::NON_VIRTUAL,
	          __void__glStencilMaskSeparate__GLenum__GLuint,
	          "",
	          "");
	I_Method2(void, glAttachShader, IN, GLuint, program, IN, GLuint, shader,
	          Properties::NON_VIRTUAL,
	          __void__glAttachShader__GLuint__GLuint,
	          "",
	          "");
	I_Method3(void, glBindAttribLocation, IN, GLuint, program, IN, GLuint, index, IN, const GLchar *, name,
	          Properties::NON_VIRTUAL,
	          __void__glBindAttribLocation__GLuint__GLuint__C5_GLchar_P1,
	          "",
	          "");
	I_Method1(void, glCompileShader, IN, GLuint, shader,
	          Properties::NON_VIRTUAL,
	          __void__glCompileShader__GLuint,
	          "",
	          "");
	I_Method0(GLuint, glCreateProgram,
	          Properties::NON_VIRTUAL,
	          __GLuint__glCreateProgram,
	          "",
	          "");
	I_Method1(GLuint, glCreateShader, IN, GLenum, type,
	          Properties::NON_VIRTUAL,
	          __GLuint__glCreateShader__GLenum,
	          "",
	          "");
	I_Method1(void, glDeleteProgram, IN, GLuint, program,
	          Properties::NON_VIRTUAL,
	          __void__glDeleteProgram__GLuint,
	          "",
	          "");
	I_Method1(void, glDeleteShader, IN, GLuint, shader,
	          Properties::NON_VIRTUAL,
	          __void__glDeleteShader__GLuint,
	          "",
	          "");
	I_Method2(void, glDetachShader, IN, GLuint, program, IN, GLuint, shader,
	          Properties::NON_VIRTUAL,
	          __void__glDetachShader__GLuint__GLuint,
	          "",
	          "");
	I_Method1(void, glDisableVertexAttribArray, IN, GLuint, index,
	          Properties::NON_VIRTUAL,
	          __void__glDisableVertexAttribArray__GLuint,
	          "",
	          "");
	I_Method1(void, glEnableVertexAttribArray, IN, GLuint, index,
	          Properties::NON_VIRTUAL,
	          __void__glEnableVertexAttribArray__GLuint,
	          "",
	          "");
	I_Method7(void, glGetActiveAttrib, IN, GLuint, program, IN, GLuint, index, IN, GLsizei, bufSize, IN, GLsizei *, length, IN, GLint *, size, IN, GLenum *, type, IN, GLchar *, name,
	          Properties::NON_VIRTUAL,
	          __void__glGetActiveAttrib__GLuint__GLuint__GLsizei__GLsizei_P1__GLint_P1__GLenum_P1__GLchar_P1,
	          "",
	          "");
	I_Method7(void, glGetActiveUniform, IN, GLuint, program, IN, GLuint, index, IN, GLsizei, bufSize, IN, GLsizei *, length, IN, GLint *, size, IN, GLenum *, type, IN, GLchar *, name,
	          Properties::NON_VIRTUAL,
	          __void__glGetActiveUniform__GLuint__GLuint__GLsizei__GLsizei_P1__GLint_P1__GLenum_P1__GLchar_P1,
	          "",
	          "");
	I_Method4(void, glGetAttachedShaders, IN, GLuint, program, IN, GLsizei, maxCount, IN, GLsizei *, count, IN, GLuint *, obj,
	          Properties::NON_VIRTUAL,
	          __void__glGetAttachedShaders__GLuint__GLsizei__GLsizei_P1__GLuint_P1,
	          "",
	          "");
	I_Method2(GLint, glGetAttribLocation, IN, GLuint, program, IN, const GLchar *, name,
	          Properties::NON_VIRTUAL,
	          __GLint__glGetAttribLocation__GLuint__C5_GLchar_P1,
	          "",
	          "");
	I_Method3(void, glGetProgramiv, IN, GLuint, program, IN, GLenum, pname, IN, GLint *, params,
	          Properties::NON_VIRTUAL,
	          __void__glGetProgramiv__GLuint__GLenum__GLint_P1,
	          "",
	          "");
	I_Method4(void, glGetProgramInfoLog, IN, GLuint, program, IN, GLsizei, bufSize, IN, GLsizei *, length, IN, GLchar *, infoLog,
	          Properties::NON_VIRTUAL,
	          __void__glGetProgramInfoLog__GLuint__GLsizei__GLsizei_P1__GLchar_P1,
	          "",
	          "");
	I_Method3(void, glGetShaderiv, IN, GLuint, shader, IN, GLenum, pname, IN, GLint *, params,
	          Properties::NON_VIRTUAL,
	          __void__glGetShaderiv__GLuint__GLenum__GLint_P1,
	          "",
	          "");
	I_Method4(void, glGetShaderInfoLog, IN, GLuint, shader, IN, GLsizei, bufSize, IN, GLsizei *, length, IN, GLchar *, infoLog,
	          Properties::NON_VIRTUAL,
	          __void__glGetShaderInfoLog__GLuint__GLsizei__GLsizei_P1__GLchar_P1,
	          "",
	          "");
	I_Method4(void, glGetShaderSource, IN, GLuint, shader, IN, GLsizei, bufSize, IN, GLsizei *, length, IN, GLchar *, source,
	          Properties::NON_VIRTUAL,
	          __void__glGetShaderSource__GLuint__GLsizei__GLsizei_P1__GLchar_P1,
	          "",
	          "");
	I_Method2(GLint, glGetUniformLocation, IN, GLuint, program, IN, const GLchar *, name,
	          Properties::NON_VIRTUAL,
	          __GLint__glGetUniformLocation__GLuint__C5_GLchar_P1,
	          "",
	          "");
	I_Method3(void, glGetUniformfv, IN, GLuint, program, IN, GLint, location, IN, GLfloat *, params,
	          Properties::NON_VIRTUAL,
	          __void__glGetUniformfv__GLuint__GLint__GLfloat_P1,
	          "",
	          "");
	I_Method3(void, glGetUniformiv, IN, GLuint, program, IN, GLint, location, IN, GLint *, params,
	          Properties::NON_VIRTUAL,
	          __void__glGetUniformiv__GLuint__GLint__GLint_P1,
	          "",
	          "");
	I_Method3(void, glGetVertexAttribdv, IN, GLuint, index, IN, GLenum, pname, IN, GLdouble *, params,
	          Properties::NON_VIRTUAL,
	          __void__glGetVertexAttribdv__GLuint__GLenum__GLdouble_P1,
	          "",
	          "");
	I_Method3(void, glGetVertexAttribfv, IN, GLuint, index, IN, GLenum, pname, IN, GLfloat *, params,
	          Properties::NON_VIRTUAL,
	          __void__glGetVertexAttribfv__GLuint__GLenum__GLfloat_P1,
	          "",
	          "");
	I_Method3(void, glGetVertexAttribiv, IN, GLuint, index, IN, GLenum, pname, IN, GLint *, params,
	          Properties::NON_VIRTUAL,
	          __void__glGetVertexAttribiv__GLuint__GLenum__GLint_P1,
	          "",
	          "");
	I_Method3(void, glGetVertexAttribPointerv, IN, GLuint, index, IN, GLenum, pname, IN, GLvoid **, pointer,
	          Properties::NON_VIRTUAL,
	          __void__glGetVertexAttribPointerv__GLuint__GLenum__GLvoid_P1P1,
	          "",
	          "");
	I_Method1(GLboolean, glIsProgram, IN, GLuint, program,
	          Properties::NON_VIRTUAL,
	          __GLboolean__glIsProgram__GLuint,
	          "",
	          "");
	I_Method1(GLboolean, glIsShader, IN, GLuint, shader,
	          Properties::NON_VIRTUAL,
	          __GLboolean__glIsShader__GLuint,
	          "",
	          "");
	I_Method1(void, glLinkProgram, IN, GLuint, program,
	          Properties::NON_VIRTUAL,
	          __void__glLinkProgram__GLuint,
	          "",
	          "");
	I_Method4(void, glShaderSource, IN, GLuint, shader, IN, GLsizei, count, IN, const GLchar **, string, IN, const GLint *, length,
	          Properties::NON_VIRTUAL,
	          __void__glShaderSource__GLuint__GLsizei__C5_GLchar_P1P1__C5_GLint_P1,
	          "",
	          "");
	I_Method1(void, glUseProgram, IN, GLuint, program,
	          Properties::NON_VIRTUAL,
	          __void__glUseProgram__GLuint,
	          "",
	          "");
	I_Method2(void, glUniform1f, IN, GLint, location, IN, GLfloat, v0,
	          Properties::NON_VIRTUAL,
	          __void__glUniform1f__GLint__GLfloat,
	          "",
	          "");
	I_Method3(void, glUniform2f, IN, GLint, location, IN, GLfloat, v0, IN, GLfloat, v1,
	          Properties::NON_VIRTUAL,
	          __void__glUniform2f__GLint__GLfloat__GLfloat,
	          "",
	          "");
	I_Method4(void, glUniform3f, IN, GLint, location, IN, GLfloat, v0, IN, GLfloat, v1, IN, GLfloat, v2,
	          Properties::NON_VIRTUAL,
	          __void__glUniform3f__GLint__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method5(void, glUniform4f, IN, GLint, location, IN, GLfloat, v0, IN, GLfloat, v1, IN, GLfloat, v2, IN, GLfloat, v3,
	          Properties::NON_VIRTUAL,
	          __void__glUniform4f__GLint__GLfloat__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method2(void, glUniform1i, IN, GLint, location, IN, GLint, v0,
	          Properties::NON_VIRTUAL,
	          __void__glUniform1i__GLint__GLint,
	          "",
	          "");
	I_Method3(void, glUniform2i, IN, GLint, location, IN, GLint, v0, IN, GLint, v1,
	          Properties::NON_VIRTUAL,
	          __void__glUniform2i__GLint__GLint__GLint,
	          "",
	          "");
	I_Method4(void, glUniform3i, IN, GLint, location, IN, GLint, v0, IN, GLint, v1, IN, GLint, v2,
	          Properties::NON_VIRTUAL,
	          __void__glUniform3i__GLint__GLint__GLint__GLint,
	          "",
	          "");
	I_Method5(void, glUniform4i, IN, GLint, location, IN, GLint, v0, IN, GLint, v1, IN, GLint, v2, IN, GLint, v3,
	          Properties::NON_VIRTUAL,
	          __void__glUniform4i__GLint__GLint__GLint__GLint__GLint,
	          "",
	          "");
	I_Method3(void, glUniform1fv, IN, GLint, location, IN, GLsizei, count, IN, const GLfloat *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniform1fv__GLint__GLsizei__C5_GLfloat_P1,
	          "",
	          "");
	I_Method3(void, glUniform2fv, IN, GLint, location, IN, GLsizei, count, IN, const GLfloat *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniform2fv__GLint__GLsizei__C5_GLfloat_P1,
	          "",
	          "");
	I_Method3(void, glUniform3fv, IN, GLint, location, IN, GLsizei, count, IN, const GLfloat *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniform3fv__GLint__GLsizei__C5_GLfloat_P1,
	          "",
	          "");
	I_Method3(void, glUniform4fv, IN, GLint, location, IN, GLsizei, count, IN, const GLfloat *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniform4fv__GLint__GLsizei__C5_GLfloat_P1,
	          "",
	          "");
	I_Method3(void, glUniform1iv, IN, GLint, location, IN, GLsizei, count, IN, const GLint *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniform1iv__GLint__GLsizei__C5_GLint_P1,
	          "",
	          "");
	I_Method3(void, glUniform2iv, IN, GLint, location, IN, GLsizei, count, IN, const GLint *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniform2iv__GLint__GLsizei__C5_GLint_P1,
	          "",
	          "");
	I_Method3(void, glUniform3iv, IN, GLint, location, IN, GLsizei, count, IN, const GLint *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniform3iv__GLint__GLsizei__C5_GLint_P1,
	          "",
	          "");
	I_Method3(void, glUniform4iv, IN, GLint, location, IN, GLsizei, count, IN, const GLint *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniform4iv__GLint__GLsizei__C5_GLint_P1,
	          "",
	          "");
	I_Method4(void, glUniformMatrix2fv, IN, GLint, location, IN, GLsizei, count, IN, GLboolean, transpose, IN, const GLfloat *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniformMatrix2fv__GLint__GLsizei__GLboolean__C5_GLfloat_P1,
	          "",
	          "");
	I_Method4(void, glUniformMatrix3fv, IN, GLint, location, IN, GLsizei, count, IN, GLboolean, transpose, IN, const GLfloat *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniformMatrix3fv__GLint__GLsizei__GLboolean__C5_GLfloat_P1,
	          "",
	          "");
	I_Method4(void, glUniformMatrix4fv, IN, GLint, location, IN, GLsizei, count, IN, GLboolean, transpose, IN, const GLfloat *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniformMatrix4fv__GLint__GLsizei__GLboolean__C5_GLfloat_P1,
	          "",
	          "");
	I_Method1(void, glValidateProgram, IN, GLuint, program,
	          Properties::NON_VIRTUAL,
	          __void__glValidateProgram__GLuint,
	          "",
	          "");
	I_Method2(void, glVertexAttrib1d, IN, GLuint, index, IN, GLdouble, x,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib1d__GLuint__GLdouble,
	          "",
	          "");
	I_Method2(void, glVertexAttrib1dv, IN, GLuint, index, IN, const GLdouble *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib1dv__GLuint__C5_GLdouble_P1,
	          "",
	          "");
	I_Method2(void, glVertexAttrib1f, IN, GLuint, index, IN, GLfloat, x,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib1f__GLuint__GLfloat,
	          "",
	          "");
	I_Method2(void, glVertexAttrib1fv, IN, GLuint, index, IN, const GLfloat *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib1fv__GLuint__C5_GLfloat_P1,
	          "",
	          "");
	I_Method2(void, glVertexAttrib1s, IN, GLuint, index, IN, GLshort, x,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib1s__GLuint__GLshort,
	          "",
	          "");
	I_Method2(void, glVertexAttrib1sv, IN, GLuint, index, IN, const GLshort *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib1sv__GLuint__C5_GLshort_P1,
	          "",
	          "");
	I_Method3(void, glVertexAttrib2d, IN, GLuint, index, IN, GLdouble, x, IN, GLdouble, y,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib2d__GLuint__GLdouble__GLdouble,
	          "",
	          "");
	I_Method2(void, glVertexAttrib2dv, IN, GLuint, index, IN, const GLdouble *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib2dv__GLuint__C5_GLdouble_P1,
	          "",
	          "");
	I_Method3(void, glVertexAttrib2f, IN, GLuint, index, IN, GLfloat, x, IN, GLfloat, y,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib2f__GLuint__GLfloat__GLfloat,
	          "",
	          "");
	I_Method2(void, glVertexAttrib2fv, IN, GLuint, index, IN, const GLfloat *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib2fv__GLuint__C5_GLfloat_P1,
	          "",
	          "");
	I_Method3(void, glVertexAttrib2s, IN, GLuint, index, IN, GLshort, x, IN, GLshort, y,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib2s__GLuint__GLshort__GLshort,
	          "",
	          "");
	I_Method2(void, glVertexAttrib2sv, IN, GLuint, index, IN, const GLshort *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib2sv__GLuint__C5_GLshort_P1,
	          "",
	          "");
	I_Method4(void, glVertexAttrib3d, IN, GLuint, index, IN, GLdouble, x, IN, GLdouble, y, IN, GLdouble, z,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib3d__GLuint__GLdouble__GLdouble__GLdouble,
	          "",
	          "");
	I_Method2(void, glVertexAttrib3dv, IN, GLuint, index, IN, const GLdouble *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib3dv__GLuint__C5_GLdouble_P1,
	          "",
	          "");
	I_Method4(void, glVertexAttrib3f, IN, GLuint, index, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib3f__GLuint__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method2(void, glVertexAttrib3fv, IN, GLuint, index, IN, const GLfloat *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib3fv__GLuint__C5_GLfloat_P1,
	          "",
	          "");
	I_Method4(void, glVertexAttrib3s, IN, GLuint, index, IN, GLshort, x, IN, GLshort, y, IN, GLshort, z,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib3s__GLuint__GLshort__GLshort__GLshort,
	          "",
	          "");
	I_Method2(void, glVertexAttrib3sv, IN, GLuint, index, IN, const GLshort *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib3sv__GLuint__C5_GLshort_P1,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4Nbv, IN, GLuint, index, IN, const GLbyte *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4Nbv__GLuint__C5_GLbyte_P1,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4Niv, IN, GLuint, index, IN, const GLint *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4Niv__GLuint__C5_GLint_P1,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4Nsv, IN, GLuint, index, IN, const GLshort *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4Nsv__GLuint__C5_GLshort_P1,
	          "",
	          "");
	I_Method5(void, glVertexAttrib4Nub, IN, GLuint, index, IN, GLubyte, x, IN, GLubyte, y, IN, GLubyte, z, IN, GLubyte, w,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4Nub__GLuint__GLubyte__GLubyte__GLubyte__GLubyte,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4Nubv, IN, GLuint, index, IN, const GLubyte *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4Nubv__GLuint__C5_GLubyte_P1,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4Nuiv, IN, GLuint, index, IN, const GLuint *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4Nuiv__GLuint__C5_GLuint_P1,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4Nusv, IN, GLuint, index, IN, const GLushort *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4Nusv__GLuint__C5_GLushort_P1,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4bv, IN, GLuint, index, IN, const GLbyte *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4bv__GLuint__C5_GLbyte_P1,
	          "",
	          "");
	I_Method5(void, glVertexAttrib4d, IN, GLuint, index, IN, GLdouble, x, IN, GLdouble, y, IN, GLdouble, z, IN, GLdouble, w,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4d__GLuint__GLdouble__GLdouble__GLdouble__GLdouble,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4dv, IN, GLuint, index, IN, const GLdouble *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4dv__GLuint__C5_GLdouble_P1,
	          "",
	          "");
	I_Method5(void, glVertexAttrib4f, IN, GLuint, index, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z, IN, GLfloat, w,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4f__GLuint__GLfloat__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4fv, IN, GLuint, index, IN, const GLfloat *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4fv__GLuint__C5_GLfloat_P1,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4iv, IN, GLuint, index, IN, const GLint *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4iv__GLuint__C5_GLint_P1,
	          "",
	          "");
	I_Method5(void, glVertexAttrib4s, IN, GLuint, index, IN, GLshort, x, IN, GLshort, y, IN, GLshort, z, IN, GLshort, w,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4s__GLuint__GLshort__GLshort__GLshort__GLshort,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4sv, IN, GLuint, index, IN, const GLshort *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4sv__GLuint__C5_GLshort_P1,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4ubv, IN, GLuint, index, IN, const GLubyte *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4ubv__GLuint__C5_GLubyte_P1,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4uiv, IN, GLuint, index, IN, const GLuint *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4uiv__GLuint__C5_GLuint_P1,
	          "",
	          "");
	I_Method2(void, glVertexAttrib4usv, IN, GLuint, index, IN, const GLushort *, v,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttrib4usv__GLuint__C5_GLushort_P1,
	          "",
	          "");
	I_Method6(void, glVertexAttribPointer, IN, GLuint, index, IN, GLint, size, IN, GLenum, type, IN, GLboolean, normalized, IN, GLsizei, stride, IN, const GLvoid *, pointer,
	          Properties::NON_VIRTUAL,
	          __void__glVertexAttribPointer__GLuint__GLint__GLenum__GLboolean__GLsizei__C5_GLvoid_P1,
	          "",
	          "");
	I_Method0(GLuint, getCurrentProgram,
	          Properties::NON_VIRTUAL,
	          __GLuint__getCurrentProgram,
	          "",
	          "");
	I_Method2(bool, getProgramInfoLog, IN, GLuint, program, IN, std::string &, result,
	          Properties::NON_VIRTUAL,
	          __bool__getProgramInfoLog__GLuint__std_string_R1,
	          "",
	          "");
	I_Method2(bool, getShaderInfoLog, IN, GLuint, shader, IN, std::string &, result,
	          Properties::NON_VIRTUAL,
	          __bool__getShaderInfoLog__GLuint__std_string_R1,
	          "",
	          "");
	I_Method2(bool, getAttribLocation, IN, const char *, attribName, IN, GLuint &, slot,
	          Properties::NON_VIRTUAL,
	          __bool__getAttribLocation__C5_char_P1__GLuint_R1,
	          "",
	          "");
	I_Method2(bool, getFragDataLocation, IN, const char *, fragDataName, IN, GLuint &, slot,
	          Properties::NON_VIRTUAL,
	          __bool__getFragDataLocation__C5_char_P1__GLuint_R1,
	          "",
	          "");
	I_Method4(void, glUniformMatrix2x3fv, IN, GLint, location, IN, GLsizei, count, IN, GLboolean, transpose, IN, const GLfloat *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniformMatrix2x3fv__GLint__GLsizei__GLboolean__C5_GLfloat_P1,
	          "",
	          "");
	I_Method4(void, glUniformMatrix3x2fv, IN, GLint, location, IN, GLsizei, count, IN, GLboolean, transpose, IN, const GLfloat *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniformMatrix3x2fv__GLint__GLsizei__GLboolean__C5_GLfloat_P1,
	          "",
	          "");
	I_Method4(void, glUniformMatrix2x4fv, IN, GLint, location, IN, GLsizei, count, IN, GLboolean, transpose, IN, const GLfloat *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniformMatrix2x4fv__GLint__GLsizei__GLboolean__C5_GLfloat_P1,
	          "",
	          "");
	I_Method4(void, glUniformMatrix4x2fv, IN, GLint, location, IN, GLsizei, count, IN, GLboolean, transpose, IN, const GLfloat *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniformMatrix4x2fv__GLint__GLsizei__GLboolean__C5_GLfloat_P1,
	          "",
	          "");
	I_Method4(void, glUniformMatrix3x4fv, IN, GLint, location, IN, GLsizei, count, IN, GLboolean, transpose, IN, const GLfloat *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniformMatrix3x4fv__GLint__GLsizei__GLboolean__C5_GLfloat_P1,
	          "",
	          "");
	I_Method4(void, glUniformMatrix4x3fv, IN, GLint, location, IN, GLsizei, count, IN, GLboolean, transpose, IN, const GLfloat *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniformMatrix4x3fv__GLint__GLsizei__GLboolean__C5_GLfloat_P1,
	          "",
	          "");
	I_Method3(void, glProgramParameteri, IN, GLuint, program, IN, GLenum, pname, IN, GLint, value,
	          Properties::NON_VIRTUAL,
	          __void__glProgramParameteri__GLuint__GLenum__GLint,
	          "",
	          "");
	I_Method4(void, glFramebufferTexture, IN, GLenum, target, IN, GLenum, attachment, IN, GLuint, texture, IN, GLint, level,
	          Properties::NON_VIRTUAL,
	          __void__glFramebufferTexture__GLenum__GLenum__GLuint__GLint,
	          "",
	          "");
	I_Method5(void, glFramebufferTextureLayer, IN, GLenum, target, IN, GLenum, attachment, IN, GLuint, texture, IN, GLint, level, IN, GLint, layer,
	          Properties::NON_VIRTUAL,
	          __void__glFramebufferTextureLayer__GLenum__GLenum__GLuint__GLint__GLint,
	          "",
	          "");
	I_Method5(void, glFramebufferTextureFace, IN, GLenum, target, IN, GLenum, attachment, IN, GLuint, texture, IN, GLint, level, IN, GLenum, face,
	          Properties::NON_VIRTUAL,
	          __void__glFramebufferTextureFace__GLenum__GLenum__GLuint__GLint__GLenum,
	          "",
	          "");
	I_Method3(void, glGetUniformuiv, IN, GLuint, program, IN, GLint, location, IN, GLuint *, params,
	          Properties::NON_VIRTUAL,
	          __void__glGetUniformuiv__GLuint__GLint__GLuint_P1,
	          "",
	          "");
	I_Method3(void, glBindFragDataLocation, IN, GLuint, program, IN, GLuint, color, IN, const GLchar *, name,
	          Properties::NON_VIRTUAL,
	          __void__glBindFragDataLocation__GLuint__GLuint__C5_GLchar_P1,
	          "",
	          "");
	I_Method2(GLint, glGetFragDataLocation, IN, GLuint, program, IN, const GLchar *, name,
	          Properties::NON_VIRTUAL,
	          __GLint__glGetFragDataLocation__GLuint__C5_GLchar_P1,
	          "",
	          "");
	I_Method2(void, glUniform1ui, IN, GLint, location, IN, GLuint, v0,
	          Properties::NON_VIRTUAL,
	          __void__glUniform1ui__GLint__GLuint,
	          "",
	          "");
	I_Method3(void, glUniform2ui, IN, GLint, location, IN, GLuint, v0, IN, GLuint, v1,
	          Properties::NON_VIRTUAL,
	          __void__glUniform2ui__GLint__GLuint__GLuint,
	          "",
	          "");
	I_Method4(void, glUniform3ui, IN, GLint, location, IN, GLuint, v0, IN, GLuint, v1, IN, GLuint, v2,
	          Properties::NON_VIRTUAL,
	          __void__glUniform3ui__GLint__GLuint__GLuint__GLuint,
	          "",
	          "");
	I_Method5(void, glUniform4ui, IN, GLint, location, IN, GLuint, v0, IN, GLuint, v1, IN, GLuint, v2, IN, GLuint, v3,
	          Properties::NON_VIRTUAL,
	          __void__glUniform4ui__GLint__GLuint__GLuint__GLuint__GLuint,
	          "",
	          "");
	I_Method3(void, glUniform1uiv, IN, GLint, location, IN, GLsizei, count, IN, const GLuint *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniform1uiv__GLint__GLsizei__C5_GLuint_P1,
	          "",
	          "");
	I_Method3(void, glUniform2uiv, IN, GLint, location, IN, GLsizei, count, IN, const GLuint *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniform2uiv__GLint__GLsizei__C5_GLuint_P1,
	          "",
	          "");
	I_Method3(void, glUniform3uiv, IN, GLint, location, IN, GLsizei, count, IN, const GLuint *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniform3uiv__GLint__GLsizei__C5_GLuint_P1,
	          "",
	          "");
	I_Method3(void, glUniform4uiv, IN, GLint, location, IN, GLsizei, count, IN, const GLuint *, value,
	          Properties::NON_VIRTUAL,
	          __void__glUniform4uiv__GLint__GLsizei__C5_GLuint_P1,
	          "",
	          "");
	I_StaticMethod2(osg::GL2Extensions *, Get, IN, unsigned int, contextID, IN, bool, createIfNotInitalized,
	                __GL2Extensions_P1__Get__unsigned_int__bool_S,
	                "Function to call to get the extension of a specified context. ",
	                "If the Exentsion object for that context has not yet been created then and the 'createIfNotInitalized' flag been set to false then returns NULL. If 'createIfNotInitalized' is true then the Extensions object is automatically created. However, in this case the extension object only be created with the graphics context associated with ContextID.. ");
	I_StaticMethod2(void, Set, IN, unsigned int, contextID, IN, osg::GL2Extensions *, extensions,
	                __void__Set__unsigned_int__GL2Extensions_P1_S,
	                "allows users to override the extensions across graphics contexts. ",
	                "typically used when you have different extensions supported across graphics pipes but need to ensure that they all use the same low common denominator extensions. ");
	I_ProtectedMethod1(typedef, GLuint, IN, APIENTRY *, GetHandleProc,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __typedef__GLuint__APIENTRY_P1,
	                   "",
	                   "");
	I_SimpleProperty(GLuint, CurrentProgram, 
	                 __GLuint__getCurrentProgram, 
	                 0);
	I_SimpleProperty(bool, FragmentShaderSupported, 
	                 0, 
	                 __void__setFragmentShaderSupported__bool);
	I_SimpleProperty(bool, GeometryShader4Supported, 
	                 0, 
	                 __void__setGeometryShader4Supported__bool);
	I_SimpleProperty(float, GlVersion, 
	                 __float__getGlVersion, 
	                 0);
	I_SimpleProperty(bool, GpuShader4Supported, 
	                 0, 
	                 __void__setGpuShader4Supported__bool);
	I_SimpleProperty(bool, Language100Supported, 
	                 0, 
	                 __void__setLanguage100Supported__bool);
	I_SimpleProperty(float, LanguageVersion, 
	                 __float__getLanguageVersion, 
	                 0);
	I_SimpleProperty(bool, ShaderObjectsSupported, 
	                 0, 
	                 __void__setShaderObjectsSupported__bool);
	I_SimpleProperty(bool, VertexShaderSupported, 
	                 0, 
	                 __void__setVertexShaderSupported__bool);
END_REFLECTOR


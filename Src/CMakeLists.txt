include_directories(${LW3D_SOURCE_DIR}/Src)
# Libs linked to all of the examples
set(all_link_libs_d ${MPI_CXX_LIBRARIES} ${MPI_Fortran_LIBRARIES} ${ZFP_LIB} ${SCALAPACK_LIB} ${ARPACK_LIB} ${MAGMA_LIB} ${LAPACK_LIB} ${BLAS_LIB} m)


########################################### double Fortran drivers
set(FD1 aamain.f90 lienwiech.f90 integrators.f90 evalroutines.f90 probcons.f90 random.f90 putils.f90 externalfield.f90 diagnostics.f90 distribution.f90)
add_executable(lw3d.x ${FD1})
target_link_libraries(lw3d.x ${all_link_libs_d})





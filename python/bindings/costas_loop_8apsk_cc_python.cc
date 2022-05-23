/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(costas_loop_8apsk_cc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(4307f608adf9176c491081ecf6c76382)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <satellites/costas_loop_8apsk_cc.h>
// pydoc.h is automatically generated in the build directory
#include <costas_loop_8apsk_cc_pydoc.h>

void bind_costas_loop_8apsk_cc(py::module& m)
{

    using costas_loop_8apsk_cc = ::gr::satellites::costas_loop_8apsk_cc;


    py::class_<costas_loop_8apsk_cc,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<costas_loop_8apsk_cc>>(
        m, "costas_loop_8apsk_cc", D(costas_loop_8apsk_cc))

        .def(py::init(&costas_loop_8apsk_cc::make),
             py::arg("loop_bw"),
             D(costas_loop_8apsk_cc, make))


        .def("error", &costas_loop_8apsk_cc::error, D(costas_loop_8apsk_cc, error))

        ;
}

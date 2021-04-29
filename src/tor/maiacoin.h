/* Copyright (c) 2014, Pesetadigital Developers */
/* See LICENSE for licensing information */

/**
 * \file Pesetadigital.h
 * \brief Headers for Pesetadigital.cpp
 **/

#ifndef TOR_PesetaDigital_H
#define TOR_PesetaDigital_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* PesetaDigital_tor_data_directory(
    );

    char const* PesetaDigital_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif


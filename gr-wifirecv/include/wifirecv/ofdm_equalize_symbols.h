/* -*- c++ -*- */
/* 
 * Copyright 2014 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_WIFIRECV_OFDM_EQUALIZE_SYMBOLS_H
#define INCLUDED_WIFIRECV_OFDM_EQUALIZE_SYMBOLS_H

#include <wifirecv/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace wifirecv {

    /*!
     * \brief <+description of block+>
     * \ingroup wifirecv
     *
     */
    class WIFIRECV_API ofdm_equalize_symbols : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<ofdm_equalize_symbols> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of wifirecv::ofdm_equalize_symbols.
       *
       * To avoid accidental use of raw pointers, wifirecv::ofdm_equalize_symbols's
       * constructor is in a private implementation
       * class. wifirecv::ofdm_equalize_symbols::make is the public interface for
       * creating new instances.
       */
      static sptr make();
    };

  } // namespace wifirecv
} // namespace gr

#endif /* INCLUDED_WIFIRECV_OFDM_EQUALIZE_SYMBOLS_H */


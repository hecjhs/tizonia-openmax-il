/**
 * Copyright (C) 2011-2019 Aratelia Limited - Juan A. Rubio
 *
 * This file is part of Tizonia
 *
 * Tizonia is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Tizonia is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Tizonia.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file   oggmuxsnkprc.h
 * @author Juan A. Rubio <juan.rubio@aratelia.com>
 *
 * @brief  Tizonia - Ogg muxer sink processor
 *
 *
 */

#ifndef OGGDMUXSRCPRC_H
#define OGGDMUXSRCPRC_H

#ifdef __cplusplus
extern "C" {
#endif

void *
oggmuxsnk_prc_class_init (void * ap_tos, void * ap_hdl);
void *
oggmuxsnk_prc_init (void * ap_tos, void * ap_hdl);

#ifdef __cplusplus
}
#endif

#endif /* OGGDMUXSRCPRC_H */

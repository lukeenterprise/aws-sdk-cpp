﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/ReplaceTransitGatewayRouteRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ReplaceTransitGatewayRouteRequest::ReplaceTransitGatewayRouteRequest() : 
    m_destinationCidrBlockHasBeenSet(false),
    m_transitGatewayRouteTableIdHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_blackhole(false),
    m_blackholeHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ReplaceTransitGatewayRouteRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ReplaceTransitGatewayRoute&";
  if(m_destinationCidrBlockHasBeenSet)
  {
    ss << "DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }

  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
    ss << "TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }

  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
    ss << "TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_blackholeHasBeenSet)
  {
    ss << "Blackhole=" << std::boolalpha << m_blackhole << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ReplaceTransitGatewayRouteRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

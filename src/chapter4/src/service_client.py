#!/usr/bin/env python

import rospy

from chapter4.srv import WordCount

import sys

rospy.init_node('service_client')

# wait for the service to be advertised by server
rospy.wait_for_service('word_count')

# set up local proxy for service
word_counter = rospy.ServiceProxy('word_count', WordCount)

words = ' '.join(sys.argv[1:])

# specify name of service and type
word_count = word_counter(words)

print words, '->', word_count.count
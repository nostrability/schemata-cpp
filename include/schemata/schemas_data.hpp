#pragma once
// Generated from nostrability/schemata — do not edit manually.
#include <string>
#include <unordered_map>

namespace schemata {
namespace detail {

inline const std::unordered_map<std::string, std::string>& raw_schemas() {
    static const std::unordered_map<std::string, std::string> data = {
        {"kind0ContentSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"Metadata Event Schema\",
  \"type\": \"object\",
  \"properties\": {
    \"name\": {
      \"type\": \"string\",
      \"minLength\": 1
    },
    \"about\": {
      \"type\": \"string\"
    },
    \"picture\": {
      \"type\": \"string\",
      \"format\": \"uri\"
    },
    \"display_name\": {
      \"type\": \"string\",
      \"description\": \"An alternative, richer name. 'name' must always be set.\"
    },
    \"website\": {
      \"type\": \"string\",
      \"format\": \"uri\",
      \"description\": \"A web URL related to the event author.\"
    },
    \"banner\": {
      \"type\": \"string\",
      \"format\": \"uri\",
      \"description\": \"A URL to a wide picture for background display.\"
    },
    \"bot\": {
      \"type\": \"boolean\",
      \"description\": \"Indicates if content is automated.\"
    },
    \"lud16\": {
      \"type\": \"string\",
      \"format\": \"email\"
    },
    \"lud06\": {
      \"type\": \"string\"
    },
    \"displayName\": {
      \"deprecated\": true,
      \"description\": \"Use 'display_name' instead.\",
      \"errorMessage\": {
        \"deprecated\": \"Use 'display_name' instead.\"
      }
    },
    \"username\": {
      \"deprecated\": true,
      \"description\": \"Use 'name' instead.\",
      \"errorMessage\": {
        \"deprecated\": \"Use 'display_name' instead.\"
      }
    }
  },
  \"required\": [
    \"name\"
  ],
  \"additionalProperties\": true
}"},
        {"kind0Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind0\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 0,
          \"errorMessage\": \"kind must equal 0\"
        }
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/0.json\"
}"},
        {"kind1Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 1,
          \"errorMessage\": \"kind must equal 1\"
        }
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1.json\"
}"},
        {"clientCloseSchema", "{
  \"type\": \"array\",
  \"items\": [
    {
      \"const\": \"CLOSE\"
    },
    {
      \"type\": \"string\",
      \"description\": \"an id of the subscription to close\",
      \"errorMessage\": {
        \"type\": \"subscription id must be a string and should be unique.\"
      }
    }
  ],
  \"minItems\": 2,
  \"maxItems\": 2,
  \"$id\": \"https://nostrability.github.io/schemata/message/CLOSE.json\"
}"},
        {"clientEventSchema", "{
  \"type\": \"array\",
  \"title\": \"Client Event Message\",
  \"description\": \"A message for publishing a NIP-01 note to a relay\",
  \"items\": [
    {
      \"const\": \"EVENT\"
    },
    {
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema\",
              \"type\": \"object\",
              \"properties\": {
                \"content\": {
                  \"type\": \"string\",
                  \"errorMessage\": \"content must be a string\",
                  \"description\": \"The content of the note\"
                },
                \"created_at\": {
                  \"type\": \"integer\",
                  \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
                  \"description\": \"The timestamp of the note creation\"
                },
                \"id\": {
                  \"allOf\": [
                    {
                      \"allOf\": [
                        {
                          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                          \"type\": \"string\",
                          \"pattern\": \"^[a-f0-9]{64}$\"
                        }
                      ]
                    }
                  ],
                  \"errorMessage\": \"id must be a valid hash\",
                  \"description\": \"The id is a hash derived as specified in NIP-01\"
                },
                \"kind\": {
                  \"type\": \"integer\"
                },
                \"pubkey\": {
                  \"allOf\": [
                    {
                      \"allOf\": [
                        {
                          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                          \"type\": \"string\",
                          \"pattern\": \"^[a-f0-9]{64}$\"
                        }
                      ]
                    }
                  ],
                  \"errorMessage\": \"pubkey must be a secp256k1 public key\",
                  \"description\": \"The public key of the note's author\"
                },
                \"sig\": {
                  \"type\": \"string\",
                  \"pattern\": \"^[a-f0-9]{128}$\",
                  \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
                  \"description\": \"The cryptographic signature of the note\"
                },
                \"tags\": {
                  \"type\": \"array\",
                  \"errorMessage\": \"tags must be an array of valid tag tuples\",
                  \"description\": \"The tags of the note\",
                  \"items\": {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  }
                }
              },
              \"required\": [
                \"content\",
                \"created_at\",
                \"id\",
                \"kind\",
                \"pubkey\",
                \"sig\",
                \"tags\"
              ],
              \"additionalProperties\": false
            }
          ]
        }
      ],
      \"description\": \"The NIP-01 note to be published\"
    }
  ],
  \"minItems\": 2,
  \"maxItems\": 2,
  \"$id\": \"https://nostrability.github.io/schemata/message/EVENT.json\"
}"},
        {"clientReqSchema", "{
  \"type\": \"array\",
  \"items\": [
    {
      \"const\": \"REQ\"
    },
    {
      \"type\": \"string\",
      \"description\": \"An identifier for the subscription, this should be unique.\"
    },
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"object\",
          \"properties\": {
            \"ids\": {
              \"type\": \"array\",
              \"items\": {
                \"type\": \"string\",
                \"pattern\": \"^[a-f0-9]{64}$\"
              },
              \"description\": \"A list of event ids in lowercase hex\"
            },
            \"authors\": {
              \"type\": \"array\",
              \"items\": {
                \"type\": \"string\",
                \"pattern\": \"^[a-f0-9]{64}$\"
              },
              \"description\": \"A list of lowercase pubkeys, matching the pubkey of an event\"
            },
            \"kinds\": {
              \"type\": \"array\",
              \"items\": {
                \"type\": \"integer\",
                \"minimum\": 0
              },
              \"description\": \"A list of kind numbers\"
            },
            \"since\": {
              \"type\": \"integer\",
              \"minimum\": 0,
              \"description\": \"An integer Unix timestamp in seconds, where events must have created_at >= since\"
            },
            \"until\": {
              \"type\": \"integer\",
              \"minimum\": 0,
              \"description\": \"An integer Unix timestamp in seconds, where events must have created_at <= until\"
            },
            \"limit\": {
              \"type\": \"integer\",
              \"minimum\": 1,
              \"description\": \"The maximum number of events relays SHOULD return in the initial query\"
            }
          },
          \"patternProperties\": {
            \"^#[a-zA-Z]$\": {
              \"type\": \"array\",
              \"items\": {
                \"type\": \"string\"
              },
              \"description\": \"A list of tag values, where specific tags (#e, #p) have designated meanings\"
            }
          },
          \"additionalProperties\": false
        }
      ]
    }
  ],
  \"minItems\": 3,
  \"additionalItems\": {
    \"allOf\": [
      {
        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
        \"type\": \"object\",
        \"properties\": {
          \"ids\": {
            \"type\": \"array\",
            \"items\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{64}$\"
            },
            \"description\": \"A list of event ids in lowercase hex\"
          },
          \"authors\": {
            \"type\": \"array\",
            \"items\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{64}$\"
            },
            \"description\": \"A list of lowercase pubkeys, matching the pubkey of an event\"
          },
          \"kinds\": {
            \"type\": \"array\",
            \"items\": {
              \"type\": \"integer\",
              \"minimum\": 0
            },
            \"description\": \"A list of kind numbers\"
          },
          \"since\": {
            \"type\": \"integer\",
            \"minimum\": 0,
            \"description\": \"An integer Unix timestamp in seconds, where events must have created_at >= since\"
          },
          \"until\": {
            \"type\": \"integer\",
            \"minimum\": 0,
            \"description\": \"An integer Unix timestamp in seconds, where events must have created_at <= until\"
          },
          \"limit\": {
            \"type\": \"integer\",
            \"minimum\": 1,
            \"description\": \"The maximum number of events relays SHOULD return in the initial query\"
          }
        },
        \"patternProperties\": {
          \"^#[a-zA-Z]$\": {
            \"type\": \"array\",
            \"items\": {
              \"type\": \"string\"
            },
            \"description\": \"A list of tag values, where specific tags (#e, #p) have designated meanings\"
          }
        },
        \"additionalProperties\": false
      }
    ]
  },
  \"$id\": \"https://nostrability.github.io/schemata/message/REQ.json\"
}"},
        {"filterSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"type\": \"object\",
  \"properties\": {
    \"ids\": {
      \"type\": \"array\",
      \"items\": {
        \"type\": \"string\",
        \"pattern\": \"^[a-f0-9]{64}$\"
      },
      \"description\": \"A list of event ids in lowercase hex\"
    },
    \"authors\": {
      \"type\": \"array\",
      \"items\": {
        \"type\": \"string\",
        \"pattern\": \"^[a-f0-9]{64}$\"
      },
      \"description\": \"A list of lowercase pubkeys, matching the pubkey of an event\"
    },
    \"kinds\": {
      \"type\": \"array\",
      \"items\": {
        \"type\": \"integer\",
        \"minimum\": 0
      },
      \"description\": \"A list of kind numbers\"
    },
    \"since\": {
      \"type\": \"integer\",
      \"minimum\": 0,
      \"description\": \"An integer Unix timestamp in seconds, where events must have created_at >= since\"
    },
    \"until\": {
      \"type\": \"integer\",
      \"minimum\": 0,
      \"description\": \"An integer Unix timestamp in seconds, where events must have created_at <= until\"
    },
    \"limit\": {
      \"type\": \"integer\",
      \"minimum\": 1,
      \"description\": \"The maximum number of events relays SHOULD return in the initial query\"
    }
  },
  \"patternProperties\": {
    \"^#[a-zA-Z]$\": {
      \"type\": \"array\",
      \"items\": {
        \"type\": \"string\"
      },
      \"description\": \"A list of tag values, where specific tags (#e, #p) have designated meanings\"
    }
  },
  \"additionalProperties\": false,
  \"$id\": \"https://nostrability.github.io/schemata/message/FILTER.json\"
}"},
        {"relayClosedSchema", "{
  \"type\": \"array\",
  \"items\": [
    {
      \"const\": \"CLOSED\"
    },
    {
      \"type\": \"string\",
      \"description\": \"The id of the subscription that was closed\",
      \"errorMessage\": \"subscription id must be a string and should be unique.\"
    },
    {
      \"type\": \"string\",
      \"description\": \"A response message\",
      \"errorMessage\": \"response message must be a string that follows the format: '{code}: {message}'\",
      \"pattern\": \"^[a-zA-Z0-9_-]+: .+\"
    }
  ],
  \"minItems\": 3,
  \"maxItems\": 3,
  \"additionalItems\": false,
  \"$id\": \"https://nostrability.github.io/schemata/message/CLOSED.json\"
}"},
        {"relayEoseSchema", "{
  \"type\": \"array\",
  \"description\": \"End Of Subscription Event\",
  \"items\": [
    {
      \"const\": \"EOSE\"
    },
    {
      \"type\": \"string\",
      \"description\": \"The id of the subscription that was successfully fulfilled\"
    }
  ],
  \"minItems\": 2,
  \"maxItems\": 2,
  \"$id\": \"https://nostrability.github.io/schemata/message/EOSE.json\"
}"},
        {"relayEventSchema", "{
  \"type\": \"array\",
  \"description\": \"A message sent by relays to clients in response to a client request.\",
  \"items\": [
    {
      \"const\": \"EVENT\"
    },
    {
      \"type\": \"string\",
      \"description\": \"The id of the subscription that the note is being sent in response to\"
    },
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    }
  ],
  \"minItems\": 3,
  \"maxItems\": 3,
  \"$id\": \"https://nostrability.github.io/schemata/message/nip-01_EVENT.json\"
}"},
        {"relayNoticeSchema", "{
  \"type\": \"array\",
  \"description\": \"A message sent by relays to clients in response to a client request, usually to inform them of an issue.\",
  \"items\": [
    {
      \"const\": \"NOTICE\"
    },
    {
      \"type\": \"string\"
    }
  ],
  \"minItems\": 2,
  \"maxItems\": 2,
  \"$id\": \"https://nostrability.github.io/schemata/message/NOTICE.json\"
}"},
        {"relayOkSchema", "{
  \"type\": \"array\",
  \"items\": [
    {
      \"const\": \"OK\"
    },
    {
      \"type\": \"string\",
      \"description\": \"The id of the subscription that the note is being sent in response to\"
    },
    {
      \"type\": \"boolean\",
      \"description\": \"true if accepted by the relay, false otherwise\"
    },
    {
      \"type\": \"string\",
      \"description\": \"A response message\",
      \"errorMessage\": \"response message must be a string that follows the format: '{code}: {message}'\",
      \"pattern\": \"^[a-zA-Z0-9_-]+: .+\"
    }
  ],
  \"minItems\": 4,
  \"maxItems\": 4,
  \"additionalItems\": false,
  \"$id\": \"https://nostrability.github.io/schemata/message/OK.json\"
}"},
        {"noteSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema\",
  \"type\": \"object\",
  \"properties\": {
    \"content\": {
      \"type\": \"string\",
      \"errorMessage\": \"content must be a string\",
      \"description\": \"The content of the note\"
    },
    \"created_at\": {
      \"type\": \"integer\",
      \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
      \"description\": \"The timestamp of the note creation\"
    },
    \"id\": {
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{64}$\"
            }
          ]
        }
      ],
      \"errorMessage\": \"id must be a valid hash\",
      \"description\": \"The id is a hash derived as specified in NIP-01\"
    },
    \"kind\": {
      \"type\": \"integer\"
    },
    \"pubkey\": {
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{64}$\"
            }
          ]
        }
      ],
      \"errorMessage\": \"pubkey must be a secp256k1 public key\",
      \"description\": \"The public key of the note's author\"
    },
    \"sig\": {
      \"type\": \"string\",
      \"pattern\": \"^[a-f0-9]{128}$\",
      \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
      \"description\": \"The cryptographic signature of the note\"
    },
    \"tags\": {
      \"type\": \"array\",
      \"errorMessage\": \"tags must be an array of valid tag tuples\",
      \"description\": \"The tags of the note\",
      \"items\": {
        \"allOf\": [
          {
            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
            \"type\": \"array\",
            \"items\": {
              \"type\": \"string\"
            },
            \"uniqueItems\": false
          }
        ]
      }
    }
  },
  \"required\": [
    \"content\",
    \"created_at\",
    \"id\",
    \"kind\",
    \"pubkey\",
    \"sig\",
    \"tags\"
  ],
  \"additionalProperties\": false
}"},
        {"noteUnsignedSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema\",
  \"type\": \"object\",
  \"properties\": {
    \"content\": {
      \"type\": \"string\",
      \"errorMessage\": \"content must be a string\",
      \"description\": \"The content of the note\"
    },
    \"created_at\": {
      \"type\": \"integer\",
      \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
      \"description\": \"The timestamp of the note creation\"
    },
    \"id\": {
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{64}$\"
            }
          ]
        }
      ],
      \"errorMessage\": \"id must be a valid hash\",
      \"description\": \"The id is a hash derived as specified in NIP-01\"
    },
    \"kind\": {
      \"type\": \"integer\"
    },
    \"pubkey\": {
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{64}$\"
            }
          ]
        }
      ],
      \"errorMessage\": \"pubkey must be a secp256k1 public key\",
      \"description\": \"The public key of the note's author\"
    },
    \"tags\": {
      \"type\": \"array\",
      \"errorMessage\": \"tags must be an array of valid tag tuples\",
      \"description\": \"The tags of the note\",
      \"items\": {
        \"allOf\": [
          {
            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
            \"type\": \"array\",
            \"items\": {
              \"type\": \"string\"
            },
            \"uniqueItems\": false
          }
        ]
      }
    }
  },
  \"required\": [
    \"content\",
    \"created_at\",
    \"kind\",
    \"tags\"
  ],
  \"additionalProperties\": false
}"},
        {"secp256k1Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"type\": \"string\",
  \"pattern\": \"^[a-f0-9]{64}$\"
}"},
        {"aTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"a\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^\\\\d+:[a-f0-9]{64}:.+$\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^(ws://|wss://).+$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/a.json\"
}"},
        {"dTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"d\"
        },
        {
          \"type\": \"string\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/d.json\"
}"},
        {"eTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    }
  ],
  \"oneOf\": [
    {
      \"type\": \"array\",
      \"minItems\": 4,
      \"maxItems\": 5,
      \"items\": [
        {
          \"const\": \"e\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{64}$\"
        },
        {
          \"anyOf\": [
            {
              \"type\": \"string\",
              \"pattern\": \"^(ws://|wss://).+$\"
            },
            {
              \"type\": \"string\",
              \"const\": \"\"
            }
          ]
        },
        {
          \"type\": \"string\",
          \"enum\": [
            \"reply\",
            \"root\"
          ]
        },
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{64}$\"
            }
          ]
        }
      ],
      \"additionalItems\": false
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"maxItems\": 3,
      \"items\": [
        {
          \"const\": \"e\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{64}$\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^(ws://|wss://).+$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/e.json\"
}"},
        {"pTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"p\"
        },
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{64}$\"
            }
          ]
        },
        {
          \"title\": \"petname\",
          \"type\": \"string\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/p.json\"
}"},
        {"tagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"type\": \"array\",
  \"items\": {
    \"type\": \"string\"
  },
  \"uniqueItems\": false,
  \"$id\": \"https://nostrability.github.io/schemata/tag/generic.json\"
}"},
        {"tTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"t\"
        },
        {
          \"type\": \"string\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/t.json\"
}"},
        {"kind3ContentSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind3Content\",
  \"type\": \"object\",
  \"patternProperties\": {
    \"^(wss://|ws://).*$\": {
      \"type\": \"object\",
      \"properties\": {
        \"write\": {
          \"type\": \"boolean\"
        },
        \"read\": {
          \"type\": \"boolean\"
        }
      },
      \"required\": [
        \"write\",
        \"read\"
      ],
      \"additionalProperties\": false
    }
  },
  \"additionalProperties\": false
}"},
        {"kind3Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind3\",
  \"x-stringified\": [
    \"content\"
  ],
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"p\"
                      },
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{64}$\"
                          }
                        ]
                      },
                      {
                        \"title\": \"petname\",
                        \"type\": \"string\"
                      }
                    ],
                    \"additionalItems\": false
                  }
                ]
              }
            ]
          },
          \"additionalItems\": false,
          \"minItems\": 1,
          \"errorMessage\": {
            \"type\": \"tags must be an array of p tags and only p tags\",
            \"minItems\": \"tags array must have at least one p tag\"
          }
        }
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/3.json\"
}"},
        {"kind4Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind4\",
  \"description\": \"Encrypted Direct Message (NIP-04)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 4
        },
        \"content\": {
          \"type\": \"string\",
          \"pattern\": \"^[A-Za-z0-9+/]+={0,2}\\\\?iv=[A-Za-z0-9+/]+={0,2}$\",
          \"errorMessage\": \"content must be '<ciphertext>?iv=<initialization_vector>' where both values are base64\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"p\"
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          },
                          {
                            \"title\": \"petname\",
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"anyOf\": [
                {
                  \"not\": {
                    \"contains\": {
                      \"type\": \"array\",
                      \"minItems\": 1,
                      \"items\": [
                        {
                          \"const\": \"e\"
                        }
                      ]
                    }
                  }
                },
                {
                  \"contains\": {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"e\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^[a-f0-9]{64}$\"
                      }
                    ]
                  }
                }
              ]
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include a p tag identifying the intended recipient\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"content\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/4.json\"
}"},
        {"identifierSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"nip05Identifier\",
  \"description\": \"Internet Identifier for NIP-05 (email-like, case-insensitive local-part)\",
  \"type\": \"string\",
  \"pattern\": \"^(([_A-Za-z0-9.-]+)|_)@[A-Za-z0-9](?:[A-Za-z0-9-]*[A-Za-z0-9])?(?:\\\\.[A-Za-z0-9](?:[A-Za-z0-9-]*[A-Za-z0-9])?)+$\"
}"},
        {"wellKnownSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"nostrWellKnown\",
  \"description\": \"Schema for `/.well-known/nostr.json` per NIP-05\",
  \"type\": \"object\",
  \"properties\": {
    \"names\": {
      \"type\": \"object\",
      \"description\": \"Mapping from identifier local-part to hex public keys\",
      \"propertyNames\": {
        \"pattern\": \"^[a-z0-9._-]+$\"
      },
      \"additionalProperties\": {
        \"allOf\": [
          {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"string\",
                \"pattern\": \"^[a-f0-9]{64}$\"
              }
            ]
          }
        ]
      }
    },
    \"relays\": {
      \"type\": \"object\",
      \"description\": \"Optional mapping from hex public keys to arrays of relay URLs\",
      \"propertyNames\": {
        \"pattern\": \"^[a-f0-9]{64}$\"
      },
      \"additionalProperties\": {
        \"type\": \"array\",
        \"items\": {
          \"type\": \"string\",
          \"format\": \"uri\",
          \"pattern\": \"^wss?://\"
        }
      }
    }
  },
  \"required\": [
    \"names\"
  ],
  \"additionalProperties\": false
}"},
        {"kind5Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind5\",
  \"description\": \"Event Deletion Request (NIP-09)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 5
        },
        \"content\": {
          \"type\": \"string\",
          \"description\": \"Optional human-readable reason for deletion\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"type\": \"array\",
                \"minItems\": 2,
                \"items\": [
                  {
                    \"enum\": [
                      \"e\",
                      \"a\"
                    ]
                  }
                ]
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include at least one e or a tag\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/5.json\"
}"},
        {"nip11Schema", "{
  \"$id\": \"https://nostrability.github.io/schemata/document/info\",
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"NIP-11\",
  \"type\": \"object\",
  \"properties\": {
    \"name\": {
      \"type\": \"string\",
      \"errorMessage\": \"Name must be a string.\"
    },
    \"description\": {
      \"type\": \"string\",
      \"errorMessage\": \"Description must be a string.\"
    },
    \"pubkey\": {
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{64}$\"
            }
          ]
        }
      ],
      \"description\": \"The public key for the operator of the relay.\",
      \"errorMessage\": \"Pubkey must be a valid hex secp256k1 public key, not an npub or nprofile.\"
    },
    \"contact\": {
      \"type\": \"string\",
      \"description\": \"Contact information for the operator of the relay.\",
      \"errorMessage\": \"Contact must be a string.\"
    },
    \"supported_nips\": {
      \"type\": \"array\",
      \"items\": {
        \"type\": \"number\"
      },
      \"description\": \"An array of NIPs that the relay supports.\",
      \"errorMessage\": \"Supported NIPs must be an array of numbers.\"
    },
    \"relay_countries\": {
      \"type\": \"array\",
      \"items\": [
        {
          \"type\": \"string\"
        }
      ]
    },
    \"software\": {
      \"type\": \"string\",
      \"description\": \"The software that the relay is running.\",
      \"errorMessage\": \"Software must be a string.\"
    },
    \"version\": {
      \"type\": \"string\",
      \"description\": \"The version of the software that the relay is running.\",
      \"errorMessage\": \"Version must be a string.\"
    },
    \"retention\": {
      \"type\": \"array\",
      \"items\": [
        {
          \"allOf\": [
            {
              \"type\": \"object\",
              \"properties\": {
                \"kinds\": {
                  \"type\": \"array\",
                  \"items\": {
                    \"anyOf\": [
                      {
                        \"type\": \"number\"
                      },
                      {
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"number\"
                        }
                      }
                    ]
                  }
                },
                \"count\": {
                  \"type\": \"number\"
                },
                \"time\": {
                  \"anyOf\": [
                    {
                      \"type\": \"number\"
                    },
                    {
                      \"type\": \"null\"
                    }
                  ]
                }
              }
            }
          ],
          \"description\": \"The retention policy of the relay.\",
          \"errorMessage\": \"Retention must be an object with at least one of kinds, count or time.\"
        }
      ]
    },
    \"banner\": {
      \"type\": \"string\",
      \"pattern\": \"^https?://\"
    },
    \"icon\": {
      \"type\": \"string\",
      \"pattern\": \"^https?://\"
    },
    \"language_tags\": {
      \"type\": \"array\",
      \"items\": {
        \"type\": \"string\"
      }
    },
    \"tags\": {
      \"type\": \"array\",
      \"items\": {
        \"type\": \"string\"
      }
    },
    \"posting_policy\": {
      \"type\": \"string\",
      \"anyOf\": [
        {
          \"pattern\": \"^$\"
        },
        {
          \"pattern\": \"^https?://\"
        }
      ],
      \"errorMessage\": \"If provided, posting_policy must be a valid URL.\"
    },
    \"limitation\": {
      \"type\": \"object\",
      \"properties\": {
        \"max_message_length\": {
          \"type\": \"number\"
        },
        \"max_subscriptions\": {
          \"type\": \"number\"
        },
        \"max_filters\": {
          \"type\": \"number\"
        },
        \"max_limit\": {
          \"type\": \"number\"
        },
        \"max_subid_length\": {
          \"type\": \"number\"
        },
        \"max_event_tags\": {
          \"type\": \"number\"
        },
        \"max_content_length\": {
          \"type\": \"number\"
        },
        \"min_pow_difficulty\": {
          \"type\": \"number\"
        },
        \"auth_required\": {
          \"type\": \"boolean\"
        },
        \"payment_required\": {
          \"type\": \"boolean\"
        },
        \"restricted_writes\": {
          \"type\": \"boolean\"
        },
        \"created_at_lower_limit\": {
          \"type\": \"number\"
        },
        \"created_at_upper_limit\": {
          \"type\": \"number\"
        }
      }
    },
    \"payments_url\": {
      \"type\": \"string\",
      \"anyOf\": [
        {
          \"pattern\": \"^$\"
        },
        {
          \"pattern\": \"^https?://\"
        }
      ],
      \"errorMessage\": \"If provided, payments_url must be a valid URL.\"
    },
    \"fees\": {
      \"type\": \"object\",
      \"properties\": {
        \"admission\": {
          \"type\": \"array\",
          \"items\": {
            \"type\": \"object\",
            \"properties\": {
              \"amount\": {
                \"type\": \"number\"
              },
              \"unit\": {
                \"type\": \"string\"
              },
              \"period\": {
                \"type\": \"number\"
              },
              \"kinds\": {
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"number\"
                }
              }
            },
            \"required\": [
              \"amount\",
              \"unit\"
            ]
          }
        },
        \"subscription\": {
          \"type\": \"array\",
          \"items\": {
            \"type\": \"object\",
            \"properties\": {
              \"amount\": {
                \"type\": \"number\"
              },
              \"unit\": {
                \"type\": \"string\"
              },
              \"period\": {
                \"type\": \"number\"
              },
              \"kinds\": {
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"number\"
                }
              }
            },
            \"required\": [
              \"amount\",
              \"unit\"
            ]
          }
        },
        \"publication\": {
          \"type\": \"array\",
          \"items\": {
            \"type\": \"object\",
            \"properties\": {
              \"amount\": {
                \"type\": \"number\"
              },
              \"unit\": {
                \"type\": \"string\"
              },
              \"period\": {
                \"type\": \"number\"
              },
              \"kinds\": {
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"number\"
                }
              }
            },
            \"required\": [
              \"amount\",
              \"unit\"
            ]
          }
        }
      },
      \"additionalProperties\": false
    }
  },
  \"allOf\": [
    {
      \"if\": {
        \"properties\": {
          \"limitation\": {
            \"properties\": {
              \"payment_required\": {
                \"const\": true
              }
            },
            \"required\": [
              \"payment_required\"
            ]
          }
        },
        \"required\": [
          \"limitation\"
        ]
      },
      \"then\": {
        \"properties\": {
          \"payments_url\": {
            \"errorMessage\": \"payments_url must be provided and must be a valid URL when payment_required is true.\",
            \"type\": \"string\",
            \"pattern\": \"^https?://\"
          },
          \"fees\": {
            \"errorMessage\": \"A admission, subscription and/or publication member should be in fees when payment_required is true.\",
            \"anyOf\": [
              {
                \"properties\": {
                  \"admission\": {
                    \"type\": \"array\",
                    \"minItems\": 1
                  }
                },
                \"required\": [
                  \"admission\"
                ]
              },
              {
                \"properties\": {
                  \"subscription\": {
                    \"type\": \"array\",
                    \"minItems\": 1
                  }
                },
                \"required\": [
                  \"subscription\"
                ]
              },
              {
                \"properties\": {
                  \"publication\": {
                    \"type\": \"array\",
                    \"minItems\": 1
                  }
                },
                \"required\": [
                  \"publication\"
                ]
              }
            ]
          }
        },
        \"required\": [
          \"payments_url\",
          \"fees\"
        ]
      }
    }
  ],
  \"$defs\": {
    \"saneUrl\": {
      \"type\": \"string\",
      \"pattern\": \"^https?://\"
    },
    \"fee\": {
      \"type\": \"array\",
      \"items\": {
        \"type\": \"object\",
        \"properties\": {
          \"amount\": {
            \"type\": \"number\"
          },
          \"unit\": {
            \"type\": \"string\"
          },
          \"period\": {
            \"type\": \"number\"
          },
          \"kinds\": {
            \"type\": \"array\",
            \"items\": {
              \"type\": \"number\"
            }
          }
        },
        \"required\": [
          \"amount\",
          \"unit\"
        ]
      }
    },
    \"retent\": {
      \"type\": \"object\",
      \"properties\": {
        \"kinds\": {
          \"type\": \"array\",
          \"items\": {
            \"anyOf\": [
              {
                \"type\": \"number\"
              },
              {
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"number\"
                }
              }
            ]
          }
        },
        \"count\": {
          \"type\": \"number\"
        },
        \"time\": {
          \"anyOf\": [
            {
              \"type\": \"number\"
            },
            {
              \"type\": \"null\"
            }
          ]
        }
      }
    }
  }
}"},
        {"kind10050Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind10050\",
  \"description\": \"Preferred DM relay list event defined by NIP-17\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 10050,
          \"description\": \"Kind 10050 enumerates preferred relays for receiving direct messages\"
        },
        \"content\": {
          \"type\": \"string\",
          \"description\": \"Optional human readable notes; usually an empty string\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"allOf\": [
            {
              \"if\": {
                \"minItems\": 1
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"allOf\": [
                                {
                                  \"allOf\": [
                                    {
                                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                      \"type\": \"array\",
                                      \"items\": {
                                        \"type\": \"string\"
                                      },
                                      \"uniqueItems\": false
                                    }
                                  ]
                                },
                                {
                                  \"type\": \"array\",
                                  \"minItems\": 2,
                                  \"items\": [
                                    {
                                      \"const\": \"relay\"
                                    },
                                    {
                                      \"type\": \"string\",
                                      \"pattern\": \"^(ws://|wss://).+$\"
                                    }
                                  ],
                                  \"additionalItems\": false
                                }
                              ]
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"description\": \"Preferred relay endpoint for receiving direct messages\",
                          \"items\": [
                            {
                              \"const\": \"relay\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^wss?://[a-zA-Z0-9.-]+(?::[0-9]+)?(?:/.*)?$\"
                            }
                          ]
                        }
                      ]
                    }
                  ]
                },
                \"errorMessage\": {
                  \"contains\": \"tags must include at least one relay tag when relays are configured\"
                }
              }
            }
          ]
        }
      },
      \"required\": [
        \"kind\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/10050.json\"
}"},
        {"kind14Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind14\",
  \"description\": \"Private direct message event defined by NIP-17\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"kind\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 14,
          \"description\": \"Kind 14 identifies an unsigned private direct message\"
        },
        \"id\": {
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"string\",
                  \"pattern\": \"^[a-f0-9]{64}$\"
                }
              ]
            }
          ],
          \"description\": \"Deterministic event hash as defined in NIP-01\"
        },
        \"pubkey\": {
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"string\",
                  \"pattern\": \"^[a-f0-9]{64}$\"
                }
              ]
            }
          ],
          \"description\": \"Sender public key\"
        },
        \"content\": {
          \"type\": \"string\",
          \"description\": \"Plain text chat message content\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"p\"
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          },
                          {
                            \"title\": \"petname\",
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include at least one p tag identifying a receiver\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"id\",
        \"pubkey\"
      ]
    },
    {
      \"not\": {
        \"required\": [
          \"sig\"
        ]
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/14.json\"
}"},
        {"kind15Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind15\",
  \"description\": \"Encrypted file message event defined by NIP-17\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"kind\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 15,
          \"description\": \"Kind 15 identifies an unsigned encrypted file message\"
        },
        \"id\": {
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"string\",
                  \"pattern\": \"^[a-f0-9]{64}$\"
                }
              ]
            }
          ],
          \"description\": \"Deterministic event hash as defined in NIP-01\"
        },
        \"pubkey\": {
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"string\",
                  \"pattern\": \"^[a-f0-9]{64}$\"
                }
              ]
            }
          ],
          \"description\": \"Sender public key\"
        },
        \"content\": {
          \"type\": \"string\",
          \"format\": \"uri\",
          \"description\": \"URL pointing to the encrypted file payload\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 6,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"p\"
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          },
                          {
                            \"title\": \"petname\",
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include at least one p tag identifying a receiver\"
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"description\": \"MIME type of the original file before encryption\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"file-type\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-zA-Z][a-zA-Z0-9!#$&^_-]*/[a-zA-Z0-9*][a-zA-Z0-9!#$&^_.+-]*(\\\\s*;\\\\s*[a-zA-Z0-9!#$&^_.+-]+=[a-zA-Z0-9!#$&^_.+-]+)*$\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include a file-type tag specifying the original MIME type\"
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"description\": \"Encryption algorithm used for the attached file\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"encryption-algorithm\"
                          },
                          {
                            \"type\": \"string\",
                            \"enum\": [
                              \"aes-gcm\"
                            ]
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include an encryption-algorithm tag\"
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"description\": \"Key required to decrypt the encrypted file\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"decryption-key\"
                          },
                          {
                            \"type\": \"string\",
                            \"minLength\": 1
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include a decryption-key tag\"
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"description\": \"Nonce required alongside the decryption key\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"decryption-nonce\"
                          },
                          {
                            \"type\": \"string\",
                            \"minLength\": 1
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include a decryption-nonce tag\"
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"description\": \"Checksum of the encrypted file\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"x\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{64}$\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include an x tag with the encrypted file checksum\"
              }
            }
          ]
        }
      },
      \"required\": [
        \"kind\",
        \"id\",
        \"pubkey\"
      ]
    },
    {
      \"not\": {
        \"required\": [
          \"sig\"
        ]
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/15.json\"
}"},
        {"blurhashTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Blurhash placeholder for the encrypted media\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"blurhash\"
        },
        {
          \"type\": \"string\",
          \"minLength\": 6
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/blurhash.json\"
}"},
        {"decryptionkeyTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Key required to decrypt the encrypted file\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"decryption-key\"
        },
        {
          \"type\": \"string\",
          \"minLength\": 1
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/decryption-key.json\"
}"},
        {"decryptionnonceTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Nonce required alongside the decryption key\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"decryption-nonce\"
        },
        {
          \"type\": \"string\",
          \"minLength\": 1
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/decryption-nonce.json\"
}"},
        {"dimTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Image dimensions in the form <width>x<height>\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"dim\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^\\\\d+x\\\\d+$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/dim.json\"
}"},
        {"encryptionalgorithmTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Encryption algorithm used for the attached file\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"encryption-algorithm\"
        },
        {
          \"type\": \"string\",
          \"enum\": [
            \"aes-gcm\"
          ]
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/encryption-algorithm.json\"
}"},
        {"fallbackTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Fallback locations for retrieving the encrypted file\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"fallback\"
        },
        {
          \"type\": \"string\",
          \"format\": \"uri\"
        }
      ],
      \"additionalItems\": {
        \"type\": \"string\",
        \"format\": \"uri\"
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/fallback.json\"
}"},
        {"filetypeTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"MIME type of the original file before encryption\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"file-type\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-zA-Z][a-zA-Z0-9!#$&^_-]*/[a-zA-Z0-9*][a-zA-Z0-9!#$&^_.+-]*(\\\\s*;\\\\s*[a-zA-Z0-9!#$&^_.+-]+=[a-zA-Z0-9!#$&^_.+-]+)*$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/file-type.json\"
}"},
        {"oxTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Checksum of the original file prior to encryption\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"ox\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{64}$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/ox.json\"
}"},
        {"relayTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"array\",
                  \"items\": {
                    \"type\": \"string\"
                  },
                  \"uniqueItems\": false
                }
              ]
            },
            {
              \"type\": \"array\",
              \"minItems\": 2,
              \"items\": [
                {
                  \"const\": \"relay\"
                },
                {
                  \"type\": \"string\",
                  \"pattern\": \"^(ws://|wss://).+$\"
                }
              ],
              \"additionalItems\": false
            }
          ]
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Preferred relay endpoint for receiving direct messages\",
      \"items\": [
        {
          \"const\": \"relay\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^wss?://[a-zA-Z0-9.-]+(?::[0-9]+)?(?:/.*)?$\"
        }
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/relay.json\"
}"},
        {"sizeTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Size of the encrypted file in bytes\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"size\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[0-9]+$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/size.json\"
}"},
        {"subjectTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Conversation subject for a private room\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"subject\"
        },
        {
          \"type\": \"string\",
          \"minLength\": 1
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/subject.json\"
}"},
        {"thumbTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Thumbnail URL for the encrypted media\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"thumb\"
        },
        {
          \"type\": \"string\",
          \"format\": \"uri\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/thumb.json\"
}"},
        {"xTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Checksum of the encrypted file\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"x\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{64}$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/x.json\"
}"},
        {"kind16Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind16\",
  \"description\": \"Generic repost (NIP-18) for reposting events other than kind-1\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 16
        },
        \"content\": {
          \"type\": \"string\",
          \"description\": \"Stringified JSON of the reposted event (MAY be empty).\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"k\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^\\\\d+$\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include a k tag with the reposted kind as a string\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/16.json\"
}"},
        {"kind6Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind6\",
  \"description\": \"Repost of a kind-1 note (NIP-18)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 6
        },
        \"content\": {
          \"type\": \"string\",
          \"description\": \"Stringified JSON of the reposted note. MAY be empty (not recommended).\\nFor NIP-70-protected events, content SHOULD be empty.\\n\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"type\": \"array\",
                \"minItems\": 3,
                \"items\": [
                  {
                    \"const\": \"e\"
                  },
                  {
                    \"type\": \"string\",
                    \"pattern\": \"^[a-f0-9]{64}$\"
                  },
                  {
                    \"type\": \"string\",
                    \"pattern\": \"^(ws://|wss://).+$\"
                  }
                ]
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include an e tag with id and a relay URL\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/6.json\"
}"},
        {"kTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"k\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^\\\\d+$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/k.json\"
}"},
        {"qTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"description\": \"Quote tag for quote-reposts (NIP-18). Mirrors NIP-10 e-tag tuple without the mark argument.\\nStructure: [\\\"q\\\", <event-id or event address>, <relay-url>, <pubkey>?]\\n\",
      \"type\": \"array\",
      \"minItems\": 3,
      \"maxItems\": 4,
      \"items\": [
        {
          \"const\": \"q\"
        },
        {
          \"anyOf\": [
            {
              \"type\": \"string\",
              \"description\": \"event id (32-byte hex)\",
              \"pattern\": \"^[a-f0-9]{64}$\"
            },
            {
              \"type\": \"string\",
              \"description\": \"event address (kind:pubkey:identifier)\",
              \"pattern\": \"^\\\\d+:[a-f0-9]{64}:.+$\"
            }
          ]
        },
        {
          \"type\": \"string\",
          \"description\": \"relay URL (ws or wss)\",
          \"pattern\": \"^(ws://|wss://).+$\"
        },
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{64}$\"
            }
          ]
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/q.json\"
}"},
        {"kind1111Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1111\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1111.json\"
}"},
        {"ATagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"array\",
                  \"items\": {
                    \"type\": \"string\"
                  },
                  \"uniqueItems\": false
                }
              ]
            },
            {
              \"type\": \"array\",
              \"minItems\": 2,
              \"items\": [
                {
                  \"const\": \"a\"
                },
                {
                  \"type\": \"string\",
                  \"pattern\": \"^\\\\d+:[a-f0-9]{64}:.+$\"
                },
                {
                  \"type\": \"string\",
                  \"pattern\": \"^(ws://|wss://).+$\"
                }
              ],
              \"additionalItems\": true
            }
          ]
        }
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/_A.json\"
}"},
        {"ETagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"array\",
                  \"items\": {
                    \"type\": \"string\"
                  },
                  \"uniqueItems\": false
                }
              ]
            }
          ],
          \"oneOf\": [
            {
              \"type\": \"array\",
              \"minItems\": 4,
              \"maxItems\": 5,
              \"items\": [
                {
                  \"const\": \"e\"
                },
                {
                  \"type\": \"string\",
                  \"pattern\": \"^[a-f0-9]{64}$\"
                },
                {
                  \"anyOf\": [
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^(ws://|wss://).+$\"
                    },
                    {
                      \"type\": \"string\",
                      \"const\": \"\"
                    }
                  ]
                },
                {
                  \"type\": \"string\",
                  \"enum\": [
                    \"reply\",
                    \"root\"
                  ]
                },
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"additionalItems\": false
            },
            {
              \"type\": \"array\",
              \"minItems\": 2,
              \"maxItems\": 3,
              \"items\": [
                {
                  \"const\": \"e\"
                },
                {
                  \"type\": \"string\",
                  \"pattern\": \"^[a-f0-9]{64}$\"
                },
                {
                  \"type\": \"string\",
                  \"pattern\": \"^(ws://|wss://).+$\"
                }
              ],
              \"additionalItems\": false
            }
          ]
        }
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/_E.json\"
}"},
        {"KTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"array\",
                  \"items\": {
                    \"type\": \"string\"
                  },
                  \"uniqueItems\": false
                }
              ]
            },
            {
              \"type\": \"array\",
              \"minItems\": 2,
              \"items\": [
                {
                  \"const\": \"k\"
                },
                {
                  \"type\": \"string\",
                  \"pattern\": \"^\\\\d+$\"
                }
              ],
              \"additionalItems\": false
            }
          ]
        }
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/_K.json\"
}"},
        {"PTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"array\",
                  \"items\": {
                    \"type\": \"string\"
                  },
                  \"uniqueItems\": false
                }
              ]
            },
            {
              \"type\": \"array\",
              \"minItems\": 2,
              \"items\": [
                {
                  \"const\": \"p\"
                },
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                },
                {
                  \"title\": \"petname\",
                  \"type\": \"string\"
                }
              ],
              \"additionalItems\": false
            }
          ]
        }
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/_P.json\"
}"},
        {"kind30023Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind30023\",
  \"description\": \"Long-form Content (Article), NIP-23\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 30023
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"d\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"title\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include required tags: d, title\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/30023.json\"
}"},
        {"kind30024Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind30024\",
  \"description\": \"Long-form Content Draft, NIP-23\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 30024
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"d\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include required tag: d\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/30024.json\"
}"},
        {"publishedatTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"published_at\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^\\\\d+$\",
          \"description\": \"Unix timestamp in seconds (string) of first publication\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/published_at.json\"
}"},
        {"kind17Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind17\",
  \"description\": \"Reaction event referencing external content (NIP-25 + NIP-73)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 17
        },
        \"content\": {
          \"type\": \"string\",
          \"description\": \"Reaction marker such as \\\"+\\\", \\\"-\\\", or an emoji\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"minItems\": 1,
          \"items\": {
            \"allOf\": [
              {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"emoji\"
                    }
                  ]
                },
                \"then\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"title\": \"emojiTag\",
                      \"description\": \"Custom emoji resource reference for reactions (NIP-25 / NIP-30)\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 3,
                          \"maxItems\": 3,
                          \"items\": [
                            {
                              \"const\": \"emoji\"
                            },
                            {
                              \"type\": \"string\",
                              \"minLength\": 1,
                              \"pattern\": \"^[0-9A-Za-z_:+-]+$\",
                              \"description\": \"Shortcode identifying the emoji without surrounding colons\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^https?://.+\",
                              \"description\": \"HTTPS URL pointing to the emoji image\"
                            }
                          ],
                          \"errorMessage\": {
                            \"minItems\": \"emoji tag must contain ['emoji', <shortcode>, <https url>]\",
                            \"maxItems\": \"emoji tag must contain ['emoji', <shortcode>, <https url>]\"
                          }
                        }
                      ]
                    }
                  ]
                }
              }
            ]
          },
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"title\": \"externalContentTypeTag\",
                    \"description\": \"External content type identifier tag (NIP-73)\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"maxItems\": 3,
                        \"items\": [
                          {
                            \"const\": \"k\"
                          },
                          {
                            \"type\": \"string\",
                            \"minLength\": 1,
                            \"pattern\": \"^[A-Za-z0-9][A-Za-z0-9._+-]*(?::[A-Za-z0-9][A-Za-z0-9._+-]*)*$\",
                            \"description\": \"Type identifier for the external resource\"
                          },
                          {
                            \"type\": \"string\",
                            \"minLength\": 1,
                            \"description\": \"Optional subtype or hint for the external resource\"
                          }
                        ],
                        \"errorMessage\": {
                          \"minItems\": \"k tag must be ['k', <type>, ...]\"
                        }
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include at least one k tag describing the external content type\"
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"title\": \"externalContentIdentifierTag\",
                    \"description\": \"External content identifier tag (NIP-73)\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"maxItems\": 3,
                        \"items\": [
                          {
                            \"const\": \"i\"
                          },
                          {
                            \"type\": \"string\",
                            \"minLength\": 1,
                            \"description\": \"Identifier or URI for the external resource\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^https?://.+\",
                            \"description\": \"Optional URL pointing to the external resource\"
                          }
                        ],
                        \"errorMessage\": {
                          \"minItems\": \"i tag must be ['i', <identifier>, ...]\"
                        }
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include at least one i tag referencing the external content\"
              }
            }
          ]
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/17.json\"
}"},
        {"kind7Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind7\",
  \"description\": \"Reaction event referencing a nostr event (NIP-25)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 7
        },
        \"content\": {
          \"type\": \"string\",
          \"description\": \"Reaction marker such as '+', '-', an emoji, or a custom :shortcode:\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"minItems\": 1,
          \"items\": {
            \"allOf\": [
              {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"emoji\"
                    }
                  ]
                },
                \"then\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"title\": \"emojiTag\",
                      \"description\": \"Custom emoji resource reference for reactions (NIP-25 / NIP-30)\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 3,
                          \"maxItems\": 3,
                          \"items\": [
                            {
                              \"const\": \"emoji\"
                            },
                            {
                              \"type\": \"string\",
                              \"minLength\": 1,
                              \"pattern\": \"^[0-9A-Za-z_:+-]+$\",
                              \"description\": \"Shortcode identifying the emoji without surrounding colons\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^https?://.+\",
                              \"description\": \"HTTPS URL pointing to the emoji image\"
                            }
                          ],
                          \"errorMessage\": {
                            \"minItems\": \"emoji tag must contain ['emoji', <shortcode>, <https url>]\",
                            \"maxItems\": \"emoji tag must contain ['emoji', <shortcode>, <https url>]\"
                          }
                        }
                      ]
                    }
                  ]
                }
              }
            ]
          },
          \"contains\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"title\": \"reactionETag\",
                \"description\": \"Event reference tag for reaction events (NIP-25)\",
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"e\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^[a-f0-9]{64}$\"
                      }
                    ],
                    \"additionalItems\": {
                      \"anyOf\": [
                        {
                          \"type\": \"string\",
                          \"pattern\": \"^(ws://|wss://).+$\"
                        },
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{64}$\"
                            }
                          ]
                        },
                        {
                          \"type\": \"string\",
                          \"minLength\": 1
                        }
                      ]
                    },
                    \"errorMessage\": {
                      \"minItems\": \"e tag must include the event id\"
                    }
                  }
                ]
              }
            ]
          },
          \"allOf\": [
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"emoji\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"title\": \"emojiTag\",
                      \"description\": \"Custom emoji resource reference for reactions (NIP-25 / NIP-30)\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 3,
                          \"maxItems\": 3,
                          \"items\": [
                            {
                              \"const\": \"emoji\"
                            },
                            {
                              \"type\": \"string\",
                              \"minLength\": 1,
                              \"pattern\": \"^[0-9A-Za-z_:+-]+$\",
                              \"description\": \"Shortcode identifying the emoji without surrounding colons\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^https?://.+\",
                              \"description\": \"HTTPS URL pointing to the emoji image\"
                            }
                          ],
                          \"errorMessage\": {
                            \"minItems\": \"emoji tag must contain ['emoji', <shortcode>, <https url>]\",
                            \"maxItems\": \"emoji tag must contain ['emoji', <shortcode>, <https url>]\"
                          }
                        }
                      ]
                    }
                  ]
                }
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include an e tag referencing the reacted event\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/7.json\"
}"},
        {"ereactTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"reactionETag\",
  \"description\": \"Event reference tag for reaction events (NIP-25)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"e\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{64}$\"
        }
      ],
      \"additionalItems\": {
        \"anyOf\": [
          {
            \"type\": \"string\",
            \"pattern\": \"^(ws://|wss://).+$\"
          },
          {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"string\",
                \"pattern\": \"^[a-f0-9]{64}$\"
              }
            ]
          },
          {
            \"type\": \"string\",
            \"minLength\": 1
          }
        ]
      },
      \"errorMessage\": {
        \"minItems\": \"e tag must include the event id\"
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/e-react.json\"
}"},
        {"emojiTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"emojiTag\",
  \"description\": \"Custom emoji resource reference for reactions (NIP-25 / NIP-30)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 3,
      \"maxItems\": 3,
      \"items\": [
        {
          \"const\": \"emoji\"
        },
        {
          \"type\": \"string\",
          \"minLength\": 1,
          \"pattern\": \"^[0-9A-Za-z_:+-]+$\",
          \"description\": \"Shortcode identifying the emoji without surrounding colons\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^https?://.+\",
          \"description\": \"HTTPS URL pointing to the emoji image\"
        }
      ],
      \"errorMessage\": {
        \"minItems\": \"emoji tag must contain ['emoji', <shortcode>, <https url>]\",
        \"maxItems\": \"emoji tag must contain ['emoji', <shortcode>, <https url>]\"
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/emoji.json\"
}"},
        {"kind1985Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1985\",
  \"description\": \"Labeling event as defined by NIP-32\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 1985
        },
        \"tags\": {
          \"type\": \"array\",
          \"description\": \"Must include at least one label ('l') and one target tag (e, p, a, r, or t).\",
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"description\": \"Label tag (NIP-32). Second element is label value; optional third element 'mark' matches an 'L' tag in the same event.\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"l\"
                          },
                          {
                            \"type\": \"string\",
                            \"title\": \"label\",
                            \"description\": \"A short, meaningful label string.\"
                          },
                          {
                            \"type\": \"string\",
                            \"title\": \"mark\",
                            \"description\": \"Optional namespace mark; SHOULD match an 'L' tag value in the same event if present.\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"anyOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"allOf\": [
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"array\",
                                \"items\": {
                                  \"type\": \"string\"
                                },
                                \"uniqueItems\": false
                              }
                            ]
                          }
                        ],
                        \"oneOf\": [
                          {
                            \"type\": \"array\",
                            \"minItems\": 4,
                            \"maxItems\": 5,
                            \"items\": [
                              {
                                \"const\": \"e\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              },
                              {
                                \"anyOf\": [
                                  {
                                    \"type\": \"string\",
                                    \"pattern\": \"^(ws://|wss://).+$\"
                                  },
                                  {
                                    \"type\": \"string\",
                                    \"const\": \"\"
                                  }
                                ]
                              },
                              {
                                \"type\": \"string\",
                                \"enum\": [
                                  \"reply\",
                                  \"root\"
                                ]
                              },
                              {
                                \"allOf\": [
                                  {
                                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                    \"type\": \"string\",
                                    \"pattern\": \"^[a-f0-9]{64}$\"
                                  }
                                ]
                              }
                            ],
                            \"additionalItems\": false
                          },
                          {
                            \"type\": \"array\",
                            \"minItems\": 2,
                            \"maxItems\": 3,
                            \"items\": [
                              {
                                \"const\": \"e\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^(ws://|wss://).+$\"
                              }
                            ],
                            \"additionalItems\": false
                          }
                        ]
                      }
                    ]
                  },
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"allOf\": [
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"array\",
                                \"items\": {
                                  \"type\": \"string\"
                                },
                                \"uniqueItems\": false
                              }
                            ]
                          },
                          {
                            \"type\": \"array\",
                            \"minItems\": 2,
                            \"items\": [
                              {
                                \"const\": \"p\"
                              },
                              {
                                \"allOf\": [
                                  {
                                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                    \"type\": \"string\",
                                    \"pattern\": \"^[a-f0-9]{64}$\"
                                  }
                                ]
                              },
                              {
                                \"title\": \"petname\",
                                \"type\": \"string\"
                              }
                            ],
                            \"additionalItems\": false
                          }
                        ]
                      }
                    ]
                  },
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"allOf\": [
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"array\",
                                \"items\": {
                                  \"type\": \"string\"
                                },
                                \"uniqueItems\": false
                              }
                            ]
                          },
                          {
                            \"type\": \"array\",
                            \"minItems\": 2,
                            \"items\": [
                              {
                                \"const\": \"a\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^\\\\d+:[a-f0-9]{64}:.+$\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^(ws://|wss://).+$\"
                              }
                            ],
                            \"additionalItems\": true
                          }
                        ]
                      }
                    ]
                  },
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"allOf\": [
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"array\",
                                \"items\": {
                                  \"type\": \"string\"
                                },
                                \"uniqueItems\": false
                              }
                            ]
                          },
                          {
                            \"type\": \"array\",
                            \"minItems\": 2,
                            \"items\": [
                              {
                                \"const\": \"r\"
                              },
                              {
                                \"type\": \"string\"
                              }
                            ],
                            \"additionalItems\": true
                          }
                        ]
                      }
                    ]
                  },
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"allOf\": [
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"array\",
                                \"items\": {
                                  \"type\": \"string\"
                                },
                                \"uniqueItems\": false
                              }
                            ]
                          },
                          {
                            \"type\": \"array\",
                            \"minItems\": 2,
                            \"items\": [
                              {
                                \"const\": \"t\"
                              },
                              {
                                \"type\": \"string\"
                              }
                            ],
                            \"additionalItems\": true
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            }
          ]
        }
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1985.json\"
}"},
        {"LTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Label namespace tag (NIP-32). Second element is namespace or '#<target-tag>' marker.\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"L\"
        },
        {
          \"type\": \"string\",
          \"title\": \"namespace\",
          \"description\": \"A namespace identifier; may start with '#' to indicate label applies to the value of the target tag.\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/L.json\"
}"},
        {"lTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Label tag (NIP-32). Second element is label value; optional third element 'mark' matches an 'L' tag in the same event.\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"l\"
        },
        {
          \"type\": \"string\",
          \"title\": \"label\",
          \"description\": \"A short, meaningful label string.\"
        },
        {
          \"type\": \"string\",
          \"title\": \"mark\",
          \"description\": \"Optional namespace mark; SHOULD match an 'L' tag value in the same event if present.\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/l.json\"
}"},
        {"kind1617Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1617\",
  \"description\": \"NIP-34 patch event (git format-patch payload)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 1617
        },
        \"content\": {
          \"type\": \"string\",
          \"minLength\": 1,
          \"description\": \"Patch contents as produced by git format-patch\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"a\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^\\\\d+:[a-f0-9]{64}:.+$\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^(ws://|wss://).+$\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"commit\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"maxItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"commit\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{40}$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"parent-commit\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"maxItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"parent-commit\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{40}$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"commit-pgp-sig\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"maxItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"commit-pgp-sig\"
                            },
                            {
                              \"anyOf\": [
                                {
                                  \"type\": \"string\",
                                  \"const\": \"\"
                                },
                                {
                                  \"type\": \"string\",
                                  \"pattern\": \"^\\\\-\\\\-\\\\-\\\\-\\\\-BEGIN PGP SIGNATURE\\\\-\\\\-\\\\-\\\\-\\\\-[\\\\s\\\\S]*\\\\-\\\\-\\\\-\\\\-\\\\-END PGP SIGNATURE\\\\-\\\\-\\\\-\\\\-\\\\-$\"
                                }
                              ]
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"committer\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 5,
                          \"maxItems\": 5,
                          \"items\": [
                            {
                              \"const\": \"committer\"
                            },
                            {
                              \"type\": \"string\",
                              \"minLength\": 1
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[^\\\\s@]+@[^\\\\s@]+$\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^-?[0-9]+$\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^-?[0-9]+$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include required tag: a\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"content\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1617.json\"
}"},
        {"kind1621Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1621\",
  \"description\": \"NIP-34 issue event (markdown discussion thread)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 1621
        },
        \"content\": {
          \"type\": \"string\",
          \"minLength\": 1,
          \"description\": \"Issue body as Markdown text\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"a\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^\\\\d+:[a-f0-9]{64}:.+$\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^(ws://|wss://).+$\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"subject\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"description\": \"Conversation subject for a private room\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"subject\"
                            },
                            {
                              \"type\": \"string\",
                              \"minLength\": 1
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include required tag: a\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"content\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1621.json\"
}"},
        {"kind1630Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1630\",
  \"description\": \"NIP-34 status event indicating Open state\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 1630
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"description\": \"Reference to the root patch or issue event\",
                        \"minItems\": 4,
                        \"maxItems\": 4,
                        \"items\": [
                          {
                            \"const\": \"e\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{64}$\"
                          },
                          {
                            \"anyOf\": [
                              {
                                \"type\": \"string\",
                                \"const\": \"\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^(ws://|wss://).+$\"
                              }
                            ]
                          },
                          {
                            \"const\": \"root\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 4,
                  \"items\": [
                    {
                      \"const\": \"e\"
                    },
                    {
                      \"type\": \"string\"
                    },
                    {},
                    {
                      \"const\": \"reply\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"description\": \"Reference to an accepted revision root event\",
                          \"minItems\": 4,
                          \"maxItems\": 4,
                          \"items\": [
                            {
                              \"const\": \"e\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{64}$\"
                            },
                            {
                              \"anyOf\": [
                                {
                                  \"type\": \"string\",
                                  \"const\": \"\"
                                },
                                {
                                  \"type\": \"string\",
                                  \"pattern\": \"^(ws://|wss://).+$\"
                                }
                              ]
                            },
                            {
                              \"const\": \"reply\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"merge-commit\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"maxItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"merge-commit\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{40}$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"applied-as-commits\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"applied-as-commits\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{7,40}$\"
                            }
                          ],
                          \"additionalItems\": {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{7,40}$\"
                          }
                        }
                      ]
                    }
                  ]
                }
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include an e tag referencing the root event\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1630.json\"
}"},
        {"kind1631Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1631\",
  \"description\": \"NIP-34 status event indicating Applied / Merged / Resolved state\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 1631
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"description\": \"Reference to the root patch or issue event\",
                        \"minItems\": 4,
                        \"maxItems\": 4,
                        \"items\": [
                          {
                            \"const\": \"e\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{64}$\"
                          },
                          {
                            \"anyOf\": [
                              {
                                \"type\": \"string\",
                                \"const\": \"\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^(ws://|wss://).+$\"
                              }
                            ]
                          },
                          {
                            \"const\": \"root\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 4,
                  \"items\": [
                    {
                      \"const\": \"e\"
                    },
                    {
                      \"type\": \"string\"
                    },
                    {},
                    {
                      \"const\": \"reply\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"description\": \"Reference to an accepted revision root event\",
                          \"minItems\": 4,
                          \"maxItems\": 4,
                          \"items\": [
                            {
                              \"const\": \"e\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{64}$\"
                            },
                            {
                              \"anyOf\": [
                                {
                                  \"type\": \"string\",
                                  \"const\": \"\"
                                },
                                {
                                  \"type\": \"string\",
                                  \"pattern\": \"^(ws://|wss://).+$\"
                                }
                              ]
                            },
                            {
                              \"const\": \"reply\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"merge-commit\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"maxItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"merge-commit\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{40}$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"applied-as-commits\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"applied-as-commits\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{7,40}$\"
                            }
                          ],
                          \"additionalItems\": {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{7,40}$\"
                          }
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"commit\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"maxItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"commit\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{40}$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include an e tag referencing the root event\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1631.json\"
}"},
        {"kind1632Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1632\",
  \"description\": \"NIP-34 status event indicating Closed state\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 1632
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"description\": \"Reference to the root patch or issue event\",
                        \"minItems\": 4,
                        \"maxItems\": 4,
                        \"items\": [
                          {
                            \"const\": \"e\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{64}$\"
                          },
                          {
                            \"anyOf\": [
                              {
                                \"type\": \"string\",
                                \"const\": \"\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^(ws://|wss://).+$\"
                              }
                            ]
                          },
                          {
                            \"const\": \"root\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 4,
                  \"items\": [
                    {
                      \"const\": \"e\"
                    },
                    {
                      \"type\": \"string\"
                    },
                    {},
                    {
                      \"const\": \"reply\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"description\": \"Reference to an accepted revision root event\",
                          \"minItems\": 4,
                          \"maxItems\": 4,
                          \"items\": [
                            {
                              \"const\": \"e\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{64}$\"
                            },
                            {
                              \"anyOf\": [
                                {
                                  \"type\": \"string\",
                                  \"const\": \"\"
                                },
                                {
                                  \"type\": \"string\",
                                  \"pattern\": \"^(ws://|wss://).+$\"
                                }
                              ]
                            },
                            {
                              \"const\": \"reply\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"merge-commit\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"maxItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"merge-commit\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{40}$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"applied-as-commits\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"applied-as-commits\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{7,40}$\"
                            }
                          ],
                          \"additionalItems\": {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{7,40}$\"
                          }
                        }
                      ]
                    }
                  ]
                }
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include an e tag referencing the root event\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1632.json\"
}"},
        {"kind1633Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1633\",
  \"description\": \"NIP-34 status event indicating Draft state\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 1633
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"description\": \"Reference to the root patch or issue event\",
                        \"minItems\": 4,
                        \"maxItems\": 4,
                        \"items\": [
                          {
                            \"const\": \"e\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{64}$\"
                          },
                          {
                            \"anyOf\": [
                              {
                                \"type\": \"string\",
                                \"const\": \"\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^(ws://|wss://).+$\"
                              }
                            ]
                          },
                          {
                            \"const\": \"root\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 4,
                  \"items\": [
                    {
                      \"const\": \"e\"
                    },
                    {
                      \"type\": \"string\"
                    },
                    {},
                    {
                      \"const\": \"reply\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"description\": \"Reference to an accepted revision root event\",
                          \"minItems\": 4,
                          \"maxItems\": 4,
                          \"items\": [
                            {
                              \"const\": \"e\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{64}$\"
                            },
                            {
                              \"anyOf\": [
                                {
                                  \"type\": \"string\",
                                  \"const\": \"\"
                                },
                                {
                                  \"type\": \"string\",
                                  \"pattern\": \"^(ws://|wss://).+$\"
                                }
                              ]
                            },
                            {
                              \"const\": \"reply\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"merge-commit\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"maxItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"merge-commit\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{40}$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"applied-as-commits\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"applied-as-commits\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{7,40}$\"
                            }
                          ],
                          \"additionalItems\": {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{7,40}$\"
                          }
                        }
                      ]
                    }
                  ]
                }
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include an e tag referencing the root event\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1633.json\"
}"},
        {"kind30617Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind30617\",
  \"description\": \"NIP-34 repository announcement event\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 30617
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"d\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"name\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"maxItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"name\"
                            },
                            {
                              \"type\": \"string\",
                              \"minLength\": 1
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"description\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"description\"
                            },
                            {
                              \"type\": \"string\",
                              \"description\": \"JSON-encoded zap request event\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"web\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"description\": \"Repository browsing URLs\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"web\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^(https?://).+$\"
                            }
                          ],
                          \"additionalItems\": {
                            \"type\": \"string\",
                            \"pattern\": \"^(https?://).+$\"
                          }
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"clone\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"description\": \"Git clone endpoints\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"clone\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^(([a-z][a-z0-9+\\\\.-]*://)|git@)[^\\\\s]+$\"
                            }
                          ],
                          \"additionalItems\": {
                            \"type\": \"string\",
                            \"pattern\": \"^(([a-z][a-z0-9+\\\\.-]*://)|git@)[^\\\\s]+$\"
                          }
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"relays\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"relays\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^(ws://|wss://).+$\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"maintainers\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"description\": \"Recognized maintainers for the repository\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"maintainers\"
                            },
                            {
                              \"type\": \"string\",
                              \"minLength\": 1
                            }
                          ],
                          \"additionalItems\": {
                            \"type\": \"string\",
                            \"minLength\": 1
                          }
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"r\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"description\": \"Earliest unique commit identifier\",
                          \"minItems\": 3,
                          \"maxItems\": 3,
                          \"items\": [
                            {
                              \"const\": \"r\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{40}$\"
                            },
                            {
                              \"const\": \"euc\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include required tag: d\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/30617.json\"
}"},
        {"kind30618Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind30618\",
  \"description\": \"NIP-34 repository state announcement event\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 30618
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"d\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^refs/.*\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"description\": \"Git reference state entry\",
                          \"minItems\": 3,
                          \"items\": [
                            {
                              \"const\": \"ref\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^refs\\\\/(heads|tags)\\\\/[^\\\\s]+$\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{7,40}$\"
                            }
                          ],
                          \"additionalItems\": {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{7,40}$\"
                          }
                        }
                      ]
                    }
                  ]
                }
              }
            },
            {
              \"if\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"HEAD\"
                    }
                  ]
                }
              },
              \"then\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"description\": \"Repository HEAD reference\",
                          \"minItems\": 2,
                          \"maxItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"HEAD\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^ref: refs/heads/[^\\\\s]+$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include required tag: d\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/30618.json\"
}"},
        {"appliedascommitsTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"applied-as-commits\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{7,40}$\"
        }
      ],
      \"additionalItems\": {
        \"type\": \"string\",
        \"pattern\": \"^[a-f0-9]{7,40}$\"
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/applied-as-commits.json\"
}"},
        {"cloneTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Git clone endpoints\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"clone\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^(([a-z][a-z0-9+\\\\.-]*://)|git@)[^\\\\s]+$\"
        }
      ],
      \"additionalItems\": {
        \"type\": \"string\",
        \"pattern\": \"^(([a-z][a-z0-9+\\\\.-]*://)|git@)[^\\\\s]+$\"
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/clone.json\"
}"},
        {"commitTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"maxItems\": 2,
      \"items\": [
        {
          \"const\": \"commit\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{40}$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/commit.json\"
}"},
        {"commitpgpsigTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"maxItems\": 2,
      \"items\": [
        {
          \"const\": \"commit-pgp-sig\"
        },
        {
          \"anyOf\": [
            {
              \"type\": \"string\",
              \"const\": \"\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^\\\\-\\\\-\\\\-\\\\-\\\\-BEGIN PGP SIGNATURE\\\\-\\\\-\\\\-\\\\-\\\\-[\\\\s\\\\S]*\\\\-\\\\-\\\\-\\\\-\\\\-END PGP SIGNATURE\\\\-\\\\-\\\\-\\\\-\\\\-$\"
            }
          ]
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/commit-pgp-sig.json\"
}"},
        {"committerTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 5,
      \"maxItems\": 5,
      \"items\": [
        {
          \"const\": \"committer\"
        },
        {
          \"type\": \"string\",
          \"minLength\": 1
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[^\\\\s@]+@[^\\\\s@]+$\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^-?[0-9]+$\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^-?[0-9]+$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/committer.json\"
}"},
        {"erootTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Reference to the root patch or issue event\",
      \"minItems\": 4,
      \"maxItems\": 4,
      \"items\": [
        {
          \"const\": \"e\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{64}$\"
        },
        {
          \"anyOf\": [
            {
              \"type\": \"string\",
              \"const\": \"\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^(ws://|wss://).+$\"
            }
          ]
        },
        {
          \"const\": \"root\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/e-root.json\"
}"},
        {"estatusreplyTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Reference to an accepted revision root event\",
      \"minItems\": 4,
      \"maxItems\": 4,
      \"items\": [
        {
          \"const\": \"e\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{64}$\"
        },
        {
          \"anyOf\": [
            {
              \"type\": \"string\",
              \"const\": \"\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^(ws://|wss://).+$\"
            }
          ]
        },
        {
          \"const\": \"reply\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/e-status-reply.json\"
}"},
        {"headTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Repository HEAD reference\",
      \"minItems\": 2,
      \"maxItems\": 2,
      \"items\": [
        {
          \"const\": \"HEAD\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^ref: refs/heads/[^\\\\s]+$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/head.json\"
}"},
        {"maintainersTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Recognized maintainers for the repository\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"maintainers\"
        },
        {
          \"type\": \"string\",
          \"minLength\": 1
        }
      ],
      \"additionalItems\": {
        \"type\": \"string\",
        \"minLength\": 1
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/maintainers.json\"
}"},
        {"mergecommitTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"maxItems\": 2,
      \"items\": [
        {
          \"const\": \"merge-commit\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{40}$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/merge-commit.json\"
}"},
        {"nameTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"maxItems\": 2,
      \"items\": [
        {
          \"const\": \"name\"
        },
        {
          \"type\": \"string\",
          \"minLength\": 1
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/name.json\"
}"},
        {"parentcommitTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"maxItems\": 2,
      \"items\": [
        {
          \"const\": \"parent-commit\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{40}$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/parent-commit.json\"
}"},
        {"reucTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Earliest unique commit identifier\",
      \"minItems\": 3,
      \"maxItems\": 3,
      \"items\": [
        {
          \"const\": \"r\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{40}$\"
        },
        {
          \"const\": \"euc\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/r-euc.json\"
}"},
        {"refTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Git reference state entry\",
      \"minItems\": 3,
      \"items\": [
        {
          \"const\": \"ref\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^refs\\\\/(heads|tags)\\\\/[^\\\\s]+$\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{7,40}$\"
        }
      ],
      \"additionalItems\": {
        \"type\": \"string\",
        \"pattern\": \"^[a-f0-9]{7,40}$\"
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/ref.json\"
}"},
        {"webTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Repository browsing URLs\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"web\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^(https?://).+$\"
        }
      ],
      \"additionalItems\": {
        \"type\": \"string\",
        \"pattern\": \"^(https?://).+$\"
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/web.json\"
}"},
        {"contentwarningTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Content warning tag (NIP-36). Optional reason as second element.\",
      \"minItems\": 1,
      \"items\": [
        {
          \"const\": \"content-warning\"
        },
        {
          \"type\": \"string\",
          \"title\": \"reason\",
          \"description\": \"Optional human-readable reason for the content warning\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/content-warning.json\"
}"},
        {"kind30315Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind30315\",
  \"description\": \"User Status event (addressable, NIP-38)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 30315
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"contains\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"d\"
                      },
                      {
                        \"type\": \"string\",
                        \"minLength\": 1
                      }
                    ],
                    \"additionalItems\": true
                  }
                ]
              }
            ]
          },
          \"errorMessage\": {
            \"contains\": \"tags must include a d tag identifying the user status type\"
          },
          \"allOf\": [
            {
              \"not\": {
                \"contains\": {
                  \"not\": true,
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"maxItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"expiration\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[0-9]+$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            }
          ]
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/30315.json\"
}"},
        {"expirationTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"maxItems\": 2,
      \"items\": [
        {
          \"const\": \"expiration\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[0-9]+$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/expiration.json\"
}"},
        {"statustypeTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"d\"
        },
        {
          \"type\": \"string\",
          \"minLength\": 1
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/status-type.json\"
}"},
        {"clientAuthSchema", "{
  \"type\": \"array\",
  \"title\": \"Client Authentication Message\",
  \"description\": \"Client-sent AUTH message containing a signed NIP-42 authentication event\",
  \"items\": [
    {
      \"const\": \"AUTH\"
    },
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"title\": \"kind22242\",
          \"description\": \"Ephemeral authentication event defined by NIP-42\",
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema\",
                  \"type\": \"object\",
                  \"properties\": {
                    \"content\": {
                      \"type\": \"string\",
                      \"errorMessage\": \"content must be a string\",
                      \"description\": \"The content of the note\"
                    },
                    \"created_at\": {
                      \"type\": \"integer\",
                      \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
                      \"description\": \"The timestamp of the note creation\"
                    },
                    \"id\": {
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{64}$\"
                            }
                          ]
                        }
                      ],
                      \"errorMessage\": \"id must be a valid hash\",
                      \"description\": \"The id is a hash derived as specified in NIP-01\"
                    },
                    \"kind\": {
                      \"type\": \"integer\"
                    },
                    \"pubkey\": {
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{64}$\"
                            }
                          ]
                        }
                      ],
                      \"errorMessage\": \"pubkey must be a secp256k1 public key\",
                      \"description\": \"The public key of the note's author\"
                    },
                    \"sig\": {
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{128}$\",
                      \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
                      \"description\": \"The cryptographic signature of the note\"
                    },
                    \"tags\": {
                      \"type\": \"array\",
                      \"errorMessage\": \"tags must be an array of valid tag tuples\",
                      \"description\": \"The tags of the note\",
                      \"items\": {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      }
                    }
                  },
                  \"required\": [
                    \"content\",
                    \"created_at\",
                    \"id\",
                    \"kind\",
                    \"pubkey\",
                    \"sig\",
                    \"tags\"
                  ],
                  \"additionalProperties\": false
                }
              ]
            },
            {
              \"type\": \"object\",
              \"properties\": {
                \"kind\": {
                  \"const\": 22242,
                  \"description\": \"Kind 22242 identifies an authentication event\"
                },
                \"tags\": {
                  \"type\": \"array\",
                  \"items\": {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  \"allOf\": [
                    {
                      \"contains\": {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"allOf\": [
                              {
                                \"allOf\": [
                                  {
                                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                    \"allOf\": [
                                      {
                                        \"allOf\": [
                                          {
                                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                            \"type\": \"array\",
                                            \"items\": {
                                              \"type\": \"string\"
                                            },
                                            \"uniqueItems\": false
                                          }
                                        ]
                                      },
                                      {
                                        \"type\": \"array\",
                                        \"minItems\": 2,
                                        \"items\": [
                                          {
                                            \"const\": \"relay\"
                                          },
                                          {
                                            \"type\": \"string\",
                                            \"pattern\": \"^(ws://|wss://).+$\"
                                          }
                                        ],
                                        \"additionalItems\": false
                                      }
                                    ]
                                  }
                                ]
                              },
                              {
                                \"type\": \"array\",
                                \"description\": \"Relay endpoint that issued the NIP-42 authentication challenge\",
                                \"errorMessage\": \"relay tag must include a valid ws or wss URL and cannot contain extra fields\"
                              }
                            ]
                          }
                        ]
                      },
                      \"errorMessage\": {
                        \"contains\": \"tags must include a relay tag identifying the authenticating relay\"
                      }
                    },
                    {
                      \"contains\": {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"allOf\": [
                              {
                                \"allOf\": [
                                  {
                                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                    \"type\": \"array\",
                                    \"items\": {
                                      \"type\": \"string\"
                                    },
                                    \"uniqueItems\": false
                                  }
                                ]
                              },
                              {
                                \"type\": \"array\",
                                \"description\": \"Authentication challenge provided by the relay\",
                                \"minItems\": 2,
                                \"items\": [
                                  {
                                    \"const\": \"challenge\"
                                  },
                                  {
                                    \"type\": \"string\",
                                    \"minLength\": 1
                                  }
                                ],
                                \"additionalItems\": false,
                                \"errorMessage\": {
                                  \"minItems\": \"challenge tag must include the relay-provided string\",
                                  \"additionalItems\": \"challenge tag accepts only the name and challenge value\"
                                }
                              }
                            ]
                          }
                        ]
                      },
                      \"errorMessage\": {
                        \"contains\": \"tags must include a challenge tag with the relay-provided challenge string\"
                      }
                    }
                  ]
                }
              },
              \"required\": [
                \"kind\",
                \"tags\"
              ]
            }
          ]
        }
      ]
    }
  ],
  \"minItems\": 2,
  \"maxItems\": 2,
  \"$id\": \"https://nostrability.github.io/schemata/message/AUTH.json\"
}"},
        {"relayAuthSchema", "{
  \"type\": \"array\",
  \"title\": \"Relay Authentication Challenge\",
  \"description\": \"Relay-initiated AUTH message carrying the challenge the client must sign\",
  \"items\": [
    {
      \"const\": \"AUTH\"
    },
    {
      \"type\": \"string\",
      \"description\": \"Challenge string generated by the relay\",
      \"minLength\": 1
    }
  ],
  \"minItems\": 2,
  \"maxItems\": 2,
  \"$id\": \"https://nostrability.github.io/schemata/message/nip-40_AUTH.json\"
}"},
        {"kind22242Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind22242\",
  \"description\": \"Ephemeral authentication event defined by NIP-42\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 22242,
          \"description\": \"Kind 22242 identifies an authentication event\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"allOf\": [
                              {
                                \"allOf\": [
                                  {
                                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                    \"type\": \"array\",
                                    \"items\": {
                                      \"type\": \"string\"
                                    },
                                    \"uniqueItems\": false
                                  }
                                ]
                              },
                              {
                                \"type\": \"array\",
                                \"minItems\": 2,
                                \"items\": [
                                  {
                                    \"const\": \"relay\"
                                  },
                                  {
                                    \"type\": \"string\",
                                    \"pattern\": \"^(ws://|wss://).+$\"
                                  }
                                ],
                                \"additionalItems\": false
                              }
                            ]
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"description\": \"Relay endpoint that issued the NIP-42 authentication challenge\",
                        \"errorMessage\": \"relay tag must include a valid ws or wss URL and cannot contain extra fields\"
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include a relay tag identifying the authenticating relay\"
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"description\": \"Authentication challenge provided by the relay\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"challenge\"
                          },
                          {
                            \"type\": \"string\",
                            \"minLength\": 1
                          }
                        ],
                        \"additionalItems\": false,
                        \"errorMessage\": {
                          \"minItems\": \"challenge tag must include the relay-provided string\",
                          \"additionalItems\": \"challenge tag accepts only the name and challenge value\"
                        }
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include a challenge tag with the relay-provided challenge string\"
              }
            }
          ]
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/22242.json\"
}"},
        {"challengeTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"description\": \"Authentication challenge provided by the relay\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"challenge\"
        },
        {
          \"type\": \"string\",
          \"minLength\": 1
        }
      ],
      \"additionalItems\": false,
      \"errorMessage\": {
        \"minItems\": \"challenge tag must include the relay-provided string\",
        \"additionalItems\": \"challenge tag accepts only the name and challenge value\"
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/challenge.json\"
}"},
        {"kind31922Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind31922\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 31922
        },
        \"tags\": {
          \"type\": \"array\",
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"d\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"title\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"start\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^[0-9]{4}-[0-9]{2}-[0-9]{2}$\"
                      }
                    ],
                    \"additionalItems\": true
                  }
                ]
              }
            }
          ]
        }
      },
      \"allOf\": [
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"summary\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"summary\"
                            },
                            {
                              \"type\": \"string\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"image\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"image\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^(https?://).+$\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"location\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"location\"
                            },
                            {
                              \"type\": \"string\",
                              \"description\": \"Location description, address, coordinates, or URL\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"g\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"g\"
                            },
                            {
                              \"type\": \"string\",
                              \"description\": \"Lowercase geohash\",
                              \"pattern\": \"^[0-9bcdefghjkmnpqrstuvwxyz]+\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"p\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"p\"
                            },
                            {
                              \"allOf\": [
                                {
                                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                  \"type\": \"string\",
                                  \"pattern\": \"^[a-f0-9]{64}$\"
                                }
                              ]
                            },
                            {
                              \"title\": \"petname\",
                              \"type\": \"string\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"t\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"t\"
                            },
                            {
                              \"type\": \"string\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"r\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"r\"
                            },
                            {
                              \"type\": \"string\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"end\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"allOf\": [
                        {
                          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                          \"type\": \"array\",
                          \"items\": {
                            \"type\": \"string\"
                          },
                          \"uniqueItems\": false
                        }
                      ]
                    },
                    {
                      \"type\": \"array\",
                      \"minItems\": 2,
                      \"items\": [
                        {
                          \"const\": \"end\"
                        },
                        {
                          \"type\": \"string\",
                          \"pattern\": \"^[0-9]{4}-[0-9]{2}-[0-9]{2}$\"
                        }
                      ],
                      \"additionalItems\": true
                    }
                  ]
                }
              }
            }
          }
        }
      ],
      \"additionalProperties\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/31922.json\"
}"},
        {"kind31923Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind31923\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 31923
        },
        \"tags\": {
          \"type\": \"array\",
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"d\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"title\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"start\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^[0-9]+$\"
                      }
                    ],
                    \"additionalItems\": true
                  }
                ]
              }
            }
          ]
        }
      },
      \"allOf\": [
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"summary\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"summary\"
                            },
                            {
                              \"type\": \"string\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"image\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"image\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^(https?://).+$\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"location\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"location\"
                            },
                            {
                              \"type\": \"string\",
                              \"description\": \"Location description, address, coordinates, or URL\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"g\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"g\"
                            },
                            {
                              \"type\": \"string\",
                              \"description\": \"Lowercase geohash\",
                              \"pattern\": \"^[0-9bcdefghjkmnpqrstuvwxyz]+\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"p\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"p\"
                            },
                            {
                              \"allOf\": [
                                {
                                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                  \"type\": \"string\",
                                  \"pattern\": \"^[a-f0-9]{64}$\"
                                }
                              ]
                            },
                            {
                              \"title\": \"petname\",
                              \"type\": \"string\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"t\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"t\"
                            },
                            {
                              \"type\": \"string\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"r\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"r\"
                            },
                            {
                              \"type\": \"string\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"end\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"allOf\": [
                        {
                          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                          \"type\": \"array\",
                          \"items\": {
                            \"type\": \"string\"
                          },
                          \"uniqueItems\": false
                        }
                      ]
                    },
                    {
                      \"type\": \"array\",
                      \"minItems\": 2,
                      \"items\": [
                        {
                          \"const\": \"end\"
                        },
                        {
                          \"type\": \"string\",
                          \"pattern\": \"^[0-9]+$\"
                        }
                      ],
                      \"additionalItems\": true
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"start_tzid\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"start_tzid\"
                            },
                            {
                              \"type\": \"string\",
                              \"description\": \"IANA Time Zone Database identifier\",
                              \"pattern\": \"^[A-Za-z0-9_]+(?:\\\\/[A-Za-z0-9_+\\\\-]+)*$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"end_tzid\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"end_tzid\"
                            },
                            {
                              \"type\": \"string\",
                              \"description\": \"IANA Time Zone Database identifier\",
                              \"pattern\": \"^[A-Za-z0-9_\\\\-+]+(?:\\\\/[A-Za-z0-9_\\\\-+]+)*$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        }
      ],
      \"additionalProperties\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/31923.json\"
}"},
        {"kind31924Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind31924\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 31924
        },
        \"tags\": {
          \"type\": \"array\",
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"d\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"title\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            }
          ]
        }
      },
      \"allOf\": [
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"a\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"allOf\": [
                        {
                          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                          \"type\": \"array\",
                          \"items\": {
                            \"type\": \"string\"
                          },
                          \"uniqueItems\": false
                        }
                      ]
                    },
                    {
                      \"type\": \"array\",
                      \"minItems\": 2,
                      \"items\": [
                        {
                          \"const\": \"a\"
                        },
                        {
                          \"type\": \"string\",
                          \"pattern\": \"^(31922|31923):[a-f0-9]{64}:.+$\"
                        }
                      ],
                      \"additionalItems\": true
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"summary\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"summary\"
                            },
                            {
                              \"type\": \"string\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"image\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"image\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^(https?://).+$\"
                            }
                          ],
                          \"additionalItems\": true
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        }
      ],
      \"additionalProperties\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/31924.json\"
}"},
        {"kind31925Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind31925\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 31925
        },
        \"tags\": {
          \"type\": \"array\",
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"a\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^(31922|31923):[a-f0-9]{64}:.+$\"
                      }
                    ],
                    \"additionalItems\": true
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"d\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"status\"
                          },
                          {
                            \"type\": \"string\",
                            \"enum\": [
                              \"accepted\",
                              \"declined\",
                              \"tentative\"
                            ]
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            }
          ]
        }
      },
      \"allOf\": [
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"status\"
                    },
                    {
                      \"type\": \"string\",
                      \"const\": \"declined\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"not\": {
              \"properties\": {
                \"tags\": {
                  \"contains\": {
                    \"type\": \"array\",
                    \"minItems\": 1,
                    \"items\": [
                      {
                        \"const\": \"fb\"
                      }
                    ]
                  }
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"fb\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"fb\"
                            },
                            {
                              \"type\": \"string\",
                              \"enum\": [
                                \"free\",
                                \"busy\"
                              ]
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"e\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        }
                      ],
                      \"oneOf\": [
                        {
                          \"type\": \"array\",
                          \"minItems\": 4,
                          \"maxItems\": 5,
                          \"items\": [
                            {
                              \"const\": \"e\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{64}$\"
                            },
                            {
                              \"anyOf\": [
                                {
                                  \"type\": \"string\",
                                  \"pattern\": \"^(ws://|wss://).+$\"
                                },
                                {
                                  \"type\": \"string\",
                                  \"const\": \"\"
                                }
                              ]
                            },
                            {
                              \"type\": \"string\",
                              \"enum\": [
                                \"reply\",
                                \"root\"
                              ]
                            },
                            {
                              \"allOf\": [
                                {
                                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                  \"type\": \"string\",
                                  \"pattern\": \"^[a-f0-9]{64}$\"
                                }
                              ]
                            }
                          ],
                          \"additionalItems\": false
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"maxItems\": 3,
                          \"items\": [
                            {
                              \"const\": \"e\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{64}$\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^(ws://|wss://).+$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        },
        {
          \"if\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"type\": \"array\",
                  \"minItems\": 1,
                  \"items\": [
                    {
                      \"const\": \"p\"
                    }
                  ]
                }
              }
            }
          },
          \"then\": {
            \"properties\": {
              \"tags\": {
                \"contains\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"p\"
                            },
                            {
                              \"allOf\": [
                                {
                                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                  \"type\": \"string\",
                                  \"pattern\": \"^[a-f0-9]{64}$\"
                                }
                              ]
                            },
                            {
                              \"title\": \"petname\",
                              \"type\": \"string\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            }
          }
        }
      ],
      \"additionalProperties\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/31925.json\"
}"},
        {"endtzidTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"end_tzid\"
        },
        {
          \"type\": \"string\",
          \"description\": \"IANA Time Zone Database identifier\",
          \"pattern\": \"^[A-Za-z0-9_\\\\-+]+(?:\\\\/[A-Za-z0-9_\\\\-+]+)*$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/end_tzid.json\"
}"},
        {"fbTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"fb\"
        },
        {
          \"type\": \"string\",
          \"enum\": [
            \"free\",
            \"busy\"
          ]
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/fb.json\"
}"},
        {"gTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"g\"
        },
        {
          \"type\": \"string\",
          \"description\": \"Lowercase geohash\",
          \"pattern\": \"^[0-9bcdefghjkmnpqrstuvwxyz]+\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/g.json\"
}"},
        {"locationTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"location\"
        },
        {
          \"type\": \"string\",
          \"description\": \"Location description, address, coordinates, or URL\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/location.json\"
}"},
        {"starttzidTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"start_tzid\"
        },
        {
          \"type\": \"string\",
          \"description\": \"IANA Time Zone Database identifier\",
          \"pattern\": \"^[A-Za-z0-9_]+(?:\\\\/[A-Za-z0-9_+\\\\-]+)*$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/start_tzid.json\"
}"},
        {"statusTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"status\"
        },
        {
          \"type\": \"string\",
          \"enum\": [
            \"accepted\",
            \"declined\",
            \"tentative\"
          ]
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/status.json\"
}"},
        {"kind10312Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind10312\",
  \"description\": \"Room Presence Event (replaceable, NIP-53)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 10312
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"contains\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"a\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^30312:[a-f0-9]{64}:.+$\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^(ws://|wss://).+$\"
                      }
                    ],
                    \"additionalItems\": true
                  }
                ]
              }
            ]
          },
          \"errorMessage\": {
            \"contains\": \"tags must include an a tag referencing the room (30312)\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/10312.json\"
}"},
        {"kind1311Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1311\",
  \"description\": \"Live Chat Message for Live Activities (NIP-53)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 1311
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"contains\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"a\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^30311:[a-f0-9]{64}:.+$\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^(ws://|wss://).+$\"
                      }
                    ],
                    \"additionalItems\": true
                  }
                ]
              }
            ]
          },
          \"errorMessage\": {
            \"contains\": \"tags must include an a tag referencing the live activity (30311)\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1311.json\"
}"},
        {"kind30311Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind30311\",
  \"description\": \"Live Streaming Event (addressable, NIP-53)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 30311
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"contains\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"d\"
                      },
                      {
                        \"type\": \"string\"
                      }
                    ],
                    \"additionalItems\": true
                  }
                ]
              }
            ]
          },
          \"errorMessage\": {
            \"contains\": \"tags must include at least one d tag (unique identifier)\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/30311.json\"
}"},
        {"kind30312Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind30312\",
  \"description\": \"Meeting Space Event (Space Host, NIP-53)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 30312
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"d\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"room\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"status\"
                          },
                          {
                            \"type\": \"string\",
                            \"enum\": [
                              \"open\",
                              \"private\",
                              \"closed\"
                            ]
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"service\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^(https?://).+$\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"p\"
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          },
                          {
                            \"title\": \"petname\",
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include required tags: d, room, status, service, and at least one p tag\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/30312.json\"
}"},
        {"kind30313Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind30313\",
  \"description\": \"Meeting Room Event (Scheduled/Ongoing meeting, NIP-53)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 30313
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"d\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"a\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^30312:[a-f0-9]{64}:.+$\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^(ws://|wss://).+$\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"title\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"starts\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[0-9]+$\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"status\"
                          },
                          {
                            \"type\": \"string\",
                            \"enum\": [
                              \"planned\",
                              \"live\",
                              \"ended\"
                            ]
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include required tags: d, a (room reference), title, starts, status\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/30313.json\"
}"},
        {"aliveTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"a\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^30311:[a-f0-9]{64}:.+$\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^(ws://|wss://).+$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/a-live.json\"
}"},
        {"aroomTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"a\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^30312:[a-f0-9]{64}:.+$\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^(ws://|wss://).+$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/a-room.json\"
}"},
        {"currentparticipantsTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"current_participants\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[0-9]+$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/current_participants.json\"
}"},
        {"endpointTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"endpoint\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^(https?://).+$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/endpoint.json\"
}"},
        {"endsTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"ends\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[0-9]+$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/ends.json\"
}"},
        {"handTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"hand\"
        },
        {
          \"type\": \"string\",
          \"enum\": [
            \"1\"
          ]
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/hand.json\"
}"},
        {"imageTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"image\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^(https?://).+$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/image.json\"
}"},
        {"pinnedTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"pinned\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{64}$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/pinned.json\"
}"},
        {"recordingTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"recording\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^(https?://|rtmp://|ws://|wss://).+$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/recording.json\"
}"},
        {"relaysTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"relays\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^(ws://|wss://).+$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/relays.json\"
}"},
        {"roomTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"room\"
        },
        {
          \"type\": \"string\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/room.json\"
}"},
        {"serviceTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"service\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^(https?://).+$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/service.json\"
}"},
        {"startsTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"starts\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[0-9]+$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/starts.json\"
}"},
        {"statusliveTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"status\"
        },
        {
          \"type\": \"string\",
          \"enum\": [
            \"planned\",
            \"live\",
            \"ended\"
          ]
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/status-live.json\"
}"},
        {"statusroomTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"status\"
        },
        {
          \"type\": \"string\",
          \"enum\": [
            \"open\",
            \"private\",
            \"closed\"
          ]
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/status-room.json\"
}"},
        {"streamingTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"streaming\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^(https?://|rtmp://|ws://|wss://).+$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/streaming.json\"
}"},
        {"summaryTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"summary\"
        },
        {
          \"type\": \"string\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/summary.json\"
}"},
        {"titleTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"title\"
        },
        {
          \"type\": \"string\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/title.json\"
}"},
        {"totalparticipantsTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"total_participants\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[0-9]+$\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/total_participants.json\"
}"},
        {"kind1984Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1984\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 1984
        },
        \"tags\": {
          \"type\": \"array\",
          \"allOf\": [
            {
              \"contains\": {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 3,
                    \"items\": [
                      {
                        \"const\": \"p\"
                      },
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{64}$\"
                          }
                        ]
                      },
                      {
                        \"type\": \"string\",
                        \"enum\": [
                          \"nudity\",
                          \"malware\",
                          \"profanity\",
                          \"illegal\",
                          \"spam\",
                          \"impersonation\",
                          \"other\"
                        ]
                      }
                    ],
                    \"additionalItems\": true
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"anyOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 3,
                        \"items\": [
                          {
                            \"const\": \"p\"
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          },
                          {
                            \"type\": \"string\",
                            \"enum\": [
                              \"nudity\",
                              \"malware\",
                              \"profanity\",
                              \"illegal\",
                              \"spam\",
                              \"impersonation\",
                              \"other\"
                            ]
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  },
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 3,
                        \"items\": [
                          {
                            \"const\": \"e\"
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          },
                          {
                            \"type\": \"string\",
                            \"enum\": [
                              \"nudity\",
                              \"malware\",
                              \"profanity\",
                              \"illegal\",
                              \"spam\",
                              \"impersonation\",
                              \"other\"
                            ]
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  },
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 3,
                        \"items\": [
                          {
                            \"const\": \"x\"
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          },
                          {
                            \"type\": \"string\",
                            \"enum\": [
                              \"nudity\",
                              \"malware\",
                              \"profanity\",
                              \"illegal\",
                              \"spam\",
                              \"impersonation\",
                              \"other\"
                            ]
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            }
          ]
        }
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1984.json\"
}"},
        {"serverTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"server\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^https?://\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/server.json\"
}"},
        {"kind9734Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind9734\",
  \"description\": \"NIP-57 Zap Request event\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 9734
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"relays\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^(ws://|wss://).+$\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include a relays tag with one or more relay URLs\"
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"p\"
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          },
                          {
                            \"title\": \"petname\",
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include exactly one p tag for the recipient (cannot enforce count in draft-07)\"
              }
            }
          ]
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/9734.json\"
}"},
        {"kind9735Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind9735\",
  \"description\": \"NIP-57 Zap Receipt event\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 9735
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"p\"
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          },
                          {
                            \"title\": \"petname\",
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include a p tag for the zap recipient\"
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"bolt11\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^ln[a-z0-9]+[02-9ac-hj-np-z]*1[02-9ac-hj-np-z]+$\",
                            \"description\": \"Bolt11 invoice string\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include a bolt11 tag with the invoice\"
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"description\"
                          },
                          {
                            \"type\": \"string\",
                            \"description\": \"JSON-encoded zap request event\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"tags must include a description tag (JSON-encoded zap request)\"
              }
            }
          ]
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/9735.json\"
}"},
        {"amountTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"amount\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[0-9]+$\",
          \"description\": \"Amount in millisats, as a decimal string\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/amount.json\"
}"},
        {"bolt11TagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"bolt11\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^ln[a-z0-9]+[02-9ac-hj-np-z]*1[02-9ac-hj-np-z]+$\",
          \"description\": \"Bolt11 invoice string\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/bolt11.json\"
}"},
        {"descriptionTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"description\"
        },
        {
          \"type\": \"string\",
          \"description\": \"JSON-encoded zap request event\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/description.json\"
}"},
        {"lnurlTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"lnurl\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^lnurl1[02-9ac-hj-np-z]+$\",
          \"description\": \"Bech32-encoded lnurl with 'lnurl1' prefix (bech32 character set, excludes 1, b, i, o)\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/lnurl.json\"
}"},
        {"preimageTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"preimage\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-fA-F0-9]{64}$\",
          \"description\": \"Payment preimage (32-byte hex)\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/preimage.json\"
}"},
        {"kind1059Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1059\",
  \"description\": \"Gift wrap event containing encrypted seal (NIP-59)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 1059,
          \"description\": \"Kind 1059 identifies a gift wrap containing an encrypted seal\"
        },
        \"pubkey\": {
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"string\",
                  \"pattern\": \"^[a-f0-9]{64}$\"
                }
              ]
            }
          ],
          \"description\": \"Ephemeral public key (not the sender's real pubkey)\"
        },
        \"content\": {
          \"type\": \"string\",
          \"minLength\": 1,
          \"description\": \"NIP-44 encrypted JSON of the seal event\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"p\"
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          },
                          {
                            \"title\": \"petname\",
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include exactly one p tag identifying the recipient\"
          }
        }
      },
      \"required\": [
        \"kind\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1059.json\"
}"},
        {"kind13Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind13\",
  \"description\": \"Seal event containing encrypted rumor (NIP-59)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 13,
          \"description\": \"Kind 13 identifies a seal containing an encrypted rumor\"
        },
        \"content\": {
          \"type\": \"string\",
          \"minLength\": 1,
          \"description\": \"NIP-44 encrypted JSON of the rumor event\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"maxItems\": 0,
          \"description\": \"Seals MUST NOT have any tags to avoid metadata leakage\",
          \"errorMessage\": \"seals must not contain any tags\"
        }
      },
      \"required\": [
        \"kind\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/13.json\"
}"},
        {"kind10019Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind10019\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 10019
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"relay\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^(ws://|wss://).+$\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"maxItems\": 3,
                        \"items\": [
                          {
                            \"const\": \"mint\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^https?://.+$\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"pubkey\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{64}$\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            }
          ]
        }
      },
      \"required\": [
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/10019.json\"
}"},
        {"kind7376Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind7376\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 7376
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 4,
                        \"maxItems\": 4,
                        \"items\": [
                          {
                            \"const\": \"e\"
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^((ws://|wss://).+)?$\"
                          },
                          {
                            \"const\": \"redeemed\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"p\"
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          },
                          {
                            \"title\": \"petname\",
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            }
          ]
        }
      },
      \"required\": [
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/7376.json\"
}"},
        {"kind9321Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind9321\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 9321
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"proof\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"u\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^https?://.+$\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"p\"
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          },
                          {
                            \"title\": \"petname\",
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            }
          ]
        }
      },
      \"required\": [
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/9321.json\"
}"},
        {"eredeemedTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 4,
      \"maxItems\": 4,
      \"items\": [
        {
          \"const\": \"e\"
        },
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{64}$\"
            }
          ]
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^((ws://|wss://).+)?$\"
        },
        {
          \"const\": \"redeemed\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/e-redeemed.json\"
}"},
        {"mintTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"maxItems\": 3,
      \"items\": [
        {
          \"const\": \"mint\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^https?://.+$\"
        },
        {
          \"type\": \"string\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/mint.json\"
}"},
        {"proofTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"proof\"
        },
        {
          \"type\": \"string\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/proof.json\"
}"},
        {"pubkeyTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"pubkey\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{64}$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/pubkey.json\"
}"},
        {"uTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"u\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^https?://.+$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/u.json\"
}"},
        {"kind10002Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind10002\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"r\"
                      },
                      {
                        \"type\": \"string\"
                      }
                    ],
                    \"additionalItems\": true
                  }
                ]
              }
            ]
          },
          \"additionalItems\": false,
          \"minItems\": 1,
          \"errorMessage\": {
            \"type\": \"tags must be an array of r tags\",
            \"minItems\": \"tags array must have at least one r tag\"
          }
        }
      },
      \"required\": [
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/10002.json\"
}"},
        {"rTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"r\"
        },
        {
          \"type\": \"string\"
        }
      ],
      \"additionalItems\": true
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/r.json\"
}"},
        {"kind20Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind20\",
  \"description\": \"Picture-first event defined by NIP-68\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 20,
          \"errorMessage\": \"kind must equal 20\"
        },
        \"tags\": {
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"title\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"title\": \"imeta tag\",
                    \"description\": \"NIP-68 metadata describing an image attachment\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"imeta\"
                          },
                          {
                            \"anyOf\": [
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^url https?://\\\\S+$\",
                                \"description\": \"Primary URL where the image is hosted\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^m (image/(apng|avif|gif|jpeg|png|webp))$\",
                                \"description\": \"MIME media type for the image\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^blurhash .+$\",
                                \"description\": \"Blurhash string for low-resolution previews\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^dim [0-9]{1,5}x[0-9]{1,5}$\",
                                \"description\": \"Image dimensions in WIDTHxHEIGHT format\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^alt .+$\",
                                \"description\": \"Human-readable alt text describing the image\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^x [a-f0-9]{64}$\",
                                \"description\": \"SHA-256 hash of the image as defined in NIP-94\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^fallback https?://\\\\S+$\",
                                \"description\": \"Fallback URL for alternate hosting\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^annotate-user [a-f0-9]{64}:[0-9]+(?:\\\\.[0-9]+)?:[0-9]+(?:\\\\.[0-9]+)?$\",
                                \"description\": \"User annotation with coordinates within the image\"
                              }
                            ]
                          }
                        ],
                        \"additionalItems\": {
                          \"anyOf\": [
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^url https?://\\\\S+$\",
                              \"description\": \"Primary URL where the image is hosted\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^m (image/(apng|avif|gif|jpeg|png|webp))$\",
                              \"description\": \"MIME media type for the image\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^blurhash .+$\",
                              \"description\": \"Blurhash string for low-resolution previews\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^dim [0-9]{1,5}x[0-9]{1,5}$\",
                              \"description\": \"Image dimensions in WIDTHxHEIGHT format\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^alt .+$\",
                              \"description\": \"Human-readable alt text describing the image\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^x [a-f0-9]{64}$\",
                              \"description\": \"SHA-256 hash of the image as defined in NIP-94\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^fallback https?://\\\\S+$\",
                              \"description\": \"Fallback URL for alternate hosting\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^annotate-user [a-f0-9]{64}:[0-9]+(?:\\\\.[0-9]+)?:[0-9]+(?:\\\\.[0-9]+)?$\",
                              \"description\": \"User annotation with coordinates within the image\"
                            }
                          ]
                        },
                        \"allOf\": [
                          {
                            \"contains\": {
                              \"type\": \"string\",
                              \"pattern\": \"^url https?://\\\\S+$\"
                            }
                          },
                          {
                            \"contains\": {
                              \"type\": \"string\",
                              \"pattern\": \"^m (image/(apng|avif|gif|jpeg|png|webp))$\"
                            }
                          }
                        ]
                      }
                    ],
                    \"definitions\": {
                      \"metadataEntry\": {
                        \"anyOf\": [
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^url https?://\\\\S+$\",
                            \"description\": \"Primary URL where the image is hosted\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^m (image/(apng|avif|gif|jpeg|png|webp))$\",
                            \"description\": \"MIME media type for the image\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^blurhash .+$\",
                            \"description\": \"Blurhash string for low-resolution previews\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^dim [0-9]{1,5}x[0-9]{1,5}$\",
                            \"description\": \"Image dimensions in WIDTHxHEIGHT format\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^alt .+$\",
                            \"description\": \"Human-readable alt text describing the image\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^x [a-f0-9]{64}$\",
                            \"description\": \"SHA-256 hash of the image as defined in NIP-94\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^fallback https?://\\\\S+$\",
                            \"description\": \"Fallback URL for alternate hosting\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^annotate-user [a-f0-9]{64}:[0-9]+(?:\\\\.[0-9]+)?:[0-9]+(?:\\\\.[0-9]+)?$\",
                            \"description\": \"User annotation with coordinates within the image\"
                          }
                        ]
                      }
                    }
                  }
                ]
              }
            }
          ]
        }
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/20.json\"
}"},
        {"imetaTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"imeta tag\",
  \"description\": \"NIP-68 metadata describing an image attachment\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"imeta\"
        },
        {
          \"anyOf\": [
            {
              \"type\": \"string\",
              \"pattern\": \"^url https?://\\\\S+$\",
              \"description\": \"Primary URL where the image is hosted\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^m (image/(apng|avif|gif|jpeg|png|webp))$\",
              \"description\": \"MIME media type for the image\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^blurhash .+$\",
              \"description\": \"Blurhash string for low-resolution previews\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^dim [0-9]{1,5}x[0-9]{1,5}$\",
              \"description\": \"Image dimensions in WIDTHxHEIGHT format\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^alt .+$\",
              \"description\": \"Human-readable alt text describing the image\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^x [a-f0-9]{64}$\",
              \"description\": \"SHA-256 hash of the image as defined in NIP-94\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^fallback https?://\\\\S+$\",
              \"description\": \"Fallback URL for alternate hosting\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^annotate-user [a-f0-9]{64}:[0-9]+(?:\\\\.[0-9]+)?:[0-9]+(?:\\\\.[0-9]+)?$\",
              \"description\": \"User annotation with coordinates within the image\"
            }
          ]
        }
      ],
      \"additionalItems\": {
        \"anyOf\": [
          {
            \"type\": \"string\",
            \"pattern\": \"^url https?://\\\\S+$\",
            \"description\": \"Primary URL where the image is hosted\"
          },
          {
            \"type\": \"string\",
            \"pattern\": \"^m (image/(apng|avif|gif|jpeg|png|webp))$\",
            \"description\": \"MIME media type for the image\"
          },
          {
            \"type\": \"string\",
            \"pattern\": \"^blurhash .+$\",
            \"description\": \"Blurhash string for low-resolution previews\"
          },
          {
            \"type\": \"string\",
            \"pattern\": \"^dim [0-9]{1,5}x[0-9]{1,5}$\",
            \"description\": \"Image dimensions in WIDTHxHEIGHT format\"
          },
          {
            \"type\": \"string\",
            \"pattern\": \"^alt .+$\",
            \"description\": \"Human-readable alt text describing the image\"
          },
          {
            \"type\": \"string\",
            \"pattern\": \"^x [a-f0-9]{64}$\",
            \"description\": \"SHA-256 hash of the image as defined in NIP-94\"
          },
          {
            \"type\": \"string\",
            \"pattern\": \"^fallback https?://\\\\S+$\",
            \"description\": \"Fallback URL for alternate hosting\"
          },
          {
            \"type\": \"string\",
            \"pattern\": \"^annotate-user [a-f0-9]{64}:[0-9]+(?:\\\\.[0-9]+)?:[0-9]+(?:\\\\.[0-9]+)?$\",
            \"description\": \"User annotation with coordinates within the image\"
          }
        ]
      },
      \"allOf\": [
        {
          \"contains\": {
            \"type\": \"string\",
            \"pattern\": \"^url https?://\\\\S+$\"
          }
        },
        {
          \"contains\": {
            \"type\": \"string\",
            \"pattern\": \"^m (image/(apng|avif|gif|jpeg|png|webp))$\"
          }
        }
      ]
    }
  ],
  \"definitions\": {
    \"metadataEntry\": {
      \"anyOf\": [
        {
          \"type\": \"string\",
          \"pattern\": \"^url https?://\\\\S+$\",
          \"description\": \"Primary URL where the image is hosted\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^m (image/(apng|avif|gif|jpeg|png|webp))$\",
          \"description\": \"MIME media type for the image\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^blurhash .+$\",
          \"description\": \"Blurhash string for low-resolution previews\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^dim [0-9]{1,5}x[0-9]{1,5}$\",
          \"description\": \"Image dimensions in WIDTHxHEIGHT format\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^alt .+$\",
          \"description\": \"Human-readable alt text describing the image\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^x [a-f0-9]{64}$\",
          \"description\": \"SHA-256 hash of the image as defined in NIP-94\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^fallback https?://\\\\S+$\",
          \"description\": \"Fallback URL for alternate hosting\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^annotate-user [a-f0-9]{64}:[0-9]+(?:\\\\.[0-9]+)?:[0-9]+(?:\\\\.[0-9]+)?$\",
          \"description\": \"User annotation with coordinates within the image\"
        }
      ]
    }
  },
  \"$id\": \"https://nostrability.github.io/schemata/tag/imeta.json\"
}"},
        {"iTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"externalContentIdentifierTag\",
  \"description\": \"External content identifier tag (NIP-73)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"maxItems\": 3,
      \"items\": [
        {
          \"const\": \"i\"
        },
        {
          \"type\": \"string\",
          \"minLength\": 1,
          \"description\": \"Identifier or URI for the external resource\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^https?://.+\",
          \"description\": \"Optional URL pointing to the external resource\"
        }
      ],
      \"errorMessage\": {
        \"minItems\": \"i tag must be ['i', <identifier>, ...]\"
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/i.json\"
}"},
        {"kind30078Schema", "{
  \"$schema\": \"https://json-schema.org/draft-07/schema#\",
  \"title\": \"kind30078\",
  \"description\": \"NIP-78 Arbitrary custom app data (draft)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 30078
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"d\"
                          },
                          {
                            \"type\": \"string\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include required tag: d\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/30078.json\"
}"},
        {"kind9802Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind9802\",
  \"description\": \"NIP-84 Highlight event\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"type\": \"integer\",
          \"const\": 9802
        },
        \"content\": {
          \"type\": \"string\",
          \"description\": \"The highlighted text; MAY be empty for non-text media\"
        }
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/9802.json\"
}"},
        {"commentTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"comment\"
        },
        {
          \"type\": \"string\",
          \"description\": \"A comment for quote highlight rendering\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/comment.json\"
}"},
        {"contextTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"context\"
        },
        {
          \"type\": \"string\",
          \"description\": \"Text surrounding the highlight to provide context\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/context.json\"
}"},
        {"kind1018Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1018\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 1018,
          \"errorMessage\": \"kind must be 1018 for poll responses\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"contains\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"response\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^[A-Za-z0-9]+$\"
                      }
                    ],
                    \"additionalItems\": true,
                    \"errorMessage\": {
                      \"items\": \"response tag must be ['response', '<alphanumeric option id>']\"
                    }
                  }
                ]
              }
            ]
          },
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      }
                    ],
                    \"oneOf\": [
                      {
                        \"type\": \"array\",
                        \"minItems\": 4,
                        \"maxItems\": 5,
                        \"items\": [
                          {
                            \"const\": \"e\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{64}$\"
                          },
                          {
                            \"anyOf\": [
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^(ws://|wss://).+$\"
                              },
                              {
                                \"type\": \"string\",
                                \"const\": \"\"
                              }
                            ]
                          },
                          {
                            \"type\": \"string\",
                            \"enum\": [
                              \"reply\",
                              \"root\"
                            ]
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          }
                        ],
                        \"additionalItems\": false
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"maxItems\": 3,
                        \"items\": [
                          {
                            \"const\": \"e\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{64}$\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^(ws://|wss://).+$\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"response events must reference a poll event via an e tag\"
              }
            }
          ],
          \"items\": {
            \"allOf\": [
              {
                \"if\": {
                  \"items\": [
                    {
                      \"const\": \"response\"
                    }
                  ]
                },
                \"then\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"response\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[A-Za-z0-9]+$\"
                            }
                          ],
                          \"additionalItems\": true,
                          \"errorMessage\": {
                            \"items\": \"response tag must be ['response', '<alphanumeric option id>']\"
                          }
                        }
                      ]
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"items\": [
                    {
                      \"const\": \"e\"
                    }
                  ]
                },
                \"then\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        }
                      ],
                      \"oneOf\": [
                        {
                          \"type\": \"array\",
                          \"minItems\": 4,
                          \"maxItems\": 5,
                          \"items\": [
                            {
                              \"const\": \"e\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{64}$\"
                            },
                            {
                              \"anyOf\": [
                                {
                                  \"type\": \"string\",
                                  \"pattern\": \"^(ws://|wss://).+$\"
                                },
                                {
                                  \"type\": \"string\",
                                  \"const\": \"\"
                                }
                              ]
                            },
                            {
                              \"type\": \"string\",
                              \"enum\": [
                                \"reply\",
                                \"root\"
                              ]
                            },
                            {
                              \"allOf\": [
                                {
                                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                  \"type\": \"string\",
                                  \"pattern\": \"^[a-f0-9]{64}$\"
                                }
                              ]
                            }
                          ],
                          \"additionalItems\": false
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"maxItems\": 3,
                          \"items\": [
                            {
                              \"const\": \"e\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[a-f0-9]{64}$\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^(ws://|wss://).+$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              }
            ]
          },
          \"errorMessage\": {
            \"contains\": \"response events must include at least one response tag\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1018.json\"
}"},
        {"kind1068Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind1068\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 1068,
          \"errorMessage\": \"kind must be 1068 for poll events\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"contains\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 3,
                    \"items\": [
                      {
                        \"const\": \"option\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^[A-Za-z0-9]+$\"
                      },
                      {
                        \"type\": \"string\",
                        \"minLength\": 1
                      }
                    ],
                    \"additionalItems\": true,
                    \"errorMessage\": {
                      \"minItems\": \"option tag must provide an identifier and label\",
                      \"items\": \"option tag must start with 'option', followed by an alphanumeric id and a non-empty label\"
                    }
                  }
                ]
              }
            ]
          },
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"relay\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^(ws://|wss://).+$\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              },
              \"errorMessage\": {
                \"contains\": \"poll events must include at least one relay tag\"
              }
            }
          ],
          \"items\": {
            \"allOf\": [
              {
                \"if\": {
                  \"items\": [
                    {
                      \"const\": \"option\"
                    }
                  ]
                },
                \"then\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 3,
                          \"items\": [
                            {
                              \"const\": \"option\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[A-Za-z0-9]+$\"
                            },
                            {
                              \"type\": \"string\",
                              \"minLength\": 1
                            }
                          ],
                          \"additionalItems\": true,
                          \"errorMessage\": {
                            \"minItems\": \"option tag must provide an identifier and label\",
                            \"items\": \"option tag must start with 'option', followed by an alphanumeric id and a non-empty label\"
                          }
                        }
                      ]
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"items\": [
                    {
                      \"const\": \"relay\"
                    }
                  ]
                },
                \"then\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"relay\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^(ws://|wss://).+$\"
                            }
                          ],
                          \"additionalItems\": false
                        }
                      ]
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"items\": [
                    {
                      \"const\": \"polltype\"
                    }
                  ]
                },
                \"then\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"polltype\"
                            },
                            {
                              \"type\": \"string\",
                              \"enum\": [
                                \"singlechoice\",
                                \"multiplechoice\"
                              ]
                            }
                          ],
                          \"additionalItems\": false,
                          \"errorMessage\": {
                            \"items\": \"polltype tag must be ['polltype', 'singlechoice'|'multiplechoice']\"
                          }
                        }
                      ]
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"items\": [
                    {
                      \"const\": \"endsAt\"
                    }
                  ]
                },
                \"then\": {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"allOf\": [
                        {
                          \"allOf\": [
                            {
                              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                              \"type\": \"array\",
                              \"items\": {
                                \"type\": \"string\"
                              },
                              \"uniqueItems\": false
                            }
                          ]
                        },
                        {
                          \"type\": \"array\",
                          \"minItems\": 2,
                          \"items\": [
                            {
                              \"const\": \"endsAt\"
                            },
                            {
                              \"type\": \"string\",
                              \"pattern\": \"^[0-9]+$\"
                            }
                          ],
                          \"additionalItems\": true,
                          \"errorMessage\": {
                            \"items\": \"endsAt tag must start with 'endsAt' followed by a unix timestamp in seconds\"
                          }
                        }
                      ]
                    }
                  ]
                }
              }
            ]
          },
          \"errorMessage\": {
            \"contains\": \"poll events must include at least one option tag\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/1068.json\"
}"},
        {"endsAtTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"endsAt\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[0-9]+$\"
        }
      ],
      \"additionalItems\": true,
      \"errorMessage\": {
        \"items\": \"endsAt tag must start with 'endsAt' followed by a unix timestamp in seconds\"
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/endsAt.json\"
}"},
        {"optionTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 3,
      \"items\": [
        {
          \"const\": \"option\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[A-Za-z0-9]+$\"
        },
        {
          \"type\": \"string\",
          \"minLength\": 1
        }
      ],
      \"additionalItems\": true,
      \"errorMessage\": {
        \"minItems\": \"option tag must provide an identifier and label\",
        \"items\": \"option tag must start with 'option', followed by an alphanumeric id and a non-empty label\"
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/option.json\"
}"},
        {"polltypeTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"polltype\"
        },
        {
          \"type\": \"string\",
          \"enum\": [
            \"singlechoice\",
            \"multiplechoice\"
          ]
        }
      ],
      \"additionalItems\": false,
      \"errorMessage\": {
        \"items\": \"polltype tag must be ['polltype', 'singlechoice'|'multiplechoice']\"
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/polltype.json\"
}"},
        {"responseTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"items\": [
        {
          \"const\": \"response\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[A-Za-z0-9]+$\"
        }
      ],
      \"additionalItems\": true,
      \"errorMessage\": {
        \"items\": \"response tag must be ['response', '<alphanumeric option id>']\"
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/response.json\"
}"},
        {"kind31989Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind31989\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 31989
        },
        \"tags\": {
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"allOf\": [
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"array\",
                                \"items\": {
                                  \"type\": \"string\"
                                },
                                \"uniqueItems\": false
                              }
                            ]
                          },
                          {
                            \"type\": \"array\",
                            \"minItems\": 2,
                            \"items\": [
                              {
                                \"const\": \"d\"
                              },
                              {
                                \"type\": \"string\"
                              }
                            ],
                            \"additionalItems\": true
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"allOf\": [
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"array\",
                                \"items\": {
                                  \"type\": \"string\"
                                },
                                \"uniqueItems\": false
                              }
                            ]
                          },
                          {
                            \"type\": \"array\",
                            \"minItems\": 2,
                            \"items\": [
                              {
                                \"const\": \"a\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^\\\\d+:[a-f0-9]{64}:.+$\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^(ws://|wss://).+$\"
                              }
                            ],
                            \"additionalItems\": true
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            }
          ]
        }
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/31989.json\"
}"},
        {"kind31990Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind31990\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 31990
        },
        \"tags\": {
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"allOf\": [
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"array\",
                                \"items\": {
                                  \"type\": \"string\"
                                },
                                \"uniqueItems\": false
                              }
                            ]
                          },
                          {
                            \"type\": \"array\",
                            \"minItems\": 2,
                            \"items\": [
                              {
                                \"const\": \"d\"
                              },
                              {
                                \"type\": \"string\"
                              }
                            ],
                            \"additionalItems\": true
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"allOf\": [
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"array\",
                                \"items\": {
                                  \"type\": \"string\"
                                },
                                \"uniqueItems\": false
                              }
                            ]
                          },
                          {
                            \"type\": \"array\",
                            \"minItems\": 2,
                            \"items\": [
                              {
                                \"const\": \"k\"
                              },
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^\\\\d+$\"
                              }
                            ],
                            \"additionalItems\": false
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            }
          ]
        }
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/31990.json\"
}"},
        {"clientTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 4,
      \"items\": [
        {
          \"const\": \"client\"
        },
        {
          \"title\": \"name\",
          \"type\": \"string\",
          \"minLength\": 1
        },
        {
          \"title\": \"handler_address\",
          \"type\": \"string\",
          \"pattern\": \"^31990:[a-f0-9]{64}:.+$\"
        },
        {
          \"title\": \"relay_hint\",
          \"type\": \"string\",
          \"pattern\": \"^(ws://|wss://).+$\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/client.json\"
}"},
        {"kind30402Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind30402\",
  \"description\": \"Classified Listing (NIP-99). Addressable event describing a listing with structured metadata in tags.\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 30402
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"title\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"maxItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"title\"
                    },
                    {
                      \"type\": \"string\",
                      \"minLength\": 1
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"summary\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"maxItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"summary\"
                    },
                    {
                      \"type\": \"string\",
                      \"minLength\": 1
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"published_at\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"maxItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"published_at\"
                    },
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^[0-9]+$\"
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"location\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"maxItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"location\"
                    },
                    {
                      \"type\": \"string\",
                      \"minLength\": 1
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"status\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"maxItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"status\"
                    },
                    {
                      \"type\": \"string\",
                      \"enum\": [
                        \"active\",
                        \"sold\"
                      ]
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"price\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 3,
                  \"maxItems\": 4,
                  \"items\": [
                    {
                      \"const\": \"price\"
                    },
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^\\\\d+(?:\\\\.\\\\d+)?$\"
                    },
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^[A-Za-z]{3,6}$\"
                    },
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^[A-Za-z]{3,}$\"
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"g\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"maxItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"g\"
                    },
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^[0-9bcdefghjkmnpqrstuvwxyz]+$\"
                    }
                  ]
                }
              }
            ]
          }
        }
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/30402.json\"
}"},
        {"kind30403Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind30403\",
  \"description\": \"Draft/Inactive Classified Listing (NIP-99). Same structure as kind 30402.\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 30403
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"title\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"maxItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"title\"
                    },
                    {
                      \"type\": \"string\",
                      \"minLength\": 1
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"summary\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"maxItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"summary\"
                    },
                    {
                      \"type\": \"string\",
                      \"minLength\": 1
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"published_at\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"maxItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"published_at\"
                    },
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^[0-9]+$\"
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"location\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"maxItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"location\"
                    },
                    {
                      \"type\": \"string\",
                      \"minLength\": 1
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"status\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"maxItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"status\"
                    },
                    {
                      \"type\": \"string\",
                      \"enum\": [
                        \"active\",
                        \"sold\"
                      ]
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"price\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 3,
                  \"maxItems\": 4,
                  \"items\": [
                    {
                      \"const\": \"price\"
                    },
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^\\\\d+(?:\\\\.\\\\d+)?$\"
                    },
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^[A-Za-z]{3,6}$\"
                    },
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^[A-Za-z]+$\"
                    }
                  ]
                }
              },
              {
                \"if\": {
                  \"type\": \"array\",
                  \"items\": [
                    {
                      \"const\": \"g\"
                    }
                  ]
                },
                \"then\": {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"maxItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"g\"
                    },
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^[0-9bcdefghjkmnpqrstuvwxyz]+$\"
                    }
                  ]
                }
              }
            ]
          }
        }
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/30403.json\"
}"},
        {"kind10063Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind10063\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 10063
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"description\": \"Blossom server endpoint advertised by the user\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"server\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^https?://[^/]+/?$\",
                        \"errorMessage\": {
                          \"pattern\": \"server URL must be http(s) and must not include additional path segments\"
                        }
                      }
                    ],
                    \"additionalItems\": false,
                    \"errorMessage\": {
                      \"minItems\": \"server tag must include the server URL\",
                      \"additionalItems\": \"server tag accepts only the name and server URL\"
                    }
                  }
                ]
              }
            ]
          },
          \"additionalItems\": false,
          \"minItems\": 1,
          \"errorMessage\": {
            \"type\": \"tags must be an array of server tags\",
            \"minItems\": \"tags array must have at least one server tag\",
            \"additionalItems\": \"server lists must only include server tags\"
          }
        }
      },
      \"required\": [
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/10063.json\"
}"},
        {"kind10051Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind10051\",
  \"description\": \"Marmot KeyPackage relay list event (MIP-00)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 10051,
          \"description\": \"Kind number for publishing relays that host Marmot KeyPackages\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"contains\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"relay\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^(ws://|wss://).+$\"
                      }
                    ],
                    \"additionalItems\": false
                  }
                ]
              }
            ]
          },
          \"errorMessage\": {
            \"contains\": \"tags must include at least one relay tag identifying a KeyPackage relay\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/10051.json\"
}"},
        {"kind443Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind443\",
  \"description\": \"Marmot KeyPackage event (MIP-00)\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 443,
          \"description\": \"Kind number reserved for Marmot KeyPackage events\"
        },
        \"content\": {
          \"type\": \"string\",
          \"pattern\": \"^(?:[A-Za-z0-9+/]{4})*(?:[A-Za-z0-9+/]{2}==|[A-Za-z0-9+/]{3}=)?$\",
          \"minLength\": 48,
          \"errorMessage\": \"content must be a base64-encoded MLS KeyPackage bundle\",
          \"description\": \"Base64-encoded TLS-serialized MLS KeyPackageBundle\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 6,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"maxItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"mls_protocol_version\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[0-9]+(\\\\.[0-9]+)*$\",
                            \"description\": \"MLS protocol version identifier\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"title\": \"MLS Ciphersuite\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"maxItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"mls_ciphersuite\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^0x[0-9a-f]{4}$\",
                            \"description\": \"MLS ciphersuite identifier in 0xXXXX format\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"title\": \"MLS Extensions\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 3,
                        \"uniqueItems\": true,
                        \"items\": [
                          {
                            \"const\": \"mls_extensions\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^0x[0-9a-f]{4}$\",
                            \"description\": \"MLS extension identifier\"
                          }
                        ],
                        \"additionalItems\": {
                          \"type\": \"string\",
                          \"pattern\": \"^0x[0-9a-f]{4}$\"
                        },
                        \"allOf\": [
                          {
                            \"contains\": {
                              \"const\": \"0xf2ee\"
                            },
                            \"errorMessage\": {
                              \"contains\": \"mls_extensions must include 0xf2ee (marmot_group_data, MIP-01)\"
                            }
                          },
                          {
                            \"contains\": {
                              \"const\": \"0x000a\"
                            },
                            \"errorMessage\": {
                              \"contains\": \"mls_extensions must include 0x000a (last_resort, MIP-00)\"
                            }
                          }
                        ]
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"relays\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^(ws://|wss://).+$\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"title\": \"Encoding\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"maxItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"encoding\"
                          },
                          {
                            \"type\": \"string\",
                            \"enum\": [
                              \"base64\"
                            ],
                            \"description\": \"Content encoding format\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"title\": \"KeyPackageRef\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"maxItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"i\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{64}$\",
                            \"description\": \"Hex-encoded KeyPackageRef (SHA-256 hash of the KeyPackage)\"
                          }
                        ],
                        \"additionalItems\": false,
                        \"errorMessage\": {
                          \"minItems\": \"i tag must have exactly two elements: ['i', <KeyPackageRef>]\",
                          \"maxItems\": \"i tag must have exactly two elements: ['i', <KeyPackageRef>]\"
                        }
                      }
                    ]
                  }
                ]
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include mls_protocol_version, mls_ciphersuite, mls_extensions, relays, encoding, and i tags\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/443.json\"
}"},
        {"encodingTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"Encoding\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"maxItems\": 2,
      \"items\": [
        {
          \"const\": \"encoding\"
        },
        {
          \"type\": \"string\",
          \"enum\": [
            \"base64\"
          ],
          \"description\": \"Content encoding format\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/encoding.json\"
}"},
        {"mlsciphersuiteTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"MLS Ciphersuite\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"maxItems\": 2,
      \"items\": [
        {
          \"const\": \"mls_ciphersuite\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^0x[0-9a-f]{4}$\",
          \"description\": \"MLS ciphersuite identifier in 0xXXXX format\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/mls_ciphersuite.json\"
}"},
        {"mlsextensionsTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"MLS Extensions\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 3,
      \"uniqueItems\": true,
      \"items\": [
        {
          \"const\": \"mls_extensions\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^0x[0-9a-f]{4}$\",
          \"description\": \"MLS extension identifier\"
        }
      ],
      \"additionalItems\": {
        \"type\": \"string\",
        \"pattern\": \"^0x[0-9a-f]{4}$\"
      },
      \"allOf\": [
        {
          \"contains\": {
            \"const\": \"0xf2ee\"
          },
          \"errorMessage\": {
            \"contains\": \"mls_extensions must include 0xf2ee (marmot_group_data, MIP-01)\"
          }
        },
        {
          \"contains\": {
            \"const\": \"0x000a\"
          },
          \"errorMessage\": {
            \"contains\": \"mls_extensions must include 0x000a (last_resort, MIP-00)\"
          }
        }
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/mls_extensions.json\"
}"},
        {"mlsprotocolversionTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"maxItems\": 2,
      \"items\": [
        {
          \"const\": \"mls_protocol_version\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[0-9]+(\\\\.[0-9]+)*$\",
          \"description\": \"MLS protocol version identifier\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/mls_protocol_version.json\"
}"},
        {"kind444Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind444\",
  \"description\": \"Marmot Welcome event — private group invitation delivered via NIP-59 gift-wrapping (MIP-02). This event is unsigned to prevent accidental public publishing.\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"kind\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 444,
          \"description\": \"Kind number for Marmot Welcome events\"
        },
        \"id\": {
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"string\",
                  \"pattern\": \"^[a-f0-9]{64}$\"
                }
              ]
            }
          ],
          \"description\": \"Deterministic event hash as defined in NIP-01\"
        },
        \"pubkey\": {
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"string\",
                  \"pattern\": \"^[a-f0-9]{64}$\"
                }
              ]
            }
          ],
          \"description\": \"Sender public key\"
        },
        \"content\": {
          \"type\": \"string\",
          \"pattern\": \"^(?:[A-Za-z0-9+/]{4})*(?:[A-Za-z0-9+/]{2}==|[A-Za-z0-9+/]{3}=)?$\",
          \"minLength\": 160,
          \"errorMessage\": \"content must be a base64-encoded MLS Welcome object (at least 160 characters)\",
          \"description\": \"Base64-encoded MLS Welcome object\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 3,
          \"allOf\": [
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      }
                    ],
                    \"oneOf\": [
                      {
                        \"type\": \"array\",
                        \"minItems\": 4,
                        \"maxItems\": 5,
                        \"items\": [
                          {
                            \"const\": \"e\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{64}$\"
                          },
                          {
                            \"anyOf\": [
                              {
                                \"type\": \"string\",
                                \"pattern\": \"^(ws://|wss://).+$\"
                              },
                              {
                                \"type\": \"string\",
                                \"const\": \"\"
                              }
                            ]
                          },
                          {
                            \"type\": \"string\",
                            \"enum\": [
                              \"reply\",
                              \"root\"
                            ]
                          },
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"string\",
                                \"pattern\": \"^[a-f0-9]{64}$\"
                              }
                            ]
                          }
                        ],
                        \"additionalItems\": false
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"maxItems\": 3,
                        \"items\": [
                          {
                            \"const\": \"e\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^[a-f0-9]{64}$\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^(ws://|wss://).+$\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"relays\"
                          },
                          {
                            \"type\": \"string\",
                            \"pattern\": \"^(ws://|wss://).+$\"
                          }
                        ],
                        \"additionalItems\": true
                      }
                    ]
                  }
                ]
              }
            },
            {
              \"contains\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"title\": \"Encoding\",
                    \"allOf\": [
                      {
                        \"allOf\": [
                          {
                            \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                            \"type\": \"array\",
                            \"items\": {
                              \"type\": \"string\"
                            },
                            \"uniqueItems\": false
                          }
                        ]
                      },
                      {
                        \"type\": \"array\",
                        \"minItems\": 2,
                        \"maxItems\": 2,
                        \"items\": [
                          {
                            \"const\": \"encoding\"
                          },
                          {
                            \"type\": \"string\",
                            \"enum\": [
                              \"base64\"
                            ],
                            \"description\": \"Content encoding format\"
                          }
                        ],
                        \"additionalItems\": false
                      }
                    ]
                  }
                ]
              }
            }
          ],
          \"errorMessage\": {
            \"contains\": \"tags must include an e tag, relays, and encoding tags\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"id\",
        \"pubkey\"
      ]
    },
    {
      \"not\": {
        \"required\": [
          \"sig\"
        ]
      }
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/444.json\"
}"},
        {"kind445Schema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"title\": \"kind445\",
  \"description\": \"Marmot Group Event — encrypted container for all group communication including MLS control messages (Proposals/Commits) and application messages (MIP-03). Each event uses a fresh ephemeral Nostr keypair for unlinkability.\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema\",
          \"type\": \"object\",
          \"properties\": {
            \"content\": {
              \"type\": \"string\",
              \"errorMessage\": \"content must be a string\",
              \"description\": \"The content of the note\"
            },
            \"created_at\": {
              \"type\": \"integer\",
              \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
              \"description\": \"The timestamp of the note creation\"
            },
            \"id\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"id must be a valid hash\",
              \"description\": \"The id is a hash derived as specified in NIP-01\"
            },
            \"kind\": {
              \"type\": \"integer\"
            },
            \"pubkey\": {
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"string\",
                      \"pattern\": \"^[a-f0-9]{64}$\"
                    }
                  ]
                }
              ],
              \"errorMessage\": \"pubkey must be a secp256k1 public key\",
              \"description\": \"The public key of the note's author\"
            },
            \"sig\": {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{128}$\",
              \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
              \"description\": \"The cryptographic signature of the note\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"errorMessage\": \"tags must be an array of valid tag tuples\",
              \"description\": \"The tags of the note\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              }
            }
          },
          \"required\": [
            \"content\",
            \"created_at\",
            \"id\",
            \"kind\",
            \"pubkey\",
            \"sig\",
            \"tags\"
          ],
          \"additionalProperties\": false
        }
      ]
    },
    {
      \"type\": \"object\",
      \"properties\": {
        \"kind\": {
          \"const\": 445,
          \"description\": \"Kind number for Marmot Group Events\"
        },
        \"content\": {
          \"type\": \"string\",
          \"pattern\": \"^(?:[A-Za-z0-9+/]{4})*(?:[A-Za-z0-9+/]{2}==|[A-Za-z0-9+/]{3}=)?$\",
          \"minLength\": 40,
          \"errorMessage\": \"content must be a base64-encoded encrypted payload\",
          \"description\": \"Base64-encoded payload: 12-byte nonce concatenated with ChaCha20-Poly1305 ciphertext\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          },
          \"minItems\": 1,
          \"contains\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"allOf\": [
                  {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  },
                  {
                    \"type\": \"array\",
                    \"minItems\": 2,
                    \"maxItems\": 2,
                    \"items\": [
                      {
                        \"const\": \"h\"
                      },
                      {
                        \"type\": \"string\",
                        \"pattern\": \"^[a-f0-9]{64}$\",
                        \"description\": \"Hex-encoded nostr_group_id (32-byte random identifier)\"
                      }
                    ],
                    \"additionalItems\": false
                  }
                ]
              }
            ]
          },
          \"errorMessage\": {
            \"contains\": \"tags must include an h tag with the hex-encoded nostr_group_id\"
          }
        }
      },
      \"required\": [
        \"kind\",
        \"content\",
        \"tags\"
      ]
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/note/kind/445.json\"
}"},
        {"hTagSchema", "{
  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
  \"allOf\": [
    {
      \"allOf\": [
        {
          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"uniqueItems\": false
        }
      ]
    },
    {
      \"type\": \"array\",
      \"minItems\": 2,
      \"maxItems\": 2,
      \"items\": [
        {
          \"const\": \"h\"
        },
        {
          \"type\": \"string\",
          \"pattern\": \"^[a-f0-9]{64}$\",
          \"description\": \"Hex-encoded nostr_group_id (32-byte random identifier)\"
        }
      ],
      \"additionalItems\": false
    }
  ],
  \"$id\": \"https://nostrability.github.io/schemata/tag/h.json\"
}"},
        {"messagefilterSchema", "{
  \"allOf\": [
    {
      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
      \"type\": \"object\",
      \"properties\": {
        \"ids\": {
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\",
            \"pattern\": \"^[a-f0-9]{64}$\"
          },
          \"description\": \"A list of event ids in lowercase hex\"
        },
        \"authors\": {
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\",
            \"pattern\": \"^[a-f0-9]{64}$\"
          },
          \"description\": \"A list of lowercase pubkeys, matching the pubkey of an event\"
        },
        \"kinds\": {
          \"type\": \"array\",
          \"items\": {
            \"type\": \"integer\",
            \"minimum\": 0
          },
          \"description\": \"A list of kind numbers\"
        },
        \"since\": {
          \"type\": \"integer\",
          \"minimum\": 0,
          \"description\": \"An integer Unix timestamp in seconds, where events must have created_at >= since\"
        },
        \"until\": {
          \"type\": \"integer\",
          \"minimum\": 0,
          \"description\": \"An integer Unix timestamp in seconds, where events must have created_at <= until\"
        },
        \"limit\": {
          \"type\": \"integer\",
          \"minimum\": 1,
          \"description\": \"The maximum number of events relays SHOULD return in the initial query\"
        }
      },
      \"patternProperties\": {
        \"^#[a-zA-Z]$\": {
          \"type\": \"array\",
          \"items\": {
            \"type\": \"string\"
          },
          \"description\": \"A list of tag values, where specific tags (#e, #p) have designated meanings\"
        }
      },
      \"additionalProperties\": false
    }
  ]
}"},
        {"nip05Schema", "{
  \"allOf\": [
    {
      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
      \"title\": \"nip05Identifier\",
      \"description\": \"Internet Identifier for NIP-05 (email-like, case-insensitive local-part)\",
      \"type\": \"string\",
      \"pattern\": \"^(([_A-Za-z0-9.-]+)|_)@[A-Za-z0-9](?:[A-Za-z0-9-]*[A-Za-z0-9])?(?:\\\\.[A-Za-z0-9](?:[A-Za-z0-9-]*[A-Za-z0-9])?)+$\"
    }
  ]
}"},
        {"nostrwellknownSchema", "{
  \"allOf\": [
    {
      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
      \"title\": \"nostrWellKnown\",
      \"description\": \"Schema for `/.well-known/nostr.json` per NIP-05\",
      \"type\": \"object\",
      \"properties\": {
        \"names\": {
          \"type\": \"object\",
          \"description\": \"Mapping from identifier local-part to hex public keys\",
          \"propertyNames\": {
            \"pattern\": \"^[a-z0-9._-]+$\"
          },
          \"additionalProperties\": {
            \"allOf\": [
              {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"string\",
                    \"pattern\": \"^[a-f0-9]{64}$\"
                  }
                ]
              }
            ]
          }
        },
        \"relays\": {
          \"type\": \"object\",
          \"description\": \"Optional mapping from hex public keys to arrays of relay URLs\",
          \"propertyNames\": {
            \"pattern\": \"^[a-f0-9]{64}$\"
          },
          \"additionalProperties\": {
            \"type\": \"array\",
            \"items\": {
              \"type\": \"string\",
              \"format\": \"uri\",
              \"pattern\": \"^wss?://\"
            }
          }
        }
      },
      \"required\": [
        \"names\"
      ],
      \"additionalProperties\": false
    }
  ]
}"},
        {"notekind22242Schema", "{
  \"allOf\": [
    {
      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
      \"title\": \"kind22242\",
      \"description\": \"Ephemeral authentication event defined by NIP-42\",
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema\",
              \"type\": \"object\",
              \"properties\": {
                \"content\": {
                  \"type\": \"string\",
                  \"errorMessage\": \"content must be a string\",
                  \"description\": \"The content of the note\"
                },
                \"created_at\": {
                  \"type\": \"integer\",
                  \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
                  \"description\": \"The timestamp of the note creation\"
                },
                \"id\": {
                  \"allOf\": [
                    {
                      \"allOf\": [
                        {
                          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                          \"type\": \"string\",
                          \"pattern\": \"^[a-f0-9]{64}$\"
                        }
                      ]
                    }
                  ],
                  \"errorMessage\": \"id must be a valid hash\",
                  \"description\": \"The id is a hash derived as specified in NIP-01\"
                },
                \"kind\": {
                  \"type\": \"integer\"
                },
                \"pubkey\": {
                  \"allOf\": [
                    {
                      \"allOf\": [
                        {
                          \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                          \"type\": \"string\",
                          \"pattern\": \"^[a-f0-9]{64}$\"
                        }
                      ]
                    }
                  ],
                  \"errorMessage\": \"pubkey must be a secp256k1 public key\",
                  \"description\": \"The public key of the note's author\"
                },
                \"sig\": {
                  \"type\": \"string\",
                  \"pattern\": \"^[a-f0-9]{128}$\",
                  \"errorMessage\": \"sig must be 128 lowercase hex characters (64 bytes)\",
                  \"description\": \"The cryptographic signature of the note\"
                },
                \"tags\": {
                  \"type\": \"array\",
                  \"errorMessage\": \"tags must be an array of valid tag tuples\",
                  \"description\": \"The tags of the note\",
                  \"items\": {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"type\": \"array\",
                        \"items\": {
                          \"type\": \"string\"
                        },
                        \"uniqueItems\": false
                      }
                    ]
                  }
                }
              },
              \"required\": [
                \"content\",
                \"created_at\",
                \"id\",
                \"kind\",
                \"pubkey\",
                \"sig\",
                \"tags\"
              ],
              \"additionalProperties\": false
            }
          ]
        },
        {
          \"type\": \"object\",
          \"properties\": {
            \"kind\": {
              \"const\": 22242,
              \"description\": \"Kind 22242 identifies an authentication event\"
            },
            \"tags\": {
              \"type\": \"array\",
              \"items\": {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"array\",
                    \"items\": {
                      \"type\": \"string\"
                    },
                    \"uniqueItems\": false
                  }
                ]
              },
              \"allOf\": [
                {
                  \"contains\": {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"allOf\": [
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"allOf\": [
                                  {
                                    \"allOf\": [
                                      {
                                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                        \"type\": \"array\",
                                        \"items\": {
                                          \"type\": \"string\"
                                        },
                                        \"uniqueItems\": false
                                      }
                                    ]
                                  },
                                  {
                                    \"type\": \"array\",
                                    \"minItems\": 2,
                                    \"items\": [
                                      {
                                        \"const\": \"relay\"
                                      },
                                      {
                                        \"type\": \"string\",
                                        \"pattern\": \"^(ws://|wss://).+$\"
                                      }
                                    ],
                                    \"additionalItems\": false
                                  }
                                ]
                              }
                            ]
                          },
                          {
                            \"type\": \"array\",
                            \"description\": \"Relay endpoint that issued the NIP-42 authentication challenge\",
                            \"errorMessage\": \"relay tag must include a valid ws or wss URL and cannot contain extra fields\"
                          }
                        ]
                      }
                    ]
                  },
                  \"errorMessage\": {
                    \"contains\": \"tags must include a relay tag identifying the authenticating relay\"
                  }
                },
                {
                  \"contains\": {
                    \"allOf\": [
                      {
                        \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                        \"allOf\": [
                          {
                            \"allOf\": [
                              {
                                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                                \"type\": \"array\",
                                \"items\": {
                                  \"type\": \"string\"
                                },
                                \"uniqueItems\": false
                              }
                            ]
                          },
                          {
                            \"type\": \"array\",
                            \"description\": \"Authentication challenge provided by the relay\",
                            \"minItems\": 2,
                            \"items\": [
                              {
                                \"const\": \"challenge\"
                              },
                              {
                                \"type\": \"string\",
                                \"minLength\": 1
                              }
                            ],
                            \"additionalItems\": false,
                            \"errorMessage\": {
                              \"minItems\": \"challenge tag must include the relay-provided string\",
                              \"additionalItems\": \"challenge tag accepts only the name and challenge value\"
                            }
                          }
                        ]
                      }
                    ]
                  },
                  \"errorMessage\": {
                    \"contains\": \"tags must include a challenge tag with the relay-provided challenge string\"
                  }
                }
              ]
            }
          },
          \"required\": [
            \"kind\",
            \"tags\"
          ]
        }
      ]
    }
  ]
}"},
        {"noteunsignedSchema", "{
  \"allOf\": [
    {
      \"$schema\": \"http://json-schema.org/draft-07/schema\",
      \"type\": \"object\",
      \"properties\": {
        \"content\": {
          \"type\": \"string\",
          \"errorMessage\": \"content must be a string\",
          \"description\": \"The content of the note\"
        },
        \"created_at\": {
          \"type\": \"integer\",
          \"errorMessage\": \"created_at must be a timestamp expressed in seconds (not milliseconds)\",
          \"description\": \"The timestamp of the note creation\"
        },
        \"id\": {
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"string\",
                  \"pattern\": \"^[a-f0-9]{64}$\"
                }
              ]
            }
          ],
          \"errorMessage\": \"id must be a valid hash\",
          \"description\": \"The id is a hash derived as specified in NIP-01\"
        },
        \"kind\": {
          \"type\": \"integer\"
        },
        \"pubkey\": {
          \"allOf\": [
            {
              \"allOf\": [
                {
                  \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                  \"type\": \"string\",
                  \"pattern\": \"^[a-f0-9]{64}$\"
                }
              ]
            }
          ],
          \"errorMessage\": \"pubkey must be a secp256k1 public key\",
          \"description\": \"The public key of the note's author\"
        },
        \"tags\": {
          \"type\": \"array\",
          \"errorMessage\": \"tags must be an array of valid tag tuples\",
          \"description\": \"The tags of the note\",
          \"items\": {
            \"allOf\": [
              {
                \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                \"type\": \"array\",
                \"items\": {
                  \"type\": \"string\"
                },
                \"uniqueItems\": false
              }
            ]
          }
        }
      },
      \"required\": [
        \"content\",
        \"created_at\",
        \"kind\",
        \"tags\"
      ],
      \"additionalProperties\": false
    }
  ]
}"},
        {"authrelayTagSchema", "{
  \"allOf\": [
    {
      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"array\",
                      \"items\": {
                        \"type\": \"string\"
                      },
                      \"uniqueItems\": false
                    }
                  ]
                },
                {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"relay\"
                    },
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^(ws://|wss://).+$\"
                    }
                  ],
                  \"additionalItems\": false
                }
              ]
            }
          ]
        },
        {
          \"type\": \"array\",
          \"description\": \"Relay endpoint that issued the NIP-42 authentication challenge\",
          \"errorMessage\": \"relay tag must include a valid ws or wss URL and cannot contain extra fields\"
        }
      ]
    }
  ]
}"},
        {"dmrelayTagSchema", "{
  \"allOf\": [
    {
      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"allOf\": [
                {
                  \"allOf\": [
                    {
                      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                      \"type\": \"array\",
                      \"items\": {
                        \"type\": \"string\"
                      },
                      \"uniqueItems\": false
                    }
                  ]
                },
                {
                  \"type\": \"array\",
                  \"minItems\": 2,
                  \"items\": [
                    {
                      \"const\": \"relay\"
                    },
                    {
                      \"type\": \"string\",
                      \"pattern\": \"^(ws://|wss://).+$\"
                    }
                  ],
                  \"additionalItems\": false
                }
              ]
            }
          ]
        },
        {
          \"type\": \"array\",
          \"description\": \"Preferred relay endpoint for receiving direct messages\",
          \"items\": [
            {
              \"const\": \"relay\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^wss?://[a-zA-Z0-9.-]+(?::[0-9]+)?(?:/.*)?$\"
            }
          ]
        }
      ]
    }
  ]
}"},
        {"externalcontentiTagSchema", "{
  \"allOf\": [
    {
      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
      \"title\": \"externalContentIdentifierTag\",
      \"description\": \"External content identifier tag (NIP-73)\",
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"array\",
              \"items\": {
                \"type\": \"string\"
              },
              \"uniqueItems\": false
            }
          ]
        },
        {
          \"type\": \"array\",
          \"minItems\": 2,
          \"maxItems\": 3,
          \"items\": [
            {
              \"const\": \"i\"
            },
            {
              \"type\": \"string\",
              \"minLength\": 1,
              \"description\": \"Identifier or URI for the external resource\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^https?://.+\",
              \"description\": \"Optional URL pointing to the external resource\"
            }
          ],
          \"errorMessage\": {
            \"minItems\": \"i tag must be ['i', <identifier>, ...]\"
          }
        }
      ]
    }
  ]
}"},
        {"externalcontentkTagSchema", "{
  \"allOf\": [
    {
      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
      \"title\": \"externalContentTypeTag\",
      \"description\": \"External content type identifier tag (NIP-73)\",
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"array\",
              \"items\": {
                \"type\": \"string\"
              },
              \"uniqueItems\": false
            }
          ]
        },
        {
          \"type\": \"array\",
          \"minItems\": 2,
          \"maxItems\": 3,
          \"items\": [
            {
              \"const\": \"k\"
            },
            {
              \"type\": \"string\",
              \"minLength\": 1,
              \"pattern\": \"^[A-Za-z0-9][A-Za-z0-9._+-]*(?::[A-Za-z0-9][A-Za-z0-9._+-]*)*$\",
              \"description\": \"Type identifier for the external resource\"
            },
            {
              \"type\": \"string\",
              \"minLength\": 1,
              \"description\": \"Optional subtype or hint for the external resource\"
            }
          ],
          \"errorMessage\": {
            \"minItems\": \"k tag must be ['k', <type>, ...]\"
          }
        }
      ]
    }
  ]
}"},
        {"gitrefTagSchema", "{
  \"allOf\": [
    {
      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"array\",
              \"items\": {
                \"type\": \"string\"
              },
              \"uniqueItems\": false
            }
          ]
        },
        {
          \"type\": \"array\",
          \"description\": \"Git reference state entry\",
          \"minItems\": 3,
          \"items\": [
            {
              \"const\": \"ref\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^refs\\\\/(heads|tags)\\\\/[^\\\\s]+$\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{7,40}$\"
            }
          ],
          \"additionalItems\": {
            \"type\": \"string\",
            \"pattern\": \"^[a-f0-9]{7,40}$\"
          }
        }
      ]
    }
  ]
}"},
        {"mip00iTagSchema", "{
  \"allOf\": [
    {
      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
      \"title\": \"KeyPackageRef\",
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"array\",
              \"items\": {
                \"type\": \"string\"
              },
              \"uniqueItems\": false
            }
          ]
        },
        {
          \"type\": \"array\",
          \"minItems\": 2,
          \"maxItems\": 2,
          \"items\": [
            {
              \"const\": \"i\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{64}$\",
              \"description\": \"Hex-encoded KeyPackageRef (SHA-256 hash of the KeyPackage)\"
            }
          ],
          \"additionalItems\": false,
          \"errorMessage\": {
            \"minItems\": \"i tag must have exactly two elements: ['i', <KeyPackageRef>]\",
            \"maxItems\": \"i tag must have exactly two elements: ['i', <KeyPackageRef>]\"
          }
        }
      ]
    }
  ]
}"},
        {"mlsclientTagSchema", "{
  \"allOf\": [
    {
      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"array\",
              \"items\": {
                \"type\": \"string\"
              },
              \"uniqueItems\": false
            }
          ]
        },
        {
          \"type\": \"array\",
          \"minItems\": 2,
          \"items\": [
            {
              \"const\": \"client\"
            },
            {
              \"type\": \"string\",
              \"minLength\": 1,
              \"description\": \"Client display name or identifier\"
            }
          ],
          \"additionalItems\": {
            \"type\": \"string\"
          }
        }
      ]
    }
  ]
}"},
        {"reactioneTagSchema", "{
  \"allOf\": [
    {
      \"$schema\": \"http://json-schema.org/draft-07/schema#\",
      \"title\": \"reactionETag\",
      \"description\": \"Event reference tag for reaction events (NIP-25)\",
      \"allOf\": [
        {
          \"allOf\": [
            {
              \"$schema\": \"http://json-schema.org/draft-07/schema#\",
              \"type\": \"array\",
              \"items\": {
                \"type\": \"string\"
              },
              \"uniqueItems\": false
            }
          ]
        },
        {
          \"type\": \"array\",
          \"minItems\": 2,
          \"items\": [
            {
              \"const\": \"e\"
            },
            {
              \"type\": \"string\",
              \"pattern\": \"^[a-f0-9]{64}$\"
            }
          ],
          \"additionalItems\": {
            \"anyOf\": [
              {
                \"type\": \"string\",
                \"pattern\": \"^(ws://|wss://).+$\"
              },
              {
                \"allOf\": [
                  {
                    \"$schema\": \"http://json-schema.org/draft-07/schema#\",
                    \"type\": \"string\",
                    \"pattern\": \"^[a-f0-9]{64}$\"
                  }
                ]
              },
              {
                \"type\": \"string\",
                \"minLength\": 1
              }
            ]
          },
          \"errorMessage\": {
            \"minItems\": \"e tag must include the event id\"
          }
        }
      ]
    }
  ]
}"},
    };
    return data;
}

} // namespace detail
} // namespace schemata

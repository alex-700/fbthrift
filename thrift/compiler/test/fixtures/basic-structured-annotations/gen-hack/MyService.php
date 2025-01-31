<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace fixtures\basic-structured-annotations;

/**
 * Original thrift service:-
 * MyService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic-structured-annotations/MyService'))>>
interface MyServiceAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * annotated_inline_string
   *   first();
   */
  public function first(): Awaitable<string>;

  /**
   * Original thrift definition:-
   * bool
   *   second(1: i64 count);
   */
  public function second(int $count): Awaitable<bool>;
}

/**
 * Original thrift service:-
 * MyService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic-structured-annotations/MyService'))>>
interface MyServiceIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * annotated_inline_string
   *   first();
   */
  public function first(): string;

  /**
   * Original thrift definition:-
   * bool
   *   second(1: i64 count);
   */
  public function second(int $count): bool;
}

/**
 * Original thrift service:-
 * MyService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic-structured-annotations/MyService'))>>
interface MyServiceAsyncClientIf extends MyServiceAsyncIf {
}

/**
 * Original thrift service:-
 * MyService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic-structured-annotations/MyService'))>>
interface MyServiceClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * annotated_inline_string
   *   first();
   */
  public function first(): Awaitable<string>;

  /**
   * Original thrift definition:-
   * bool
   *   second(1: i64 count);
   */
  public function second(int $count): Awaitable<bool>;
}

/**
 * Original thrift service:-
 * MyService
 */
trait MyServiceClientBase {
  require extends \ThriftClientBase;

}

class MyServiceAsyncClient extends \ThriftClientBase implements MyServiceAsyncClientIf {
  use MyServiceClientBase;

  /**
   * Original thrift definition:-
   * annotated_inline_string
   *   first();
   */
  public async function first(): Awaitable<string> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("MyService", "first");
    $args = \fixtures\basic-structured-annotations\MyService_first_args::withDefaultValues();
    $currentseqid = $this->sendImplHelper($args, "first", false);
    return await $this->genAwaitResponse(\fixtures\basic-structured-annotations\MyService_first_result::class, "first", false, $currentseqid, $rpc_options);
  }

  /**
   * Original thrift definition:-
   * bool
   *   second(1: i64 count);
   */
  public async function second(int $count): Awaitable<bool> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("MyService", "second");
    $args = \fixtures\basic-structured-annotations\MyService_second_args::fromShape(shape(
      'count' => $count,
    ));
    $currentseqid = $this->sendImplHelper($args, "second", false);
    return await $this->genAwaitResponse(\fixtures\basic-structured-annotations\MyService_second_result::class, "second", false, $currentseqid, $rpc_options);
  }

}

class MyServiceClient extends \ThriftClientBase implements MyServiceClientIf {
  use MyServiceClientBase;

  /**
   * Original thrift definition:-
   * annotated_inline_string
   *   first();
   */
  public async function first(): Awaitable<string> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("MyService", "first");
    $args = \fixtures\basic-structured-annotations\MyService_first_args::withDefaultValues();
    $currentseqid = $this->sendImplHelper($args, "first", false);
    return await $this->genAwaitResponse(\fixtures\basic-structured-annotations\MyService_first_result::class, "first", false, $currentseqid, $rpc_options);
  }

  /**
   * Original thrift definition:-
   * bool
   *   second(1: i64 count);
   */
  public async function second(int $count): Awaitable<bool> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("MyService", "second");
    $args = \fixtures\basic-structured-annotations\MyService_second_args::fromShape(shape(
      'count' => $count,
    ));
    $currentseqid = $this->sendImplHelper($args, "second", false);
    return await $this->genAwaitResponse(\fixtures\basic-structured-annotations\MyService_second_result::class, "second", false, $currentseqid, $rpc_options);
  }

  /* send and recv functions */
  public function send_first(): int {
    $args = \fixtures\basic-structured-annotations\MyService_first_args::withDefaultValues();
    return $this->sendImplHelper($args, "first", false);
  }
  public function recv_first(?int $expectedsequenceid = null): string {
    return $this->recvImplHelper(\fixtures\basic-structured-annotations\MyService_first_result::class, "first", false, $expectedsequenceid);
  }
  public function send_second(int $count): int {
    $args = \fixtures\basic-structured-annotations\MyService_second_args::fromShape(shape(
      'count' => $count,
    ));
    return $this->sendImplHelper($args, "second", false);
  }
  public function recv_second(?int $expectedsequenceid = null): bool {
    return $this->recvImplHelper(\fixtures\basic-structured-annotations\MyService_second_result::class, "second", false, $expectedsequenceid);
  }
}

// HELPER FUNCTIONS AND STRUCTURES

class MyService_first_args implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'MyService_first_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.first_args",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

class MyService_first_result extends \ThriftSyncStructWithResult {
  use \ThriftSerializationTrait;

  const type TResult = string;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?this::TResult,
  );

  const int STRUCTURAL_ID = 8648204672360810467;
  public ?this::TResult $success;

  public function __construct(?this::TResult $success = null)[] {
    $this->success = $success;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public function getName()[]: string {
    return 'MyService_first_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.MyService_first_result",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_typedef" => \tmeta_ThriftTypedefType::fromShape(
                    shape(
                      "name" => "module.annotated_inline_string",
                      "underlyingType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "success",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'success' => shape(
          'field' => dict[],
          'type' => dict[
            '\fixtures\basic-structured-annotations\structured_annotation_inline' => \fixtures\basic-structured-annotations\structured_annotation_inline::fromShape(
              shape(
                "count" => 1,
              )
            ),
            '\fixtures\basic-structured-annotations\structured_annotation_with_default' => \fixtures\basic-structured-annotations\structured_annotation_with_default::fromShape(
              shape(
                "name" => "abc",
              )
            ),
          ],
        ),
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

class MyService_second_args implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'count',
      'type' => \TType::I64,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'count' => 1,
  ];

  const type TConstructorShape = shape(
    ?'count' => ?int,
  );

  const int STRUCTURAL_ID = 6887469671700782815;
  public int $count;

  public function __construct(?int $count = null)[] {
    $this->count = $count ?? 0;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'count'),
    );
  }

  public function getName()[]: string {
    return 'MyService_second_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.second_args",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                )
              ),
              "name" => "count",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'count' => shape(
          'field' => dict[
            '\fixtures\basic-structured-annotations\structured_annotation_inline' => \fixtures\basic-structured-annotations\structured_annotation_inline::fromShape(
              shape(
                "count" => 4,
              )
            ),
          ],
          'type' => dict[],
        ),
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

class MyService_second_result extends \ThriftSyncStructWithResult {
  use \ThriftSerializationTrait;

  const type TResult = bool;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::BOOL,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?this::TResult,
  );

  const int STRUCTURAL_ID = 8594383818423018844;
  public ?this::TResult $success;

  public function __construct(?this::TResult $success = null)[] {
    $this->success = $success;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public function getName()[]: string {
    return 'MyService_second_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.MyService_second_result",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "success",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

class MyServiceStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getServiceMetadata()[]: \tmeta_ThriftService {
    return \tmeta_ThriftService::fromShape(
      shape(
        "name" => "module.MyService",
        "functions" => vec[
          \tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "first",
              "return_type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_typedef" => \tmeta_ThriftTypedefType::fromShape(
                    shape(
                      "name" => "module.annotated_inline_string",
                      "underlyingType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
            )
          ),
          \tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "second",
              "return_type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "arguments" => vec[
                \tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 1,
                    "type" => \tmeta_ThriftType::fromShape(
                      shape(
                        "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                      )
                    ),
                    "name" => "count",
                  )
                ),
              ],
            )
          ),
        ],
      )
    );
  }

  public static function getServiceMetadataResponse()[]: \tmeta_ThriftServiceMetadataResponse {
    return \tmeta_ThriftServiceMetadataResponse::fromShape(
      shape(
        'context' => \tmeta_ThriftServiceContext::fromShape(
          shape(
            'service_info' => self::getServiceMetadata(),
            'module' => \tmeta_ThriftModuleContext::fromShape(
              shape(
                'name' => 'module',
              )
            ),
          )
        ),
        'metadata' => \tmeta_ThriftMetadata::fromShape(
          shape(
            'enums' => dict[
            ],
            'structs' => dict[
            ],
            'exceptions' => dict[
            ],
            'services' => dict[
            ],
          )
        ),
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TServiceAnnotations {
    return shape(
      'service' => dict[
        '\fixtures\basic-structured-annotations\structured_annotation_inline' => \fixtures\basic-structured-annotations\structured_annotation_inline::fromShape(
          shape(
            "count" => 3,
          )
        ),
      ],
      'functions' => dict[
        'first' => dict[
          '\fixtures\basic-structured-annotations\structured_annotation_with_default' => \fixtures\basic-structured-annotations\structured_annotation_with_default::fromShape(
            shape(
            )
          ),
        ],
        'second' => dict[
          '\fixtures\basic-structured-annotations\structured_annotation_inline' => \fixtures\basic-structured-annotations\structured_annotation_inline::fromShape(
            shape(
              "count" => 2,
            )
          ),
        ],
      ],
    );
  }
}

